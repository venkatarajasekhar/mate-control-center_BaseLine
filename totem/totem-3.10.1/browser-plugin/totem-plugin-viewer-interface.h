/* Generated by dbus-binding-tool; do not edit! */


#ifndef __dbus_glib_marshal_totem_embedded_MARSHAL_H__
#define __dbus_glib_marshal_totem_embedded_MARSHAL_H__

#include	<glib-object.h>

G_BEGIN_DECLS

#ifdef G_ENABLE_DEBUG
#define g_marshal_value_peek_boolean(v)  g_value_get_boolean (v)
#define g_marshal_value_peek_char(v)     g_value_get_schar (v)
#define g_marshal_value_peek_uchar(v)    g_value_get_uchar (v)
#define g_marshal_value_peek_int(v)      g_value_get_int (v)
#define g_marshal_value_peek_uint(v)     g_value_get_uint (v)
#define g_marshal_value_peek_long(v)     g_value_get_long (v)
#define g_marshal_value_peek_ulong(v)    g_value_get_ulong (v)
#define g_marshal_value_peek_int64(v)    g_value_get_int64 (v)
#define g_marshal_value_peek_uint64(v)   g_value_get_uint64 (v)
#define g_marshal_value_peek_enum(v)     g_value_get_enum (v)
#define g_marshal_value_peek_flags(v)    g_value_get_flags (v)
#define g_marshal_value_peek_float(v)    g_value_get_float (v)
#define g_marshal_value_peek_double(v)   g_value_get_double (v)
#define g_marshal_value_peek_string(v)   (char*) g_value_get_string (v)
#define g_marshal_value_peek_param(v)    g_value_get_param (v)
#define g_marshal_value_peek_boxed(v)    g_value_get_boxed (v)
#define g_marshal_value_peek_pointer(v)  g_value_get_pointer (v)
#define g_marshal_value_peek_object(v)   g_value_get_object (v)
#define g_marshal_value_peek_variant(v)  g_value_get_variant (v)
#else /* !G_ENABLE_DEBUG */
/* WARNING: This code accesses GValues directly, which is UNSUPPORTED API.
 *          Do not access GValues directly in your code. Instead, use the
 *          g_value_get_*() functions
 */
#define g_marshal_value_peek_boolean(v)  (v)->data[0].v_int
#define g_marshal_value_peek_char(v)     (v)->data[0].v_int
#define g_marshal_value_peek_uchar(v)    (v)->data[0].v_uint
#define g_marshal_value_peek_int(v)      (v)->data[0].v_int
#define g_marshal_value_peek_uint(v)     (v)->data[0].v_uint
#define g_marshal_value_peek_long(v)     (v)->data[0].v_long
#define g_marshal_value_peek_ulong(v)    (v)->data[0].v_ulong
#define g_marshal_value_peek_int64(v)    (v)->data[0].v_int64
#define g_marshal_value_peek_uint64(v)   (v)->data[0].v_uint64
#define g_marshal_value_peek_enum(v)     (v)->data[0].v_long
#define g_marshal_value_peek_flags(v)    (v)->data[0].v_ulong
#define g_marshal_value_peek_float(v)    (v)->data[0].v_float
#define g_marshal_value_peek_double(v)   (v)->data[0].v_double
#define g_marshal_value_peek_string(v)   (v)->data[0].v_pointer
#define g_marshal_value_peek_param(v)    (v)->data[0].v_pointer
#define g_marshal_value_peek_boxed(v)    (v)->data[0].v_pointer
#define g_marshal_value_peek_pointer(v)  (v)->data[0].v_pointer
#define g_marshal_value_peek_object(v)   (v)->data[0].v_pointer
#define g_marshal_value_peek_variant(v)  (v)->data[0].v_pointer
#endif /* !G_ENABLE_DEBUG */


/* BOOLEAN:STRING,STRING,STRING,STRING,POINTER */
extern void dbus_glib_marshal_totem_embedded_BOOLEAN__STRING_STRING_STRING_STRING_POINTER (GClosure     *closure,
                                                                                           GValue       *return_value,
                                                                                           guint         n_param_values,
                                                                                           const GValue *param_values,
                                                                                           gpointer      invocation_hint,
                                                                                           gpointer      marshal_data);
