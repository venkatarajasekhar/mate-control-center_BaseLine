AC_PREREQ(2.60)
AC_INIT(mate-system-tools, 1.8.0, http://wwww.mate-desktop.org/)
AC_CONFIG_SRCDIR(src/common/gst-tool.c)
AC_CONFIG_MACRO_DIR([m4])
AM_INIT_AUTOMAKE([no-dist-gzip dist-xz check-news])
m4_ifdef([AM_SILENT_RULES],[AM_SILENT_RULES([yes])])

IT_PROG_INTLTOOL([0.35.0])

AM_CONFIG_HEADER(config.h)

YELP_HELP_INIT

AM_MAINTAINER_MODE

dnl Checking the above
AC_CONFIG_SRCDIR(src/common/gst-tool.c)

AM_PROG_LIBTOOL

AC_ISC_POSIX
AC_PROG_CC
AM_PROG_CC_STDC
AC_HEADER_STDC
AC_PROG_INSTALL
AC_PROG_MAKE_SET

dnl glib-genmarshal
AC_PATH_PROG(GLIB_GENMARSHAL, glib-genmarshal)

GLIB_GSETTINGS

STB_REQUIRED=2.10.1
LIBOOBS_REQUIRED=1.1.0
GTK_REQUIRED=2.19.7
GLIB_REQUIRED=2.25.3
DBUS_REQUIRED=0.32
POLICYKIT_GTK_REQUIRED=0.92


dnl =====================================================
dnl Cracklib checking
dnl =====================================================

dnl AC_CHECK_LIB(crack, FascistCheck, ,[
dnl   AC_MSG_WARN()
dnl   AC_MSG_WARN(---------- Building without cracklib is not recommended. ----------)
dnl   AC_MSG_WARN()
dnl   AC_MSG_WARN(-- If you are looking for cracklib you can try  :)
dnl   AC_MSG_WARN(--    http://www.users.dircon.co.uk/~crypto/)
dnl   AC_MSG_WARN(--    or :)
dnl   AC_MSG_WARN(--    http://www.rpmfind.net/linux/rpm2html/search.php?query=cracklib)
dnl   AC_MSG_WARN(--    or :)
dnl   AC_MSG_WARN(--    apt-get install cracklib2-dev)
dnl   AC_MSG_WARN()])
dnl if test x"$HAVE_LIBCRACK" = xyes ; then
dnl   AC_CHECK_HEADER(crack.h, ,[
dnl   AC_MSG_ERROR(cracklib crack.h header file not found.)])
dnl fi

dnl GST_CRACK_LIB_LOCATION="/usr/lib/"
dnl AC_ARG_WITH(cracklib-dict,
dnl [  --with-cracklib-dict[=DIR]       specify a cracklib dir ],[
dnl   if test "$withval" != "no"; then
dnl     GST_CRACK_LIB_LOCATION=$withval
dnl   fi
dnl ])
dnl AC_SUBST(GST_CRACK_LIB_LOCATION)
dnl GST_CRACK_LIB_CFLAGS="-DGST_CRACK_LIB_DICT_PATH=\"\\\"\$(GST_CRACK_LIB_LOCATION)\\\"\""
dnl AC_SUBST(GST_CRACK_LIB_CFLAGS)

dnl =====================================================
dnl END: Cracklib checking
dnl =====================================================

dnl =====================================================
dnl Check for Module versions
dnl =====================================================

PKG_CHECK_MODULES(GST_DEPENDS,[
			   gtk+-2.0 >= $GTK_REQUIRED
               atk
			   gmodule-export-2.0
			   gio-2.0 >= $GLIB_REQUIRED
			   pango
			   liboobs-1 >= $LIBOOBS_REQUIRED
			   system-tools-backends-2.0 >= $STB_REQUIRED
			   ])

PKG_CHECK_MODULES(DBUS,[
		  dbus-1 >= $DBUS_REQUIRED
		  ])

DBUS_CFLAGS="$DBUS_CFLAGS -DDBUS_API_SUBJECT_TO_CHANGE"
AC_SUBST(DBUS_LIBS)
AC_SUBST(DBUS_CFLAGS)

dnl PolicyKit-GTK support

have_polkit=no
AC_ARG_ENABLE(polkit-gtk-mate,
	AS_HELP_STRING([--enable-polkit-gtk-mate],[Enable PolicyKit support using polkit-gtk-mate (default yes)]),
	[], [enable_polkit_gtk_mate=yes])

if test "x$enable_polkit_gtk_mate" = "xyes"; then
	PKG_CHECK_MODULES(POLKIT_GTK_MATE,[polkit-gtk-mate-1 >= $POLICYKIT_GTK_REQUIRED], have_polkit=yes)

	if test "$have_polkit" = "yes"; then
		AC_DEFINE(HAVE_POLKIT, [1], [whether polkit-gtk-mate was found])
	else
		AC_MSG_ERROR([PolicyKit support requested but polkit-gtk-mate not found])
	fi
fi

AC_SUBST(POLKIT_LIBS)
AC_SUBST(POLKIT_CFLAGS)
AM_CONDITIONAL(HAVE_POLKIT, test x$have_polkit = xyes)


dnl =====================================================
dnl END: Check for Module versions
dnl =====================================================

dnl =====================================================
dnl Check for GST Modules to build
dnl =====================================================


AC_ARG_ENABLE(network,
	      [  --enable-network        Enable build network module (default yes)], ,
	      enable_network=yes)
AC_ARG_ENABLE(services,
	      [  --enable-services       Enable build services module (default yes)], ,
	      enable_services=yes)
AC_ARG_ENABLE(time,
	      [  --enable-time           Enable build time module (default yes)], ,
	      enable_time=yes)
AC_ARG_ENABLE(users,
	      [  --enable-users          Enable build users module (default yes)], ,
	      enable_users=yes)
AC_ARG_ENABLE(shares,
	      [  --enable-shares         Enable build shares module (default yes)], ,
	      enable_shares=yes)
AC_ARG_ENABLE(caja,
	      [  --enable-caja         Enable build caja shares module (default yes)], ,
	      enable_caja=yes)

AM_CONDITIONAL(BUILD_NETWORK, test x$enable_network = xyes)
AM_CONDITIONAL(BUILD_SERVICES, test x$enable_services = xyes)
AM_CONDITIONAL(BUILD_TIME, test x$enable_time = xyes)
AM_CONDITIONAL(BUILD_USERS, test x$enable_users = xyes)
AM_CONDITIONAL(BUILD_SHARES, test x$enable_shares = xyes)
AM_CONDITIONAL(BUILD_CAJA, test x$enable_caja = xyes)

dnl =====================================================
dnl END: Check for GST Modules to build
dnl =====================================================

dnl ========================================================
dnl Translations
dnl ========================================================

GETTEXT_PACKAGE=mate-system-tools
AC_SUBST(GETTEXT_PACKAGE)
AC_DEFINE_UNQUOTED(GETTEXT_PACKAGE, "$GETTEXT_PACKAGE", [gettext package name])
AM_GLIB_GNU_GETTEXT

# AM_MATE_GETTEXT above substs $DATADIRNAME
# this is the directory where the *.{mo,gmo} files are installed
matelocaledir='${prefix}/${DATADIRNAME}/locale'
AC_SUBST(matelocaledir)

dnl ========================================================
dnl END : Translations
dnl ========================================================


dnl =====================================================
dnl GST_LIBS & GST_CFLAGS
dnl =====================================================


#### gcc warning flags (taken from PolicyKit-mate)

if test "x$GCC" = "xyes"; then
  changequote(,)dnl
  case " $CFLAGS " in
  *[\ \	]-Wall[\ \	]*) ;;
  *) CFLAGS="$CFLAGS -Wall" ;;
  esac

  case " $CFLAGS " in
  *[\ \	]-Wchar-subscripts[\ \	]*) ;;
  *) CFLAGS="$CFLAGS -Wchar-subscripts" ;;
  esac

  case " $CFLAGS " in
  *[\ \	]-Wmissing-declarations[\ \	]*) ;;
  *) CFLAGS="$CFLAGS -Wmissing-declarations" ;;
  esac

  case " $CFLAGS " in
  *[\ \	]-Wnested-externs[\ \	]*) ;;
  *) CFLAGS="$CFLAGS -Wnested-externs" ;;
  esac

  case " $CFLAGS " in
  *[\ \	]-Wpointer-arith[\ \	]*) ;;
  *) CFLAGS="$CFLAGS -Wpointer-arith" ;;
  esac

  case " $CFLAGS " in
  *[\ \	]-Wcast-align[\ \	]*) ;;
  *) CFLAGS="$CFLAGS -Wcast-align" ;;
  esac

  case " $CFLAGS " in
  *[\ \	]-Wsign-compare[\ \	]*) ;;
  *) CFLAGS="$CFLAGS -Wsign-compare" ;;
  esac

  case " $CFLAGS " in
  *[\ \	]-Wformat[\ \	]*) ;;
  *) CFLAGS="$CFLAGS -Wformat" ;;
  esac

  case " $CFLAGS " in
  *[\ \	]-Wformat-security[\ \	]*) ;;
  *) CFLAGS="$CFLAGS -Wformat-security" ;;
  esac

  changequote([,])dnl
