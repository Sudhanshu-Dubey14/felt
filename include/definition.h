/*
    This file is part of the FElt finite element analysis package.
    Copyright (C) 1993-2000 Jason I. Gobat and Darren C. Atkinson

    This program is free software; you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation; either version 2 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with this program; if not, write to the Free Software
    Foundation, Inc., 675 Mass Ave, Cambridge, MA 02139, USA.
*/

# ifndef _DEFINITION_H
# define _DEFINITION_H
# include "fe.h"


void add_all_definitions(void);

/*!
  Add a definition to the set of definitions.
*/
int AddDefinition(Definition definition);


/*!
  Remove a definition for the set of definitions.
*/
int RemoveDefinition(Definition definition);

/*!
  Look up a definition by name in the set of definitions.
*/
Definition LookupDefinition(char *name);

# endif /* _DEFINITION_H */
