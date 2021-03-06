/* -*- Mode: C; tab-width: 8; indent-tabs-mode: t; c-basic-offset: 8 -*- */

/*
 *  GThumb
 *
 *  Copyright (C) 2009 Free Software Foundation, Inc.
 *
 *  This program is free software; you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation; either version 2 of the License, or
 *  (at your option) any later version.
 *
 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */


#include <config.h>
#include <gtk/gtk.h>
#include <gthumb.h>
#include "callbacks.h"


G_MODULE_EXPORT void
gthumb_extension_activate (void)
{
	/**
	 * Called after successfully rotating a jpeg image
	 *
	 * @info (JpegTranInfo *): the transformation info as described in
	 * extensions/jpeg_utils/jpegtran.h
	 **/
	gth_hook_register ("jpegtran-after", 1);

	gth_hook_add_callback ("gth-browser-construct", 10, G_CALLBACK (ir__gth_browser_construct_cb), NULL);
	gth_hook_add_callback ("gth-browser-update-sensitivity", 10, G_CALLBACK (ir__gth_browser_update_sensitivity_cb), NULL);
	gth_hook_add_callback ("gth-browser-file-list-key-press", 10, G_CALLBACK (ir__gth_browser_file_list_key_press_cb), NULL);
}


G_MODULE_EXPORT void
gthumb_extension_deactivate (void)
{
}


G_MODULE_EXPORT gboolean
gthumb_extension_is_configurable (void)
{
	return FALSE;
}


G_MODULE_EXPORT void
gthumb_extension_configure (GtkWindow *parent)
{
}
