/**
 * @file gtkeventloop.h Pidgin GTK+ Event Loop Implementation
 * @ingroup pidgin
 */

/* pidgin
 *
 * Pidgin is the legal property of its developers, whose names are too numerous
 * to list here.  Please refer to the COPYRIGHT file distributed with this
 * source distribution.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02111-1301  USA
 */
#ifndef _PIDGINEVENTLOOP_H_
#define _PIDGINEVENTLOOP_H_

#include "eventloop.h"

/**
 * Returns the GTK+ event loop UI operations structure.
 *
 * @return The GTK+ event loop UI operations structure.
 */
PurpleEventLoopUiOps *pidgin_eventloop_get_ui_ops(void);

#endif /* _PIDGINEVENTLOOP_H_ */