void
dbus_glib_marshal_totem_embedded_BOOLEAN__STRING_STRING_STRING_STRING_POINTER (GClosure     *closure,
                                                                               GValue       *return_value G_GNUC_UNUSED,
                                                                               guint         n_param_values,
                                                                               const GValue *param_values,
                                                                               gpointer      invocation_hint G_GNUC_UNUSED,
                                                                               gpointer      marshal_data)
{
  typedef gboolean (*GMarshalFunc_BOOLEAN__STRING_STRING_STRING_STRING_POINTER) (gpointer     data1,
                                                                                 gpointer     arg_1,
                                                                                 gpointer     arg_2,
                                                                                 gpointer     arg_3,
                                                                                 gpointer     arg_4,
                                                                                 gpointer     arg_5,
                                                                                 gpointer     data2);
  register GMarshalFunc_BOOLEAN__STRING_STRING_STRING_STRING_POINTER callback;
  register GCClosure *cc = (GCClosure*) closure;
  register gpointer data1, data2;
  gboolean v_return;

  g_return_if_fail (return_value != NULL);
  g_return_if_fail (n_param_values == 6);

  if (G_CCLOSURE_SWAP_DATA (closure))
    {
      data1 = closure->data;
      data2 = g_value_peek_pointer (param_values + 0);
    }
  else
    {
      data1 = g_value_peek_pointer (param_values + 0);
      data2 = closure->data;
    }
  callback = (GMarshalFunc_BOOLEAN__STRING_STRING_STRING_STRING_POINTER) (marshal_data ? marshal_data : cc->callback);

  v_return = callback (data1,
                       g_marshal_value_peek_string (param_values + 1),
                       g_marshal_value_peek_string (param_values + 2),
                       g_marshal_value_peek_string (param_values + 3),
                       g_marshal_value_peek_string (param_values + 4),
                       g_marshal_value_peek_pointer (param_values + 5),
                       data2);

  g_value_set_boolean (return_value, v_return);
}

/* BOOLEAN:INT64,POINTER */
extern void dbus_glib_marshal_totem_embedded_BOOLEAN__INT64_POINTER (GClosure     *closure,
                                                                     GValue       *return_value,
                                                                     guint         n_param_values,
                                                                     const GValue *param_values,
                                                                     gpointer      invocation_hint,
                                                                     gpointer      marshal_data);
void
dbus_glib_marshal_totem_embedded_BOOLEAN__INT64_POINTER (GClosure     *closure,
                                                         GValue       *return_value G_GNUC_UNUSED,
                                                         guint         n_param_values,
                                                         const GValue *param_values,
                                                         gpointer      invocation_hint G_GNUC_UNUSED,
                                                         gpointer      marshal_data)
{
  typedef gboolean (*GMarshalFunc_BOOLEAN__INT64_POINTER) (gpointer     data1,
                                                           gint64       arg_1,
                                                           gpointer     arg_2,
                                                           gpointer     data2);
  register GMarshalFunc_BOOLEAN__INT64_POINTER callback;
  register GCClosure *cc = (GCClosure*) closure;
  register gpointer data1, data2;
  gboolean v_return;

  g_return_if_fail (return_value != NULL);
  g_return_if_fail (n_param_values == 3);

  if (G_CCLOSURE_SWAP_DATA (closure))
    {
      data1 = closure->data;
      data2 = g_value_peek_pointer (param_values + 0);
    }
  else
    {
      data1 = g_value_peek_pointer (param_values + 0);
      data2 = closure->data;
    }
  callback = (GMarshalFunc_BOOLEAN__INT64_POINTER) (marshal_data ? marshal_data : cc->callback);

  v_return = callback (data1,
                       g_marshal_value_peek_int64 (param_values + 1),
                       g_marshal_value_peek_pointer (param_values + 2),
                       data2);

  g_value_set_boolean (return_value, v_return);
}

/* BOOLEAN:STRING,UINT,INT,INT,POINTER */
extern void dbus_glib_marshal_totem_embedded_BOOLEAN__STRING_UINT_INT_INT_POINTER (GClosure     *closure,
                                                                                   GValue       *return_value,
                                                                                   guint         n_param_values,
                                                                                   const GValue *param_values,
                                                                                   gpointer      invocation_hint,
                                                                                   gpointer      marshal_data);
