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

/************************************************************************
 * File:	toktab.h						*
 *									*
 * Description:	This file contains the table indicating which tokens	*
 *		may begin and end an expression.  Note that this table	*
 *		must be kept in correspondence with the tokens		*
 *		generated by the parser!				*
 ************************************************************************/

# ifndef _TOKTAB_H
# define _TOKTAB_H
# include "opcodes.h"		/* need Address definition for %union	 */
# include "descriptor.h"	/* need descriptor definition for %union */
# include "parser.h"		    /* need BREAK for table offset		 */

#ifdef __cplusplus
extern "C" {
#endif 

/*----------------------------------------------------------------------*/

static struct {
    char begin;
    char end;
} _toktab [ ] = {
    {1, 1},	/* BREAK    */
    {0, 0},	/* DO	    */
    {0, 0},	/* ELIF	    */
    {0, 0},	/* ELSE	    */
    {1, 1},	/* END	    */
    {1, 0},	/* FOR	    */
    {1, 0},	/* FUNCTION */
    {1, 0},	/* GLOBAL   */
    {1, 0},	/* IF	    */
    {0, 0},	/* IN	    */
    {1, 1},	/* NEXT	    */
    {1, 1},	/* RETURN   */
    {0, 0},	/* SHARED   */
    {0, 0},	/* THEN	    */
    {1, 0},	/* WHILE    */
    {0, 0},	/* ASSIGN   */
    {0, 0},	/* OR	    */
    {0, 0},	/* AND	    */
    {0, 0},	/* EQ	    */
    {0, 0},	/* NE	    */
    {0, 0},	/* LT	    */
    {0, 0},	/* GT	    */
    {0, 0},	/* LE	    */
    {0, 0},	/* GE	    */
    {0, 0},	/* COLON    */
    {1, 0},	/* PLUS	    */
    {1, 0},	/* MINUS    */
    {0, 0},	/* MULT	    */
    {0, 0},	/* DIV	    */
    {0, 0},	/* MOD	    */
    {0, 0},	/* BKSLV    */
    {0, 0},	/* POW	    */
    {0, 1},	/* TRANS    */
    {1, 0},	/* NOT	    */
    {0, 0},	/* DOT	    */
    {1, 0},	/* LPAREN   */
    {0, 1},	/* RPAREN   */
    {1, 0},	/* LBRACK   */
    {0, 1},	/* RBRACK   */
    {0, 0},	/* COMMA    */
    {1, 1},	/* SEMICOL  */
    {1, 1},	/* ID	    */
    {1, 1},	/* STRLIT   */
    {1, 1},	/* NUMLIT   */
    {1, 1},	/* CONSTANT */
}, *toktab = _toktab - BREAK;

/*----------------------------------------------------------------------*/

#ifdef __cplusplus
}
#endif 

# endif /* _TOKTAB_H */
