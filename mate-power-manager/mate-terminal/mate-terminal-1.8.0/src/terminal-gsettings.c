/*
 * terminal-gsettings.c: terminal gsettings utility methods
 *
 * Copyright (C) 2001 - 2003 Sun Microsystems, Inc.
 *               2012 Stefano Karapetsas
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License as
 * published by the Free Software Foundation; either version 2 of the
 * License, or (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA
 * 02111-1307, USA.
 *
 * Authors:
 *      Mark McLoughlin <mark@skynet.ie>
 *      Glynn Foster <glynn.foster@sun.com>
 *      Stefano Karapetsas <stefano@karapetsas.com>
 */

#include <config.h>

#include "terminal-gsettings.h"

#include <string.h>
#include <glib.h>
#include <gio/gio.h>

/* copied from gnome-panel */
gboolean
terminal_gsettings_append_strv (GSettings   *settings,
                             const gchar *key,
                             const gchar *value)
{
        gchar    **old;
        gchar    **new;
        gint       size;
        gboolean   retval;

        old = g_settings_get_strv (settings, key);

        for (size = 0; old[size] != NULL; size++);

        size += 1; /* appended value */
        size += 1; /* NULL */

        new = g_realloc_n (old, size, sizeof (gchar *));

        new[size - 2] = g_strdup (value);
        new[size - 1] = NULL;

        retval = g_settings_set_strv (settings, key,
                                      (const gchar **) new);

        g_strfreev (new);

        return retval;
}

/* copied from gnome-panel */
gboolean
terminal_gsettings_remove_all_from_strv (GSettings   *settings,
                                      const gchar *key,
                                      const gchar *value)
{
        GArray    *array;
        gchar    **old;
        gint       i;
        gboolean   retval;

        old = g_settings_get_strv (settings, key);
        array = g_array_new (TRUE, TRUE, sizeof (gchar *));

        for (i = 0; old[i] != NULL; i++) {
                if (g_strcmp0 (old[i], value) != 0)
                        array = g_array_append_val (array, old[i]);
        }

        retval = g_settings_set_strv (settings, key,
                                      (const gchar **) array->data);

        g_strfreev (old);
        g_array_free (array, TRUE);

        return retval;
}



/* convert a gchar ** to GList (taken from libmatekbd code) */
GSList*
terminal_gsettings_strv_to_gslist (const gchar *const *array)
{
    GSList *list = NULL;
    gint i;
    if (array != NULL) {
        for (i = 0; array[i]; i++) {
            list = g_slist_append (list, g_strdup (array[i]));
        }
    }
    return list;
}

