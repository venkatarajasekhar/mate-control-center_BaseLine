AM_CPPFLAGS = \
	-I$(top_srcdir)							\
	-I$(top_builddir)						\
	-I$(top_srcdir)/libbrasero-utils/				\
	-I$(top_builddir)/libbrasero-utils/				\
	-I$(top_srcdir)/libbrasero-media/				\
	-I$(top_builddir)/libbrasero-media/				\
	-DBRASERO_LOCALE_DIR=\""$(prefix)/$(DATADIRNAME)/locale"\" 	\
	-DBRASERO_PREFIX=\"$(prefix)\"           			\
	-DBRASERO_SYSCONFDIR=\"$(sysconfdir)\"   			\
	-DBRASERO_DATADIR=\"$(datadir)/brasero\"     	    		\
	-DBRASERO_LIBDIR=\"$(libdir)\"  	         		\
	-DBRASERO_PLUGIN_DIRECTORY=\"$(BRASERO_PLUGIN_DIRECTORY)\"	\
	$(WARN_CFLAGS)							\
	$(DISABLE_DEPRECATED)						\
	$(BRASERO_GMODULE_CFLAGS)					\
	$(BRASERO_GLIB_CFLAGS)						\
	$(BRASERO_GIO_CFLAGS)						\
	$(BRASERO_GTK_CFLAGS)						\
	$(BRASERO_LIBNOTIFY_CFLAGS) \
	$(BRASERO_GSTREAMER_CFLAGS)					\
	$(BRASERO_CANBERRA_CFLAGS)

GLIB_GENMARSHAL=`pkg-config --variable=glib_genmarshal glib-2.0`
RECMARSHALFILES = libbrasero-marshal.h libbrasero-marshal.c

libbrasero-marshal.h: libbrasero-marshal.list
	( $(GLIB_GENMARSHAL) --prefix=brasero_marshal $(srcdir)/libbrasero-marshal.list --header > libbrasero-marshal.h )
libbrasero-marshal.c: libbrasero-marshal.h
	( $(GLIB_GENMARSHAL) --prefix=brasero_marshal $(srcdir)/libbrasero-marshal.list --body --header > libbrasero-marshal.c )

headerdir=$(includedir)/brasero3
header_HEADERS =	brasero-tags.h						\
		brasero-enums.h						\
		brasero-error.h						\
		brasero-status.h					\
		brasero-burn-lib.h					\
		brasero-track-type.h					\
		brasero-track.h						\
		brasero-track-data.h                 			\
		brasero-track-data-cfg.h				\
		brasero-track-disc.h                 			\
		brasero-track-stream.h                 			\
		brasero-track-stream-cfg.h             			\
		brasero-track-image.h					\
		brasero-track-image-cfg.h				\
		brasero-session.h                 			\
		brasero-session-span.h					\
		brasero-session-cfg.h					\
		brasero-burn.h						\
		brasero-burn-options.h        			        \
		brasero-burn-dialog.h					\
		brasero-tool-dialog.h					\
		brasero-sum-dialog.h					\
		brasero-blank-dialog.h

lib_LTLIBRARIES = \
	libbrasero-burn3.la

libbrasero_burn3_la_LIBADD =					\
	../libbrasero-media/libbrasero-media3.la			\
	../libbrasero-utils/libbrasero-utils3.la			\
	$(BRASERO_GLIB_LIBS)					\
	$(BRASERO_GTHREAD_LIBS)					\
	$(BRASERO_GMODULE_LIBS)					\
	$(BRASERO_GIO_LIBS)					\
	$(BRASERO_GTK_LIBS)					\
	$(BRASERO_GSTREAMER_LIBS)				\
	$(BRASERO_LIBNOTIFY_LIBS)					\
	$(BRASERO_CANBERRA_LIBS)				\
	$(LIBM)

libbrasero_burn3_la_LDFLAGS =					\
	-version-info $(LIBBRASERO_LT_VERSION)			\
	-no-undefined						\
	-export-dynamic
#	-export-symbols ./libbrasero-burn.symbols