void
dbus_glib_marshal_totem_embedded_BOOLEAN__STRING_UINT_INT_INT_POINTER (GClosure     *closure,
                                                                       GValue       *return_value G_GNUC_UNUSED,
                                                                       guint         n_param_values,
                                                                       const GValue *param_values,
                                                                       gpointer      invocation_hint G_GNUC_UNUSED,
                                                                       gpointer      marshal_data)
{
  typedef gboolean (*GMarshalFunc_BOOLEAN__STRING_UINT_INT_INT_POINTER) (gpointer     data1,
                                                                         gpointer     arg_1,
                                                                         guint        arg_2,
                                                                         gint         arg_3,
                                                                         gint         arg_4,
                                                                         gpointer     arg_5,
                                                                         gpointer     data2);
  register GMarshalFunc_BOOLEAN__STRING_UINT_INT_INT_POINTER callback;
  register GCClosure *cc = (GCClosure*) closure;
  register gpointer data1, data2;
  gboolean v_return;

  g_return_if_fail (return_value != NULL);
  g_return_if_fail (n_param_values == 6);

  if (G_CCLOSURE_SWAP_DATA (closure))
    {
      data1 = closure->data;
      data2 = g_value_peek_pointer (param_values + 0);
    }
  else
    {
      data1 = g_value_peek_pointer (param_values + 0);
      data2 = closure->data;
    }
  callback = (GMarshalFunc_BOOLEAN__STRING_UINT_INT_INT_POINTER) (marshal_data ? marshal_data : cc->callback);

  v_return = callback (data1,
                       g_marshal_value_peek_string (param_values + 1),
                       g_marshal_value_peek_uint (param_values + 2),
                       g_marshal_value_peek_int (param_values + 3),
                       g_marshal_value_peek_int (param_values + 4),
                       g_marshal_value_peek_pointer (param_values + 5),
                       data2);

  g_value_set_boolean (return_value, v_return);
}

/* BOOLEAN:POINTER */
extern void dbus_glib_marshal_totem_embedded_BOOLEAN__POINTER (GClosure     *closure,
                                                               GValue       *return_value,
                                                               guint         n_param_values,
                                                               const GValue *param_values,
                                                               gpointer      invocation_hint,
                                                               gpointer      marshal_data);
void
dbus_glib_marshal_totem_embedded_BOOLEAN__POINTER (GClosure     *closure,
                                                   GValue       *return_value G_GNUC_UNUSED,
                                                   guint         n_param_values,
                                                   const GValue *param_values,
                                                   gpointer      invocation_hint G_GNUC_UNUSED,
                                                   gpointer      marshal_data)
{
  typedef gboolean (*GMarshalFunc_BOOLEAN__POINTER) (gpointer     data1,
                                                     gpointer     arg_1,
                                                     gpointer     data2);
  register GMarshalFunc_BOOLEAN__POINTER callback;
  register GCClosure *cc = (GCClosure*) closure;
  register gpointer data1, data2;
  gboolean v_return;

  g_return_if_fail (return_value != NULL);
  g_return_if_fail (n_param_values == 2);

  if (G_CCLOSURE_SWAP_DATA (closure))
    {
      data1 = closure->data;
      data2 = g_value_peek_pointer (param_values + 0);
    }
  else
    {
      data1 = g_value_peek_pointer (param_values + 0);
      data2 = closure->data;
    }
  callback = (GMarshalFunc_BOOLEAN__POINTER) (marshal_data ? marshal_data : cc->callback);

  v_return = callback (data1,
                       g_marshal_value_peek_pointer (param_values + 1),
                       data2);

  g_value_set_boolean (return_value, v_return);
}

/* BOOLEAN:DOUBLE,POINTER */
extern void dbus_glib_marshal_totem_embedded_BOOLEAN__DOUBLE_POINTER (GClosure     *closure,
                                                                      GValue       *return_value,
                                                                      guint         n_param_values,
                                                                      const GValue *param_values,
                                                                      gpointer      invocation_hint,
                                                                      gpointer      marshal_data);
