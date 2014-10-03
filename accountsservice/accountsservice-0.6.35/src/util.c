/* -*- Mode: C; tab-width: 8; indent-tabs-mode: nil; c-basic-offset: 8 -*-
 *
 * Copyright (C) 2009-2010 Red Hat, Inc.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA
 *
 * Written by: Matthias Clasen <mclasen@redhat.com>
 */

#include "config.h"

#include <string.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <sys/wait.h>
#include <fcntl.h>
#include <grp.h>

#include <syslog.h>

#include <polkit/polkit.h>

#include "util.h"

static gchar *
get_cmdline_of_pid (GPid pid)
{
  gchar *ret = NULL;
  gchar *filename;
  gchar *contents;
  gsize contents_len;
  GError *error;
  guint n;

  filename = g_strdup_printf ("/proc/%d/cmdline", (int) pid);

  if (!g_file_get_contents (filename,
                            &contents,
                            &contents_len,
                            &error))
    {
      g_warning ("Error opening `%s': %s",
                 filename,
                 error->message);
      g_error_free (error);
      goto out;
    }
  /* The kernel uses '\0' to separate arguments - replace those with a space. */
  for (n = 0; n < contents_len - 1; n++)
    {
      if (contents[n] == '\0')
        contents[n] = ' ';
    }

  ret = g_strdup (contents);
  g_strstrip (ret);

 out:
  g_free (filename);
  g_free (contents);

  return ret;
}

static gboolean
get_caller_pid (GDBusMethodInvocation *context,
                GPid                  *pid)
{
        GVariant      *reply;
        GError        *error;
        guint32        pid_as_int;

        error = NULL;
        reply = g_dbus_connection_call_sync (g_dbus_method_invocation_get_connection (context),
                                             "org.freedesktop.DBus",
                                             "/org/freedesktop/DBus",
                                             "org.freedesktop.DBus",
                                             "GetConnectionUnixProcessID",
                                             g_variant_new ("(s)",
                                                            g_dbus_method_invocation_get_sender (context)),
                                             G_VARIANT_TYPE ("(u)"),
                                             G_DBUS_CALL_FLAGS_NONE,
                                             -1,
                                             NULL,
                                             &error);

        if (reply == NULL) {
                g_warning ("Could not talk to message bus to find uid of sender %s: %s",
                           g_dbus_method_invocation_get_sender (context),
                           error->message);
                g_error_free (error);

                return FALSE;
        }

        g_variant_get (reply, "(u)", &pid_as_int);
        *pid = pid_as_int;

        g_variant_unref (reply);

        return TRUE;
}

void
sys_log (GDBusMethodInvocation *context,
         const gchar           *format,
                                ...)
{
        va_list args;
        gchar *msg;

        va_start (args, format);
        msg = g_strdup_vprintf (format, args);
        va_end (args);

        if (context) {
                PolkitSubject *subject;
                gchar *cmdline = NULL;
                gchar *id;
                GPid pid = 0;
                gint uid = -1;
                gchar *tmp;

                subject = polkit_system_bus_name_new (g_dbus_method_invocation_get_sender (context));
                id = polkit_subject_to_string (subject);

                if (get_caller_pid (context, &pid)) {
                        cmdline = get_cmdline_of_pid (pid);
                } else {
                        pid = 0;
                        cmdline = NULL;
                }

                if (cmdline != NULL) {
                        if (get_caller_uid (context, &uid)) {
                                tmp = g_strdup_printf ("request by %s [%s pid:%d uid:%d]: %s", id, cmdline, (int) pid, uid, msg);
                        } else {
                                tmp = g_strdup_printf ("request by %s [%s pid:%d]: %s", id, cmdline, (int) pid, msg);
                        }
                } else {
                        if (get_caller_uid (context, &uid) && pid != 0) {
                                tmp = g_strdup_printf ("request by %s [pid:%d uid:%d]: %s", id, (int) pid, uid, msg);
                        } else if (pid != 0) {
                                tmp = g_strdup_printf ("request by %s [pid:%d]: %s", id, (int) pid, msg);
                        } else {
                                tmp = g_strdup_printf ("request by %s: %s", id, msg);
                        }
                }

                g_free (msg);
                msg = tmp;

                g_free (id);
                g_free (cmdline);
                g_object_unref (subject);
        }

        syslog (LOG_NOTICE, "%s", msg);

        g_free (msg);
}