libbrasero_burn3_la_SOURCES = 		\
	libbrasero-marshal.c		\
	libbrasero-marshal.h		\
	brasero-tool-dialog.c         \
	brasero-tool-dialog.h         \
	brasero-sum-dialog.c         \
	brasero-sum-dialog.h         \
	brasero-blank-dialog.c         \
	brasero-blank-dialog.h         \
	brasero-burn.c			\
	brasero-burn.h			\
	brasero-xfer.c			\
	brasero-xfer.h			\
	burn-basics.h                 \
	burn-caps.h                 \
	burn-dbus.h                 \
	burn-debug.h                 \
	burn-image-format.h                 \
	burn-job.h                 \
	burn-mkisofs-base.h                 \
	burn-plugin-manager.h                 \
	burn-process.h                 \
	brasero-session.h                 \
	burn-task.h                 \
	burn-task-ctx.h                 \
	burn-task-item.h                 \
	brasero-track.h                 \
	brasero-session.c                 \
	brasero-track.c                 \
	burn-basics.c                 \
	burn-caps.c                 \
	burn-dbus.c                 \
	burn-debug.c                 \
	burn-image-format.c                 \
	burn-job.c                 \
	burn-mkisofs-base.c                 \
	burn-plugin.c                 \
	burn-plugin-manager.c                 \
	burn-process.c                 \
	burn-task.c                 \
	burn-task-ctx.c                 \
	burn-task-item.c                 \
	brasero-burn-dialog.c                 \
	brasero-burn-dialog.h                 \
	brasero-burn-options.c                 \
	brasero-burn-options.h                 \
	brasero-dest-selection.c                 \
	brasero-dest-selection.h                 \
	brasero-drive-properties.c                 \
	brasero-drive-properties.h                 \
	brasero-image-properties.c                 \
	brasero-image-properties.h                 \
	brasero-image-type-chooser.c                 \
	brasero-image-type-chooser.h                 \
	brasero-medium-properties.c                 \
	brasero-medium-properties.h                 \
	brasero-progress.c                 \
	brasero-progress.h                 \
	brasero-session-cfg.c                 \
	brasero-session-cfg.h                 \
	brasero-src-image.c                 \
	brasero-src-image.h                 \
	brasero-src-selection.c                 \
	brasero-src-selection.h                 \
	brasero-burn-lib.h                 \
	brasero-error.h                 \
	brasero-enums.h                 \
	brasero-tags.h                 \
	brasero-cover.c                 \
	brasero-cover.h                 \
	brasero-track-disc.c                 \
	brasero-track-disc.h                 \
	brasero-track-stream.c                 \
	brasero-track-stream.h                 \
	brasero-track-image.c                 \
	brasero-track-image.h                 \
	brasero-track-data.c                 \
	brasero-track-data.h                 \
	brasero-track-image-cfg.c                 \
	brasero-track-image-cfg.h                 \
	brasero-caps-plugin.c                 \
	brasero-caps-burn.c                 \
	brasero-caps-session.c                 \
	brasero-caps-burn.h                 \
	brasero-plugin.h                 \
	brasero-plugin-information.h                 \
	brasero-plugin-registration.h                 \
	brasero-track-type.c                 \
	brasero-track-type.h                 \
	brasero-track-type-private.h                 \
	brasero-status.c                 \
	brasero-status.h                 \
	brasero-status-dialog.c                 \
	brasero-status-dialog.h                 \
	brasero-session-helper.h                 \
	brasero-data-project.c                 \
	brasero-data-project.h                 \
	brasero-data-session.c                 \
	brasero-data-session.h                 \
	brasero-data-vfs.c                 \
	brasero-data-vfs.h                 \
	brasero-file-node.c                 \
	brasero-file-node.h                 \
	brasero-data-tree-model.c                 \
	brasero-data-tree-model.h                 \
	brasero-track-data-cfg.c                 \
	brasero-track-data-cfg.h                 \
	brasero-filtered-uri.c                 \
	brasero-filtered-uri.h                 \
	brasero-track-stream-cfg.c                 \
	brasero-track-stream-cfg.h                 \
	brasero-tool-dialog-private.h                 \
	brasero-video-options.h                 \
	brasero-video-options.c                 \
	brasero-session-span.h                 \
	brasero-session-span.c                 \
	brasero-plugin-private.h                 

if BUILD_INOTIFY
libbrasero_burn3_la_SOURCES += brasero-file-monitor.c brasero-file-monitor.h
endif

