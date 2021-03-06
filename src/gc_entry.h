/*
 *  gcrun - GTK+ Completion-Run Utility
 *  Copyright (C) 2010  Iven Day <ivenvd#gmail.com>
 *  
 *  This program is free software: you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation, either version 3 of the License, or
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

#ifndef  gc_entry_h_INC
#define  gc_entry_h_INC

#include	"config.h"
GtkWidget *gc_entry_new(void);
void gc_entry_set_in_term(GtkWidget *entry, gboolean value);
gboolean gc_entry_get_in_term(GtkWidget *entry);

#endif   /* ----- #ifndef gc_entry_h_INC  ----- */
