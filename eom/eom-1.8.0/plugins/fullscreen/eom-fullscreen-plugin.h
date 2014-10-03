#ifndef __EOM_FULLSCREEN_PLUGIN_H__
#define __EOM_FULLSCREEN_PLUGIN_H__

#include <glib.h>
#include <glib-object.h>
#include <eom-plugin.h>

G_BEGIN_DECLS

/*
 * Type checking and casting macros
 */
#define EOM_TYPE_FULLSCREEN_PLUGIN \
	(eom_fullscreen_plugin_get_type())
#define EOM_FULLSCREEN_PLUGIN(o) \
	(G_TYPE_CHECK_INSTANCE_CAST((o), EOM_TYPE_FULLSCREEN_PLUGIN, EomFullscreenPlugin))
#define EOM_FULLSCREEN_PLUGIN_CLASS(k) \
	G_TYPE_CHECK_CLASS_CAST((k), EOM_TYPE_FULLSCREEN_PLUGIN, EomFullscreenPluginClass))
#define EOM_IS_FULLSCREEN_PLUGIN(o) \
	(G_TYPE_CHECK_INSTANCE_TYPE((o), EOM_TYPE_FULLSCREEN_PLUGIN))
#define EOM_IS_FULLSCREEN_PLUGIN_CLASS(k) \
	(G_TYPE_CHECK_CLASS_TYPE((k), EOM_TYPE_FULLSCREEN_PLUGIN))
#define EOM_FULLSCREEN_PLUGIN_GET_CLASS(o) \
	(G_TYPE_INSTANCE_GET_CLASS((o), EOM_TYPE_FULLSCREEN_PLUGIN, EomFullscreenPluginClass))

/* Private structure type */
typedef struct _EomFullscreenPluginPrivate EomFullscreenPluginPrivate;

/*
 * Main object structure
 */
typedef struct _EomFullscreenPlugin EomFullscreenPlugin;

struct _EomFullscreenPlugin {
	EomPlugin parent_instance;
};

/*
 * Class definition
 */
typedef struct _EomFullscreenPluginClass EomFullscreenPluginClass;

struct _EomFullscreenPluginClass {
	EomPluginClass parent_class;
};

/*
 * Public methods
 */
GType eom_fullscreen_plugin_get_type(void) G_GNUC_CONST;

/* All the plugins must implement this function */
G_MODULE_EXPORT GType register_eom_plugin(GTypeModule* module);

G_END_DECLS

#endif /* __EOM_FULLSCREEN_PLUGIN_H__ */