void
dbus_glib_marshal_totem_embedded_BOOLEAN__DOUBLE_POINTER (GClosure     *closure,
                                                          GValue       *return_value G_GNUC_UNUSED,
                                                          guint         n_param_values,
                                                          const GValue *param_values,
                                                          gpointer      invocation_hint G_GNUC_UNUSED,
                                                          gpointer      marshal_data)
{
  typedef gboolean (*GMarshalFunc_BOOLEAN__DOUBLE_POINTER) (gpointer     data1,
                                                            gdouble      arg_1,
                                                            gpointer     arg_2,
                                                            gpointer     data2);
  register GMarshalFunc_BOOLEAN__DOUBLE_POINTER callback;
  register GCClosure *cc = (GCClosure*) closure;
  register gpointer data1, data2;
  gboolean v_return;

  g_return_if_fail (return_value != NULL);
  g_return_if_fail (n_param_values == 3);

  if (G_CCLOSURE_SWAP_DATA (closure))
    {
      data1 = closure->data;
      data2 = g_value_peek_pointer (param_values + 0);
    }
  else
    {
      data1 = g_value_peek_pointer (param_values + 0);
      data2 = closure->data;
    }
  callback = (GMarshalFunc_BOOLEAN__DOUBLE_POINTER) (marshal_data ? marshal_data : cc->callback);

  v_return = callback (data1,
                       g_marshal_value_peek_double (param_values + 1),
                       g_marshal_value_peek_pointer (param_values + 2),
                       data2);

  g_value_set_boolean (return_value, v_return);
}

/* BOOLEAN:STRING,STRING,STRING,POINTER */
extern void dbus_glib_marshal_totem_embedded_BOOLEAN__STRING_STRING_STRING_POINTER (GClosure     *closure,
                                                                                    GValue       *return_value,
                                                                                    guint         n_param_values,
                                                                                    const GValue *param_values,
                                                                                    gpointer      invocation_hint,
                                                                                    gpointer      marshal_data);
void
dbus_glib_marshal_totem_embedded_BOOLEAN__STRING_STRING_STRING_POINTER (GClosure     *closure,
                                                                        GValue       *return_value G_GNUC_UNUSED,
                                                                        guint         n_param_values,
                                                                        const GValue *param_values,
                                                                        gpointer      invocation_hint G_GNUC_UNUSED,
                                                                        gpointer      marshal_data)
{
  typedef gboolean (*GMarshalFunc_BOOLEAN__STRING_STRING_STRING_POINTER) (gpointer     data1,
                                                                          gpointer     arg_1,
                                                                          gpointer     arg_2,
                                                                          gpointer     arg_3,
                                                                          gpointer     arg_4,
                                                                          gpointer     data2);
  register GMarshalFunc_BOOLEAN__STRING_STRING_STRING_POINTER callback;
  register GCClosure *cc = (GCClosure*) closure;
  register gpointer data1, data2;
  gboolean v_return;

  g_return_if_fail (return_value != NULL);
  g_return_if_fail (n_param_values == 5);

  if (G_CCLOSURE_SWAP_DATA (closure))
    {
      data1 = closure->data;
      data2 = g_value_peek_pointer (param_values + 0);
    }
  else
    {
      data1 = g_value_peek_pointer (param_values + 0);
      data2 = closure->data;
    }
  callback = (GMarshalFunc_BOOLEAN__STRING_STRING_STRING_POINTER) (marshal_data ? marshal_data : cc->callback);

  v_return = callback (data1,
                       g_marshal_value_peek_string (param_values + 1),
                       g_marshal_value_peek_string (param_values + 2),
                       g_marshal_value_peek_string (param_values + 3),
                       g_marshal_value_peek_pointer (param_values + 4),
                       data2);

  g_value_set_boolean (return_value, v_return);
}

/* BOOLEAN:STRING,UINT,POINTER */
extern void dbus_glib_marshal_totem_embedded_BOOLEAN__STRING_UINT_POINTER (GClosure     *closure,
                                                                           GValue       *return_value,
                                                                           guint         n_param_values,
                                                                           const GValue *param_values,
                                                                           gpointer      invocation_hint,
                                                                           gpointer      marshal_data);
