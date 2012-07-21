/******************************** -*- C -*- ****************************
 *
 *	Simple floating-point data type
 *
 *
 ***********************************************************************/


/***********************************************************************
 *
 * Copyright 2009 Free Software Foundation, Inc.
 * Written by Paolo Bonzini.
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


#ifndef GST_REAL_H
#define GST_REAL_H

#define SIGSZ		10

struct real {
  /* Little-endian significant.  sig[0] is the least significant part.
     The 1 is not implicit, so in a normalized real sig[9] == 0 means
     the value is zero.  sig[9]'s MSB has weight 2^exp.  */
  unsigned short sig[SIGSZ];

  int exp;
  int sign;
};

/* Convert an integer number S to floating point and move it to OUT.  */
extern void _gst_real_from_int (struct real *out, int s);

/* Sum S to R and store the result into R.  */
extern void _gst_real_add_int (struct real *r, int s)
  ATTRIBUTE_HIDDEN;

/* Multiply R by S and store the result into R.  */
extern void _gst_real_mul_int (struct real *r, int s)
  ATTRIBUTE_HIDDEN;

/* Compute R^S and store the result into R.  */
extern void _gst_real_powi (struct real *out, struct real *r, int s)
  ATTRIBUTE_HIDDEN;

/* Sum S to R and store the result into R.  */
extern void _gst_real_add (struct real *r, struct real *s)
  ATTRIBUTE_HIDDEN;

/* Multiply R by S and store the result into R.  */
extern void _gst_real_mul (struct real *r, struct real *s)
  ATTRIBUTE_HIDDEN;

/* Divide R by S and store the result into OUT.  */
extern void _gst_real_div (struct real *out, struct real *r, struct real *s)
  ATTRIBUTE_HIDDEN;

/* Compute the inverse of R and store it into OUT (OUT and R can overlap).  */
extern void _gst_real_inv (struct real *out, struct real *r)
  ATTRIBUTE_HIDDEN;

/* Convert R to a long double and return it.  */
extern long double _gst_real_get_ld (struct real *r)
  ATTRIBUTE_HIDDEN;

#endif
