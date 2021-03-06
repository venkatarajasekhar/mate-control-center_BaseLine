/* totem-menu.h

   Copyright (C) 2004-2005 Bastien Nocera <hadess@hadess.net>

   The Gnome Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Library General Public License as
   published by the Free Software Foundation; either version 2 of the
   License, or (at your option) any later version.

   The Gnome Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Library General Public License for more details.

   You should have received a copy of the GNU Library General Public
   License along with the Gnome Library; see the file COPYING.LIB.  If not,
   write to the Free Software Foundation, Inc., 51 Franklin Street, Fifth Floor,
   Boston, MA 02110-1301  USA.

   Author: Bastien Nocera <hadess@hadess.net>
 */

#ifndef TOTEM_MENU_H
#define TOTEM_MENU_H

#include "totem.h"

G_BEGIN_DECLS

void totem_app_menu_setup (Totem *totem);

void totem_ui_manager_setup (Totem *totem);

void totem_sublang_update (Totem *totem);
void totem_sublang_exit (Totem *totem);

void totem_setup_recent (Totem *totem);

G_END_DECLS

#endif /* TOTEM_MENU_H */