void
dbus_glib_marshal_totem_embedded_BOOLEAN__STRING_UINT_POINTER (GClosure     *closure,
                                                               GValue       *return_value G_GNUC_UNUSED,
                                                               guint         n_param_values,
                                                               const GValue *param_values,
                                                               gpointer      invocation_hint G_GNUC_UNUSED,
                                                               gpointer      marshal_data)
{
  typedef gboolean (*GMarshalFunc_BOOLEAN__STRING_UINT_POINTER) (gpointer     data1,
                                                                 gpointer     arg_1,
                                                                 guint        arg_2,
                                                                 gpointer     arg_3,
                                                                 gpointer     data2);
  register GMarshalFunc_BOOLEAN__STRING_UINT_POINTER callback;
  register GCClosure *cc = (GCClosure*) closure;
  register gpointer data1, data2;
  gboolean v_return;

  g_return_if_fail (return_value != NULL);
  g_return_if_fail (n_param_values == 4);

  if (G_CCLOSURE_SWAP_DATA (closure))
    {
      data1 = closure->data;
      data2 = g_value_peek_pointer (param_values + 0);
    }
  else
    {
      data1 = g_value_peek_pointer (param_values + 0);
      data2 = closure->data;
    }
  callback = (GMarshalFunc_BOOLEAN__STRING_UINT_POINTER) (marshal_data ? marshal_data : cc->callback);

  v_return = callback (data1,
                       g_marshal_value_peek_string (param_values + 1),
                       g_marshal_value_peek_uint (param_values + 2),
                       g_marshal_value_peek_pointer (param_values + 3),
                       data2);

  g_value_set_boolean (return_value, v_return);
}

/* BOOLEAN:UINT64,POINTER */
extern void dbus_glib_marshal_totem_embedded_BOOLEAN__UINT64_POINTER (GClosure     *closure,
                                                                      GValue       *return_value,
                                                                      guint         n_param_values,
                                                                      const GValue *param_values,
                                                                      gpointer      invocation_hint,
                                                                      gpointer      marshal_data);
void
dbus_glib_marshal_totem_embedded_BOOLEAN__UINT64_POINTER (GClosure     *closure,
                                                          GValue       *return_value G_GNUC_UNUSED,
                                                          guint         n_param_values,
                                                          const GValue *param_values,
                                                          gpointer      invocation_hint G_GNUC_UNUSED,
                                                          gpointer      marshal_data)
{
  typedef gboolean (*GMarshalFunc_BOOLEAN__UINT64_POINTER) (gpointer     data1,
                                                            guint64      arg_1,
                                                            gpointer     arg_2,
                                                            gpointer     data2);
  register GMarshalFunc_BOOLEAN__UINT64_POINTER callback;
  register GCClosure *cc = (GCClosure*) closure;
  register gpointer data1, data2;
  gboolean v_return;

  g_return_if_fail (return_value != NULL);
  g_return_if_fail (n_param_values == 3);

  if (G_CCLOSURE_SWAP_DATA (closure))
    {
      data1 = closure->data;
      data2 = g_value_peek_pointer (param_values + 0);
    }
  else
    {
      data1 = g_value_peek_pointer (param_values + 0);
      data2 = closure->data;
    }
  callback = (GMarshalFunc_BOOLEAN__UINT64_POINTER) (marshal_data ? marshal_data : cc->callback);

  v_return = callback (data1,
                       g_marshal_value_peek_uint64 (param_values + 1),
                       g_marshal_value_peek_pointer (param_values + 2),
                       data2);

  g_value_set_boolean (return_value, v_return);
}

/* BOOLEAN:UINT,POINTER */
extern void dbus_glib_marshal_totem_embedded_BOOLEAN__UINT_POINTER (GClosure     *closure,
                                                                    GValue       *return_value,
                                                                    guint         n_param_values,
                                                                    const GValue *param_values,
                                                                    gpointer      invocation_hint,
                                                                    gpointer      marshal_data);