fi

dnl GST_DEPRECATED_FLAGS="-DG_DISABLE_DEPRECATED -DGDK_DISABLE_DEPRECATED -DGTK_DISABLE_DEPRECATED -DGDK_PIXBUF_DISABLE_DEPRECATED -DMATE_DISABLE_DEPRECATED"
GST_DEPRECATED_FLAGS=""

GST_LIBS="$GST_DEPENDS_LIBS $POLKIT_GTK_MATE_LIBS"
GST_CFLAGS="$GST_DEPENDS_CFLAGS $POLKIT_GTK_MATE_CFLAGS $GST_DEPRECATED_FLAGS"

GST_TOOL_LIBS="\$(top_builddir)/src/common/libsetuptool.la $GST_LIBS"
GST_TOOL_CFLAGS="-I\$(top_srcdir)/src/common $GST_CFLAGS"

GST_TOOL_CLEANFILES="\$(desktop) \$(desktop).in"
GST_TOOL_EXTRA_DIST="\$(toolpixmaps) \$(desktop).in.in"
GST_TOOL_DEPENDENCIES="\$(top_builddir)/src/common/libsetuptool.la"

AC_SUBST(GST_LIBS)
AC_SUBST(GST_CFLAGS)
AC_SUBST(GST_TOOL_LIBS)
AC_SUBST(GST_TOOL_CFLAGS)
AC_SUBST(GST_TOOL_CLEANFILES)
AC_SUBST(GST_TOOL_EXTRA_DIST)
AC_SUBST(GST_TOOL_DEPENDENCIES)