static void
get_caller_loginuid (GDBusMethodInvocation *context, gchar *loginuid, gint size)
{
        GPid pid;
        gint uid;
        gchar *path;
        gchar *buf;

        if (!get_caller_uid (context, &uid)) {
                uid = getuid ();
        }

        if (get_caller_pid (context, &pid)) {
                path = g_strdup_printf ("/proc/%d/loginuid", (int) pid);
        } else {
                path = NULL;
        }

        if (path != NULL && g_file_get_contents (path, &buf, NULL, NULL)) {
                strncpy (loginuid, buf, size);
                g_free (buf);
        }
        else {
                g_snprintf (loginuid, size, "%d", uid);
        }

        g_free (path);
}

static gboolean
compat_check_exit_status (int      estatus,
                          GError **error)
{
#if GLIB_CHECK_VERSION(2, 33, 12)
        return g_spawn_check_exit_status (estatus, error);
#else
        if (!WIFEXITED (estatus)) {
                g_set_error (error,
                             G_SPAWN_ERROR,
                             G_SPAWN_ERROR_FAILED,
                             "Exited abnormally");
                return FALSE;
        }
        if (WEXITSTATUS (estatus) != 0) {
                g_set_error (error,
                             G_SPAWN_ERROR,
                             G_SPAWN_ERROR_FAILED,
                             "Exited with code %d",
                             WEXITSTATUS(estatus));
                return FALSE;
        }
        return TRUE;
#endif
}

static void
setup_loginuid (gpointer data)
{
        const char *id = data;
        int fd;

        fd = open ("/proc/self/loginuid", O_WRONLY);
        write (fd, id, strlen (id));
        close (fd);
}

gboolean
spawn_with_login_uid (GDBusMethodInvocation  *context,
                      const gchar            *argv[],
                      GError                **error)
{
        gboolean ret = FALSE;
        gchar loginuid[20];
        gint status;

        get_caller_loginuid (context, loginuid, G_N_ELEMENTS (loginuid));

        if (!g_spawn_sync (NULL, (gchar**)argv, NULL, 0, setup_loginuid, loginuid, NULL, NULL, &status, error))
                goto out;
        if (!compat_check_exit_status (status, error))
                goto out;

        ret = TRUE;
 out:
        return ret;
}

static char *
read_all_from_fd (int      fd,
                  GError **error)
{
        GIOChannel *channel;
        char *str;
        GIOStatus status;

        channel = g_io_channel_unix_new (fd);
        while ((status = g_io_channel_read_to_end (channel, &str, NULL, error))
               == G_IO_STATUS_AGAIN);

        if (status != G_IO_STATUS_NORMAL)
                str = NULL;

        g_io_channel_unref (channel);
        return str;
}

static GIOStatus
write_all_to_fd (int          fd,
                 const char  *str,
                 GError     **error)
{
        GIOChannel *channel;
        GIOStatus status;
        gsize written;

        channel = g_io_channel_unix_new (fd);
        written = 0;
        while ((status = g_io_channel_write_chars (channel, str + written, -1, &written, error))
               == G_IO_STATUS_AGAIN);

        g_io_channel_unref (channel);
        return status;
}

