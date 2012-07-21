/******************************** -*- C -*- ****************************
 *
 *	OOP printing and debugging declarations
 *
 *
 ***********************************************************************/

/***********************************************************************
 *
 * Copyright 1988,89,90,91,92,94,95,99,2000,2001,2002,2006
 * Free Software Foundation, Inc.
 * Written by Steve Byrne.
 *
 * This file is part of GNU Smalltalk.
 *
 * GNU Smalltalk is free software; you can redistribute it and/or modify it
 * under the terms of the GNU General Public License as published by the Free
 * Software Foundation; either version 2, or (at your option) any later 
 * version.
 * 
 * Linking GNU Smalltalk statically or dynamically with other modules is
 * making a combined work based on GNU Smalltalk.  Thus, the terms and
 * conditions of the GNU General Public License cover the whole
 * combination.
 *
 * In addition, as a special exception, the Free Software Foundation
 * give you permission to combine GNU Smalltalk with free software
 * programs or libraries that are released under the GNU LGPL and with
 * independent programs running under the GNU Smalltalk virtual machine.
 *
 * You may copy and distribute such a system following the terms of the
 * GNU GPL for GNU Smalltalk and the licenses of the other code
 * concerned, provided that you include the source code of that other
 * code when and as the GNU GPL requires distribution of source code.
 *
 * Note that people who make modified versions of GNU Smalltalk are not
 * obligated to grant this special exception for their modified
 * versions; it is their choice whether to do so.  The GNU General
 * Public License gives permission to release a modified version without
 * this exception; this exception also makes it possible to release a
 * modified version which carries forward this exception.
 *
 * GNU Smalltalk is distributed in the hope that it will be useful, but WITHOUT
 * ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or 
 * FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for
 * more details.
 * 
 * You should have received a copy of the GNU General Public License along with
 * GNU Smalltalk; see the file COPYING.  If not, write to the Free Software
 * Foundation, 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301, USA.  
 *
 ***********************************************************************/



#ifndef GST_PRINT_H
#define GST_PRINT_H

/* Print a representation of OOP on stdout.  For Strings, Symbols,
   Floats and SmallIntegers, this is the #storeString; for other
   objects it is a generic representation including the pointer to the
   OOP.  */
extern void _gst_print_object (OOP oop)
  ATTRIBUTE_HIDDEN;

/* Show information about the contents of the pointer ADDR, deciding
   what kind of Smalltalk entity it is.  Mainly provided for
   debugging.  */
void _gst_classify_addr (void *addr)
  ATTRIBUTE_HIDDEN;

/* Show information about the contents of the given OOP.
   Mainly provided for debugging.  */
void _gst_display_oop (OOP oop)
  ATTRIBUTE_HIDDEN;

/* Show information about the contents of the given OOP without
   dereferencing the pointer to the object data and to the class.
   Mainly provided for debugging.  */
void _gst_display_oop_short (OOP oop)
  ATTRIBUTE_HIDDEN;

/* Show information about the contents of the OBJ object.
   Mainly provided for debugging.  */
void _gst_display_object (gst_object obj)
  ATTRIBUTE_HIDDEN;

/* Initialize the snprintfv library with hooks to print GNU Smalltalk
   OOPs.  */
extern void _gst_init_snprintfv ()
  ATTRIBUTE_HIDDEN;

#endif /* GST_OOP_H */