dnl ==================================
dnl END: GST_LIBS & GST_FLAGS
dnl ==================================

dnl ==================================
dnl LIBIW DETECTION
dnl ==================================

GST_IW_LIBS=
AC_CHECK_HEADER(iwlib.h, [
  enable_libiw=yes
  AC_DEFINE(HAVE_LIBIW_H, "", [whether libiw is available])
  AC_HAVE_LIBRARY(iw, [GST_IW_LIBS="-liw"])
])
AM_CONDITIONAL(HAVE_LIBIW_H, test x$enable_libiw = xyes)
AC_SUBST(GST_IW_LIBS)

dnl ==================================
dnl END: LIBIW DETECTION
dnl ==================================

dnl ===========================
dnl CAJA EXTENSION
dnl ===========================

if test "x$enable_caja" = "xyes"; then
	PKG_CHECK_MODULES(CAJA,[
		   libcaja-extension >= 1.1.0
		   liboobs-1 >= $LIBOOBS_REQUIRED
		   gio-2.0   >= $GLIB_REQUIRED
		   ])
fi

AC_ARG_WITH(cajadir,
	AS_HELP_STRING([--with-cajadir=DIR],[Installation path for Caja extension @<:@auto@:>@]),
	[ac_with_cajadir=$withval],
	[ac_with_cajadir=""])
if test "${ac_with_cajadir}" = ""; then
        ac_with_cajadir=`pkg-config --variable=extensiondir libcaja-extension`
fi

AC_SUBST(CAJA_LIBS)
AC_SUBST(CAJA_CFLAGS)

dnl Determine the install dir for caja extension.
AC_MSG_NOTICE([installing caja plugin in ${ac_with_cajadir}])
AC_SUBST([CAJADIR],[${ac_with_cajadir}])

dnl ===========================
dnl END: CAJA EXTENSION
dnl ===========================

AC_OUTPUT([
Makefile
doc/Makefile
doc/network/Makefile
doc/services/Makefile
doc/shares/Makefile
doc/time/Makefile
doc/users/Makefile
icons/Makefile
icons/16x16/Makefile
icons/16x16/apps/Makefile
icons/22x22/Makefile
icons/22x22/apps/Makefile
icons/24x24/Makefile
icons/24x24/apps/Makefile
icons/32x32/Makefile
icons/32x32/apps/Makefile
icons/48x48/Makefile
icons/48x48/apps/Makefile
icons/48x48/devices/Makefile
icons/scalable/Makefile
icons/scalable/apps/Makefile
interfaces/Makefile
pixmaps/Makefile
src/Makefile
src/common/Makefile
src/users/mate-users.desktop.in
src/users/Makefile
src/network/mate-network.desktop.in
src/network/Makefile
src/time/mate-time.desktop.in
src/time/Makefile
src/time/e-map/Makefile
src/services/mate-services.desktop.in
src/services/Makefile
src/shares/mate-shares.desktop.in
src/shares/Makefile
src/shares/caja/Makefile
po/Makefile.in
mate-system-tools.pc
])

echo "

Configuration (GST):

	Services tool:         ${enable_services}
	Users tool:            ${enable_users}
	Network tool:          ${enable_network}
	Time tool:             ${enable_time}
	Shares tool:           ${enable_shares}
	Caja support:          ${enable_caja}
	Use PolKit-GTK-Mate:   ${have_polkit}

	Compiler:              ${CC}
"