gboolean
spawn_with_login_uid_and_stdin (GDBusMethodInvocation  *context,
                                const gchar            *argv[],
                                const gchar            *stdin,
                                GError                **error)
{
        GError *local_error;
        gchar loginuid[20];
        gint std_in, std_err;
        gint status;
        char *std_err_str;
        GPid pid;

        get_caller_loginuid (context, loginuid, 20);

        local_error = NULL;

        if (!g_spawn_async_with_pipes (NULL, (gchar**)argv, NULL,
                                       G_SPAWN_DO_NOT_REAP_CHILD,
                                       setup_loginuid, loginuid,
                                       &pid, &std_in, NULL, &std_err, &local_error)) {
                g_propagate_error (error, local_error);
                return FALSE;
        }

        if (write_all_to_fd (std_in, stdin, &local_error) == G_IO_STATUS_ERROR) {
                g_prefix_error (&local_error, "Error writing to child standard input: ");
                g_propagate_error (error, local_error);
                close (std_in);
                close (std_err);
                return FALSE;
        }

        close (std_in);
        /* We need to read from stderr before calling waitpid, or the child
           could be blocked on a pipe buffer flush */
        std_err_str = read_all_from_fd (std_err, &local_error);
        /* At this point, it is safe to close std_err: EOF is returned from a pipe
           read only when the writing end is closed, so when we return from read_all_from_fd()
           the child is already done, and there is no risk of SIGPIPE
        */
        close (std_err);

        waitpid (pid, &status, 0);

        if (std_err_str == NULL) {
                g_prefix_error (&local_error, "Error reading from child standard error: ");
                g_propagate_error (error, local_error);
                return FALSE;
        }

        if (WEXITSTATUS (status) != 0) {
                g_set_error (error,
                             G_SPAWN_ERROR,
                             G_SPAWN_ERROR_FAILED,
                             "%s returned an error (%d): %s",
                             argv[0], WEXITSTATUS(status), std_err_str);
                g_free (std_err_str);
                return FALSE;
        }

        g_free (std_err_str);

        return TRUE;
}

gint
get_user_groups (const gchar  *user,
                 gid_t         group,
                 gid_t       **groups)
{
        gint res;
        gint ngroups;

        ngroups = 0;
        res = getgrouplist (user, group, NULL, &ngroups);

        g_debug ("user %s has %d groups", user, ngroups);
        *groups = g_new (gid_t, ngroups);
        res = getgrouplist (user, group, *groups, &ngroups);

        return res;
}


gboolean
get_caller_uid (GDBusMethodInvocation *context,
                gint                  *uid)
{
        GVariant      *reply;
        GError        *error;

        error = NULL;
        reply = g_dbus_connection_call_sync (g_dbus_method_invocation_get_connection (context),
                                             "org.freedesktop.DBus",
                                             "/org/freedesktop/DBus",
                                             "org.freedesktop.DBus",
                                             "GetConnectionUnixUser",
                                             g_variant_new ("(s)",
                                                            g_dbus_method_invocation_get_sender (context)),
                                             G_VARIANT_TYPE ("(u)"),
                                             G_DBUS_CALL_FLAGS_NONE,
                                             -1,
                                             NULL,
                                             &error);

        if (reply == NULL) {
                g_warning ("Could not talk to message bus to find uid of sender %s: %s",
                           g_dbus_method_invocation_get_sender (context),
                           error->message);
                g_error_free (error);

                return FALSE;
        }

        g_variant_get (reply, "(u)", uid);
        g_variant_unref (reply);

        return TRUE;
}

void
add_user_to_group (GDBusMethodInvocation *context,
                   const char *user_name,
                   const char *group_name)
{
        GError *error;
        const gchar *argv[4];

        argv[0] = (gchar*) "/usr/sbin/adduser";
        argv[1] = (gchar*) user_name;
        argv[2] = (gchar*) group_name;
        argv[3] = NULL;

        error = NULL;
        if (!spawn_with_login_uid (context, argv, &error)) {
                g_warning ("failed to add user %s to group %s", user_name, group_name);
                g_error_free (error);
                return;
        }
}

void
remove_user_from_group (GDBusMethodInvocation *context,
                        const char *user_name,
                        const char *group_name)
{
        GError *error;
        const gchar *argv[4];

        argv[0] = (gchar*) "/usr/sbin/deluser";
        argv[1] = (gchar*) user_name;
        argv[2] = (gchar*) group_name;
        argv[3] = NULL;

        error = NULL;
        if (!spawn_with_login_uid (context, argv, &error)) {
                g_warning ("failed to remove user %s from group %s", user_name, group_name);
                g_error_free (error);
                return;
        }
}