void
dbus_glib_marshal_totem_embedded_BOOLEAN__UINT_POINTER (GClosure     *closure,
                                                        GValue       *return_value G_GNUC_UNUSED,
                                                        guint         n_param_values,
                                                        const GValue *param_values,
                                                        gpointer      invocation_hint G_GNUC_UNUSED,
                                                        gpointer      marshal_data)
{
  typedef gboolean (*GMarshalFunc_BOOLEAN__UINT_POINTER) (gpointer     data1,
                                                          guint        arg_1,
                                                          gpointer     arg_2,
                                                          gpointer     data2);
  register GMarshalFunc_BOOLEAN__UINT_POINTER callback;
  register GCClosure *cc = (GCClosure*) closure;
  register gpointer data1, data2;
  gboolean v_return;

  g_return_if_fail (return_value != NULL);
  g_return_if_fail (n_param_values == 3);

  if (G_CCLOSURE_SWAP_DATA (closure))
    {
      data1 = closure->data;
      data2 = g_value_peek_pointer (param_values + 0);
    }
  else
    {
      data1 = g_value_peek_pointer (param_values + 0);
      data2 = closure->data;
    }
  callback = (GMarshalFunc_BOOLEAN__UINT_POINTER) (marshal_data ? marshal_data : cc->callback);

  v_return = callback (data1,
                       g_marshal_value_peek_uint (param_values + 1),
                       g_marshal_value_peek_pointer (param_values + 2),
                       data2);

  g_value_set_boolean (return_value, v_return);
}

/* BOOLEAN:STRING,STRING,POINTER */
extern void dbus_glib_marshal_totem_embedded_BOOLEAN__STRING_STRING_POINTER (GClosure     *closure,
                                                                             GValue       *return_value,
                                                                             guint         n_param_values,
                                                                             const GValue *param_values,
                                                                             gpointer      invocation_hint,
                                                                             gpointer      marshal_data);
void
dbus_glib_marshal_totem_embedded_BOOLEAN__STRING_STRING_POINTER (GClosure     *closure,
                                                                 GValue       *return_value G_GNUC_UNUSED,
                                                                 guint         n_param_values,
                                                                 const GValue *param_values,
                                                                 gpointer      invocation_hint G_GNUC_UNUSED,
                                                                 gpointer      marshal_data)
{
  typedef gboolean (*GMarshalFunc_BOOLEAN__STRING_STRING_POINTER) (gpointer     data1,
                                                                   gpointer     arg_1,
                                                                   gpointer     arg_2,
                                                                   gpointer     arg_3,
                                                                   gpointer     data2);
  register GMarshalFunc_BOOLEAN__STRING_STRING_POINTER callback;
  register GCClosure *cc = (GCClosure*) closure;
  register gpointer data1, data2;
  gboolean v_return;

  g_return_if_fail (return_value != NULL);
  g_return_if_fail (n_param_values == 4);

  if (G_CCLOSURE_SWAP_DATA (closure))
    {
      data1 = closure->data;
      data2 = g_value_peek_pointer (param_values + 0);
    }
  else
    {
      data1 = g_value_peek_pointer (param_values + 0);
      data2 = closure->data;
    }
  callback = (GMarshalFunc_BOOLEAN__STRING_STRING_POINTER) (marshal_data ? marshal_data : cc->callback);

  v_return = callback (data1,
                       g_marshal_value_peek_string (param_values + 1),
                       g_marshal_value_peek_string (param_values + 2),
                       g_marshal_value_peek_pointer (param_values + 3),
                       data2);

  g_value_set_boolean (return_value, v_return);
}

/* BOOLEAN:STRING,POINTER */
extern void dbus_glib_marshal_totem_embedded_BOOLEAN__STRING_POINTER (GClosure     *closure,
                                                                      GValue       *return_value,
                                                                      guint         n_param_values,
                                                                      const GValue *param_values,
                                                                      gpointer      invocation_hint,
                                                                      gpointer      marshal_data);