if HAVE_APP_INDICATOR
libbrasero_burn3_la_SOURCES += brasero-app-indicator.h brasero-app-indicator.c
libbrasero_burn3_la_LIBADD += @APP_INDICATOR_LIBS@
AM_CPPFLAGS += -DHAVE_APP_INDICATOR @APP_INDICATOR_CFLAGS@
endif

if HAVE_UNITY
libbrasero_burn3_la_LIBADD += @UNITY_LIBS@
AM_CPPFLAGS += -DHAVE_UNITY @UNITY_CFLAGS@
endif

EXTRA_DIST =			\
	libbrasero-marshal.list
#	libbrasero-burn.symbols

if HAVE_INTROSPECTION
girdir = $(INTROSPECTION_GIRDIR)
gir_DATA = BraseroBurn-@TYPELIB_VERSION@.gir

typelibsdir = $(INTROSPECTION_TYPELIBDIR)
typelibs_DATA = BraseroBurn-@TYPELIB_VERSION@.typelib

BraseroBurn-@TYPELIB_VERSION@.gir: libbrasero-burn3.la $(INTROSPECTION_SCANNER)
	$(INTROSPECTION_SCANNER) -v --namespace=BraseroBurn --nsversion=1.0 \
	    -I$(top_srcdir)/libbrasero-media	\
	    -I$(top_builddir)/libbrasero-media	\
	    -I$(top_srcdir)/libbrasero-burn		\
	    -I$(top_builddir)/libbrasero-burn	\
            --include=Gtk-3.0 \
            --add-include-path=$(top_builddir)/libbrasero-media	\
	    --include=BraseroMedia-@TYPELIB_VERSION@ \
	    --library=brasero-burn3 \
	    --libtool="$(LIBTOOL)" \
            --output $@ \
            --pkg=gtk+-3.0  \
	    --strip-prefix=Brasero	\
            $(top_srcdir)/libbrasero-burn/brasero-tags.h						\
            $(top_srcdir)/libbrasero-burn/brasero-enums.h						\
            $(top_srcdir)/libbrasero-burn/brasero-error.h						\
            $(top_srcdir)/libbrasero-burn/brasero-status.h					\
            $(top_builddir)/libbrasero-burn/brasero-burn-lib.h					\
            $(top_srcdir)/libbrasero-burn/brasero-track-type.h					\
            $(top_srcdir)/libbrasero-burn/brasero-track.h						\
            $(top_srcdir)/libbrasero-burn/brasero-track-data.h                 			\
            $(top_srcdir)/libbrasero-burn/brasero-track-data-cfg.h				\
            $(top_srcdir)/libbrasero-burn/brasero-track-disc.h                 			\
            $(top_srcdir)/libbrasero-burn/brasero-track-stream.h                 			\
            $(top_srcdir)/libbrasero-burn/brasero-track-stream-cfg.h             			\
            $(top_srcdir)/libbrasero-burn/brasero-track-image.h					\
            $(top_srcdir)/libbrasero-burn/brasero-track-image-cfg.h				\
            $(top_srcdir)/libbrasero-burn/brasero-session.h                 			\
            $(top_srcdir)/libbrasero-burn/brasero-session-span.h					\
            $(top_srcdir)/libbrasero-burn/brasero-session-cfg.h					\
            $(top_srcdir)/libbrasero-burn/brasero-burn.h						\
            $(top_srcdir)/libbrasero-burn/brasero-burn-options.h        			        \
            $(top_srcdir)/libbrasero-burn/brasero-burn-dialog.h					\
            $(top_srcdir)/libbrasero-burn/brasero-tool-dialog.h					\
	    $(top_srcdir)/libbrasero-burn/brasero-sum-dialog.h					\
	    $(top_srcdir)/libbrasero-burn/*.c	    

BraseroBurn-@TYPELIB_VERSION@.typelib: $(gir_DATA) $(INTROSPECTION_COMPILER)
	$(INTROSPECTION_COMPILER) $(top_builddir)/libbrasero-burn/$(gir_DATA) --shared-library=libbrasero-burn3 -o $(typelibs_DATA) --includedir=$(top_builddir)/libbrasero-media
endif

CLEANFILES =			\
	$(RECMARSHALFILES)  \
	$(gir_DATA)         \
	$(typelibs_DATA)


-include $(top_srcdir)/git.mk
