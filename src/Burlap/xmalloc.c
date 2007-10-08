/* xmalloc.c -- safe versions of malloc and realloc */

/* This file has been modified for FElt.  Earlier versions of the readline
   library did not provide this file but required -liberty.  This file is
   provided so that we don't have to search for -liberty, searching for
   -lreadline is hard enough.  It has been slighly modified, as indicated.
   All copyrights still hold. */

/* Copyright (C) 1991 Free Software Foundation, Inc.

   This file is part of GNU Readline, a library for reading lines
   of text with interactive input and history editing.

   Readline is free software; you can redistribute it and/or modify it
   under the terms of the GNU General Public License as published by the
   Free Software Foundation; either version 1, or (at your option) any
   later version.

   Readline is distributed in the hope that it will be useful, but
   WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with Readline; see the file COPYING.  If not, write to the Free
   Software Foundation, 675 Mass Ave, Cambridge, MA 02139, USA. */

#include <stdlib.h>
#if defined (ALREADY_HAVE_XMALLOC)
#else
#include <stdio.h>

static void memory_error_and_abort (char *fname);

/* **************************************************************** */
/*								    */
/*		   Memory Allocation and Deallocation.		    */
/*								    */
/* **************************************************************** */

/* Return a pointer to free()able block of memory large enough
   to hold BYTES number of bytes.  If the memory cannot be allocated,
   print an error message and abort. */
char *
xmalloc (int bytes)
{
  char *temp = (char *)malloc (bytes);

  if (!temp)
    memory_error_and_abort ("xmalloc");
  return (temp);
}

char *
xrealloc (char *pointer, int bytes)
{
  char *temp;

  if (!pointer)
    temp = (char *)malloc (bytes);
  else
    temp = (char *)realloc (pointer, bytes);

  if (!temp)
    memory_error_and_abort ("xrealloc");
  return (temp);
}

static void
memory_error_and_abort (char *fname)
{
  fprintf (stderr, "%s: Out of virtual memory!\n", fname);
  abort ();
}
#endif /* !ALREADY_HAVE_XMALLOC */