void
dbus_glib_marshal_totem_embedded_BOOLEAN__STRING_POINTER (GClosure     *closure,
                                                          GValue       *return_value G_GNUC_UNUSED,
                                                          guint         n_param_values,
                                                          const GValue *param_values,
                                                          gpointer      invocation_hint G_GNUC_UNUSED,
                                                          gpointer      marshal_data)
{
  typedef gboolean (*GMarshalFunc_BOOLEAN__STRING_POINTER) (gpointer     data1,
                                                            gpointer     arg_1,
                                                            gpointer     arg_2,
                                                            gpointer     data2);
  register GMarshalFunc_BOOLEAN__STRING_POINTER callback;
  register GCClosure *cc = (GCClosure*) closure;
  register gpointer data1, data2;
  gboolean v_return;

  g_return_if_fail (return_value != NULL);
  g_return_if_fail (n_param_values == 3);

  if (G_CCLOSURE_SWAP_DATA (closure))
    {
      data1 = closure->data;
      data2 = g_value_peek_pointer (param_values + 0);
    }
  else
    {
      data1 = g_value_peek_pointer (param_values + 0);
      data2 = closure->data;
    }
  callback = (GMarshalFunc_BOOLEAN__STRING_POINTER) (marshal_data ? marshal_data : cc->callback);

  v_return = callback (data1,
                       g_marshal_value_peek_string (param_values + 1),
                       g_marshal_value_peek_pointer (param_values + 2),
                       data2);

  g_value_set_boolean (return_value, v_return);
}

/* BOOLEAN:BOOLEAN,POINTER */
extern void dbus_glib_marshal_totem_embedded_BOOLEAN__BOOLEAN_POINTER (GClosure     *closure,
                                                                       GValue       *return_value,
                                                                       guint         n_param_values,
                                                                       const GValue *param_values,
                                                                       gpointer      invocation_hint,
                                                                       gpointer      marshal_data);
void
dbus_glib_marshal_totem_embedded_BOOLEAN__BOOLEAN_POINTER (GClosure     *closure,
                                                           GValue       *return_value G_GNUC_UNUSED,
                                                           guint         n_param_values,
                                                           const GValue *param_values,
                                                           gpointer      invocation_hint G_GNUC_UNUSED,
                                                           gpointer      marshal_data)
{
  typedef gboolean (*GMarshalFunc_BOOLEAN__BOOLEAN_POINTER) (gpointer     data1,
                                                             gboolean     arg_1,
                                                             gpointer     arg_2,
                                                             gpointer     data2);
  register GMarshalFunc_BOOLEAN__BOOLEAN_POINTER callback;
  register GCClosure *cc = (GCClosure*) closure;
  register gpointer data1, data2;
  gboolean v_return;

  g_return_if_fail (return_value != NULL);
  g_return_if_fail (n_param_values == 3);

  if (G_CCLOSURE_SWAP_DATA (closure))
    {
      data1 = closure->data;
      data2 = g_value_peek_pointer (param_values + 0);
    }
  else
    {
      data1 = g_value_peek_pointer (param_values + 0);
      data2 = closure->data;
    }
  callback = (GMarshalFunc_BOOLEAN__BOOLEAN_POINTER) (marshal_data ? marshal_data : cc->callback);

  v_return = callback (data1,
                       g_marshal_value_peek_boolean (param_values + 1),
                       g_marshal_value_peek_pointer (param_values + 2),
                       data2);

  g_value_set_boolean (return_value, v_return);
}

G_END_DECLS

#endif /* __dbus_glib_marshal_totem_embedded_MARSHAL_H__ */

