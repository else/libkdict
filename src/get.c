/* Copyright © 2011 Lukas Martini
 *
 * This file is part of Libkdict.
 *
 * Libkdict is free software: you can redistribute it and/or modify
 * it under the terms of the GNU Lesser General Public License as
 * published by the Free Software Foundation, either version 3 of the
 * License, or (at your option) any later version.
 *
 * Libkdict is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with Libkdict. If not, see
 * <http://www.gnu.org/licenses/>.
 */

#ifndef XELIX
	#include <dict.h>
#else /* !XELIX */
	#include <lib/dict.h>
#endif /* !XELIX */
 
#include "internals.h"

// Get value of an entry. Returns -1 if there's no such entry.
void* dict_get(dict_t* dict, void* key)
{
	entry_t* entry = _findEntry(dict, key);
	if(entry == NULL)
		return (void*)-1;
	
	return entry->value;
}