#include <dbus/dbus-glib.h>
static const DBusGMethodInfo dbus_glib_totem_embedded_methods[] = {
  { (GCallback) totem_embedded_do_command, dbus_glib_marshal_totem_embedded_BOOLEAN__STRING_POINTER, 0 },
  { (GCallback) totem_embedded_set_window, dbus_glib_marshal_totem_embedded_BOOLEAN__STRING_UINT_INT_INT_POINTER, 54 },
  { (GCallback) totem_embedded_unset_window, dbus_glib_marshal_totem_embedded_BOOLEAN__UINT_POINTER, 138 },
  { (GCallback) totem_embedded_setup_stream, dbus_glib_marshal_totem_embedded_BOOLEAN__STRING_STRING_POINTER, 190 },
  { (GCallback) totem_embedded_open_stream, dbus_glib_marshal_totem_embedded_BOOLEAN__INT64_POINTER, 254 },
  { (GCallback) totem_embedded_close_stream, dbus_glib_marshal_totem_embedded_BOOLEAN__POINTER, 306 },
  { (GCallback) totem_embedded_open_uri, dbus_glib_marshal_totem_embedded_BOOLEAN__STRING_STRING_POINTER, 350 },
  { (GCallback) totem_embedded_set_playlist, dbus_glib_marshal_totem_embedded_BOOLEAN__STRING_STRING_STRING_POINTER, 410 },
  { (GCallback) totem_embedded_set_local_file, dbus_glib_marshal_totem_embedded_BOOLEAN__STRING_STRING_STRING_POINTER, 483 },
  { (GCallback) totem_embedded_set_local_cache, dbus_glib_marshal_totem_embedded_BOOLEAN__STRING_POINTER, 557 },
  { (GCallback) totem_embedded_set_href, dbus_glib_marshal_totem_embedded_BOOLEAN__STRING_STRING_POINTER, 612 },
  { (GCallback) totem_embedded_set_error_logo, dbus_glib_marshal_totem_embedded_BOOLEAN__POINTER, 675 },
  { (GCallback) totem_embedded_launch_player, dbus_glib_marshal_totem_embedded_BOOLEAN__STRING_UINT_POINTER, 720 },
  { (GCallback) totem_embedded_set_volume, dbus_glib_marshal_totem_embedded_BOOLEAN__DOUBLE_POINTER, 782 },
  { (GCallback) totem_embedded_clear_playlist, dbus_glib_marshal_totem_embedded_BOOLEAN__POINTER, 835 },
  { (GCallback) totem_embedded_add_item, dbus_glib_marshal_totem_embedded_BOOLEAN__STRING_STRING_STRING_STRING_POINTER, 881 },
  { (GCallback) totem_embedded_set_fullscreen, dbus_glib_marshal_totem_embedded_BOOLEAN__BOOLEAN_POINTER, 964 },
  { (GCallback) totem_embedded_set_time, dbus_glib_marshal_totem_embedded_BOOLEAN__UINT64_POINTER, 1032 },
};

const DBusGObjectInfo dbus_glib_totem_embedded_object_info = {  1,
  dbus_glib_totem_embedded_methods,
  18,
"org.gnome.totem.PluginViewer\0DoCommand\0S\0Command\0I\0s\0\0org.gnome.totem.PluginViewer\0SetWindow\0S\0Controls\0I\0s\0XID\0I\0u\0Width\0I\0i\0Height\0I\0i\0\0org.gnome.totem.PluginViewer\0UnsetWindow\0S\0XID\0I\0u\0\0org.gnome.totem.PluginViewer\0SetupStream\0S\0URI\0I\0s\0BaseURI\0I\0s\0\0org.gnome.totem.PluginViewer\0OpenStream\0S\0Size\0I\0x\0\0org.gnome.totem.PluginViewer\0CloseStream\0S\0\0org.gnome.totem.PluginViewer\0OpenURI\0S\0URI\0I\0s\0BaseURI\0I\0s\0\0org.gnome.totem.PluginViewer\0SetPlaylist\0S\0Path\0I\0s\0URI\0I\0s\0BaseURI\0I\0s\0\0org.gnome.totem.PluginViewer\0SetLocalFile\0S\0Path\0I\0s\0URI\0I\0s\0BaseURI\0I\0s\0\0org.gnome.totem.PluginViewer\0SetLocalCache\0S\0Path\0I\0s\0\0org.gnome.totem.PluginViewer\0SetHref\0S\0HrefURI\0I\0s\0Target\0I\0s\0\0org.gnome.totem.PluginViewer\0SetErrorLogo\0S\0\0org.gnome.totem.PluginViewer\0LaunchPlayer\0S\0URI\0I\0s\0Time\0I\0u\0\0org.gnome.totem.PluginViewer\0SetVolume\0S\0Volume\0I\0d\0\0org.gnome.totem.PluginViewer\0ClearPlaylist\0S\0\0org.gnome.totem.PluginViewer\0AddItem\0S\0BaseURI\0I\0s\0URI\0I\0s\0Title\0I\0s\0Subtitle\0I\0s\0\0org.gnome.totem.PluginViewer\0SetFullscreen\0S\0FullscreenEnabled\0I\0b\0\0org.gnome.totem.PluginViewer\0SetTime\0S\0Time\0I\0t\0\0\0",
"org.gnome.totem.PluginViewer\0ButtonPress\0org.gnome.totem.PluginViewer\0Tick\0org.gnome.totem.PluginViewer\0PropertyChange\0org.gnome.totem.PluginViewer\0StartStream\0org.gnome.totem.PluginViewer\0StopStream\0\0",
"\0"
};

