/**********************************************************************
*   Copyright (C) 1999-2006, International Business Machines
*   Corporation and others.  All Rights Reserved.
***********************************************************************/

/*

  Note:
   - the typetable is generic for Devanagari but..

   - the first, commented out font table is for the "DevLys010" font.
      This table was done in August of 1998, and the font was from  
      (I think)  http://www.it-india.com/   which doesn't seem to
      have any information about fonts on it now.  (Lys was the name
      of a font developer, and Dev for Devanagari). 

   - the second, current table is for the ITRANS xdvng font which is
     available for Windows, Mac, and X. The ITRANS web site is:
       http://www.aczone.com/itrans/

   No code was used from either of these packages. 

  Please note that these tables are incomplete and certainly not
   supported.

  IF you have any questions or comments, etc, please post them to the
   ICU mailing lists/boards.

  Steven R. Loomis (i18n code sculptor) <srl [at] icu-project.org>
*/

#define dv_IV 0x01 /* independent vowels */
 
#define dv_C  0x02 /* consonants */
#define dv_CD 0x12 /* dead consonant */
#define dv_VS 0x04 /* vowel signs */
#define dv_SPECIAL 0x08 /* special treatment */

#define dv_VIRAMA 0x094d  /* deadens a consonant */
#define dv_VS_LEFT 0x093f /* stands to the left */

unsigned char typeTable[] = 
{
	0x00,	/* 00 */
	0x00,	/* 01 */
	0x00,	/* 02 */
	0x00,	/* 03 */
	0x00,	/* 04 */
	dv_IV,	/* 05 */
	dv_IV,	/* 06 */
	dv_IV,	/* 07 */
	dv_IV,	/* 08 */
	dv_IV,	/* 09 */
	dv_IV,	/* 0a */
	dv_IV,	/* 0b */
	dv_IV,	/* 0c */
	dv_IV,	/* 0d */
	dv_IV,	/* 0e */
	dv_IV,	/* 0f */
	dv_IV,	/* 10 */
	dv_IV,	/* 11 */
	dv_IV,	/* 12 */
	dv_IV,	/* 13 */
	dv_IV,	/* 14 */ /* vowel AU */
	dv_C,	/* 15 */ /* cons KA */
	dv_C,	/* 16 */
	dv_C,	/* 17 */
	dv_C,	/* 18 */
	dv_C,	/* 19 */
	dv_C,	/* 1a */
	dv_C,	/* 1b */
	dv_C,	/* 1c */
	dv_C,	/* 1d */
	dv_C,	/* 1e */
	dv_C,	/* 1f */
	dv_C,	/* 20 */
	dv_C,	/* 21 */
	dv_C,	/* 22 */
	dv_C,	/* 23 */
	dv_C,	/* 24 */
	dv_C,	/* 25 */
	dv_C,	/* 26 */
	dv_C,	/* 27 */
	dv_C,	/* 28 */
	dv_C,	/* 29 */
	dv_C,	/* 2a */
	dv_C,	/* 2b */
	dv_C,	/* 2c */
	dv_C,	/* 2d */
	dv_C,	/* 2e */
	dv_C,	/* 2f */
	dv_C,	/* 30 */
	dv_C,	/* 31 */
	dv_C,	/* 32 */
	dv_C,	/* 33 */
	dv_C,	/* 34 */
	dv_C,	/* 35 */
	dv_C,	/* 36 */
	dv_C,	/* 37 */
	dv_C,	/* 38 */
	dv_C,	/* 39 */ /* HA */
	0x00,	/* 3a */
	0x00,	/* 3b */
	0x00,	/* 3c */
	0x00,	/* 3d */
	dv_VS,	/* 3e */
	dv_SPECIAL,	/* 3f */ /* vowel mark goes to the left of the consonant */
	dv_VS,	/* 40 */
	dv_VS,	/* 41 */
	dv_VS,	/* 42 */
	dv_VS,	/* 43 */
	dv_VS,	/* 44 */
	dv_VS,	/* 45 */
	dv_VS,	/* 46 */
	dv_VS,	/* 47 */
	dv_VS,	/* 48 */
	dv_VS,	/* 49 */
	dv_VS,	/* 4a */
	dv_VS,	/* 4b */
	dv_VS,	/* 4c */
	dv_SPECIAL,	/* 4d */  /* virama */
	0x00,	/* 4e */
	0x00,	/* 4f */
	0x00,	/* 50 */
	0x00,	/* 51 */
	0x00,	/* 52 */
	0x00,	/* 53 */
	0x00,	/* 54 */
	0x00,	/* 55 */
	0x00,	/* 56 */
	0x00,	/* 57 */
	0x00,	/* 58 */
	0x00,	/* 59 */
	0x00,	/* 5a */
	0x00,	/* 5b */
	0x00,	/* 5c */
	0x00,	/* 5d */
	0x00,	/* 5e */
	0x00,	/* 5f */
	0x00,	/* 60 */
	0x00,	/* 61 */
	0x00,	/* 62 */
	0x00,	/* 63 */
	0x00,	/* 64 */
	0x00,	/* 65 */
	dv_IV,	/* 66 */ /* 0 */
	dv_IV,	/* 67 */
	dv_IV,	/* 68 */
	dv_IV,	/* 69 */
	dv_IV,	/* 6a */
	dv_IV,	/* 6b */
	dv_IV,	/* 6c */
        dv_IV,	/* 6d */
	dv_IV,	/* 6e */
	dv_IV,	/* 6f */ /* 9 */
	0x00,	/* 70 */
	0x00,	/* 71 */
	0x00,	/* 72 */
	0x00,	/* 73 */
	0x00,	/* 74 */
	0x00,	/* 75 */
	0x00,	/* 76 */
	0x00,	/* 77 */
	0x00,	/* 78 */
	0x00,	/* 79 */
	0x00,	/* 7a */
	0x00,	/* 7b */
	0x00,	/* 7c */
	0x00,	/* 7d */
	0x00,	/* 7e */
	0x00,	/* 7f */
};

#if 0  /* DEVLYS */
unsigned char convTbl[0x80][5] =          /* DEVLYS!!!!!!!!!!!! */
{         /* DEVLYS!!!!!!!!!!!! */
	{0x00,0x00},	/* 00 */         /* DEVLYS!!!!!!!!!!!! */
	{0x00,0x00},	/* 01 */         /* DEVLYS!!!!!!!!!!!! */
	{0x00,0x00},	/* 02 */         /* DEVLYS!!!!!!!!!!!! */
	{0x00,0x00},	/* 03 */         /* DEVLYS!!!!!!!!!!!! */
	{0x00,0x00},	/* 04 */         /* DEVLYS!!!!!!!!!!!! */
	"\x76",	/* 05 */         /* DEVLYS!!!!!!!!!!!! */
	"\x76\x6b", /* 06 */         /* DEVLYS!!!!!!!!!!!! */
	{0x62,0x00},	/* 07 */         /* DEVLYS!!!!!!!!!!!! */
	{0xc3,0x00},	/* 08 */         /* DEVLYS!!!!!!!!!!!! */
	{0x6D,0x00},	/* 09 */         /* DEVLYS!!!!!!!!!!!! */
	{0xC5,0x00},	/* 0a */         /* DEVLYS!!!!!!!!!!!! */
	{0x00,0x00},	/* 0b */         /* DEVLYS!!!!!!!!!!!! */
	{0x00,0x00},	/* 0c */         /* DEVLYS!!!!!!!!!!!! */
	{0x00,0x00},	/* 0d */         /* DEVLYS!!!!!!!!!!!! */
	{0x00,0x00},	/* 0e */         /* DEVLYS!!!!!!!!!!!! */
	{0x00,0x00},	/* 0f */         /* DEVLYS!!!!!!!!!!!! */
	{0x00,0x00},	/* 10 */         /* DEVLYS!!!!!!!!!!!! */
	{0x00,0x00},	/* 11 */         /* DEVLYS!!!!!!!!!!!! */
	{0x00,0x00},	/* 12 */         /* DEVLYS!!!!!!!!!!!! */
	{0x00,0x00},	/* 13 */         /* DEVLYS!!!!!!!!!!!! */
	{0x00,0x00},	/* 14 */         /* DEVLYS!!!!!!!!!!!! */
	{0x64,0x00},	/* 15 */         /* DEVLYS!!!!!!!!!!!! */
	{0x00,0x00},	/* 16 */         /* DEVLYS!!!!!!!!!!!! */
	{0x78,0x00},	/* 17 */         /* DEVLYS!!!!!!!!!!!! */
	{0x00,0x00},	/* 18 */         /* DEVLYS!!!!!!!!!!!! */
	{0x4D,0xDB,0x00},	/* 19 */ /* NGA */         /* DEVLYS!!!!!!!!!!!! */
	{0x00,0x00},	/* 1a */         /* DEVLYS!!!!!!!!!!!! */
	{0x00,0x00},	/* 1b */         /* DEVLYS!!!!!!!!!!!! */
	{0x74,0x00},	/* 1c */         /* DEVLYS!!!!!!!!!!!! */
	{0x00,0x00},	/* 1d */         /* DEVLYS!!!!!!!!!!!! */
	{0x00,0x00},	/* 1e */         /* DEVLYS!!!!!!!!!!!! */
	{0x56,0x00},	/* 1f */         /* DEVLYS!!!!!!!!!!!! */
	{0x00,0x00},	/* 20 */         /* DEVLYS!!!!!!!!!!!! */
	{0x00,0x00},	/* 21 */         /* DEVLYS!!!!!!!!!!!! */
	{0x00,0x00},	/* 22 */         /* DEVLYS!!!!!!!!!!!! */
	{0x00,0x00},	/* 23 */         /* DEVLYS!!!!!!!!!!!! */
	{0x72,0x00},	/* 24 */         /* DEVLYS!!!!!!!!!!!! */
	{0x00,0x00},	/* 25 */         /* DEVLYS!!!!!!!!!!!! */
	{0x6E,0x00},	/* 26 */         /* DEVLYS!!!!!!!!!!!! */
	{0xCB, 0x6B,0x00},	/* 27 */         /* DEVLYS!!!!!!!!!!!! */
	{0x75,0x00},	/* 28 */         /* DEVLYS!!!!!!!!!!!! */
	{0x00,0x00},	/* 29 */         /* DEVLYS!!!!!!!!!!!! */
	{0x00,0x00},	/* 2a */         /* DEVLYS!!!!!!!!!!!! */
	{0x00,0x00},	/* 2b */         /* DEVLYS!!!!!!!!!!!! */
	{0x63,0x00},	/* 2c */         /* DEVLYS!!!!!!!!!!!! */
	{0x48,0x6B,0x00},	/* 2d */         /* DEVLYS!!!!!!!!!!!! */
	{0x65,0x00},	/* 2e */         /* DEVLYS!!!!!!!!!!!! */
	{0x00,0x00},	/* 2f */         /* DEVLYS!!!!!!!!!!!! */
	{0x6A,0x00},	/* 30 */         /* DEVLYS!!!!!!!!!!!! */
	{0x00,0x00},	/* 31 */         /* DEVLYS!!!!!!!!!!!! */
	{0x79,0x00},	/* 32 */         /* DEVLYS!!!!!!!!!!!! */
	{0x00,0x00},	/* 33 */         /* DEVLYS!!!!!!!!!!!! */
	{0x00,0x00},	/* 34 */         /* DEVLYS!!!!!!!!!!!! */
	{0x6F,0x00},	/* 35 */         /* DEVLYS!!!!!!!!!!!! */
	{0x00,0x00},	/* 36 */         /* DEVLYS!!!!!!!!!!!! */
	{0x00,0x00},	/* 37 */         /* DEVLYS!!!!!!!!!!!! */
	{0x6C,0x00},	/* 38 */         /* DEVLYS!!!!!!!!!!!! */
	{ 0x67, 0x00 },	/* 39 */ /* HA */         /* DEVLYS!!!!!!!!!!!! */
	{0x00,0x00},	/* 3a */         /* DEVLYS!!!!!!!!!!!! */
	{0x00,0x00},	/* 3b */         /* DEVLYS!!!!!!!!!!!! */
	{0x00,0x00},	/* 3c */         /* DEVLYS!!!!!!!!!!!! */
	{0x00,0x00},	/* 3d */         /* DEVLYS!!!!!!!!!!!! */
	{0x6B,0x00},	/* 3e */ /* vowel stem */         /* DEVLYS!!!!!!!!!!!! */
	{ 0x64, 0x00 },	/* 3f CHECK THIS I CHANGED IT */         /* DEVLYS!!!!!!!!!!!! */
	{0x68,0x00},	/* 40 */         /* DEVLYS!!!!!!!!!!!! */
	{0x71,0x00},	/* 41 */ /*  u */         /* DEVLYS!!!!!!!!!!!! */
	{0x00,0x00},	/* 42 */         /* DEVLYS!!!!!!!!!!!! */
	{0x00,0x00},	/* 43 */         /* DEVLYS!!!!!!!!!!!! */
	{0x00,0x00},	/* 44 */         /* DEVLYS!!!!!!!!!!!! */
	{0x00,0x00},	/* 45 */         /* DEVLYS!!!!!!!!!!!! */
	{0x00,0x00},	/* 46 */         /* DEVLYS!!!!!!!!!!!! */
	{0x00,0x00},	/* 47 */         /* DEVLYS!!!!!!!!!!!! */
	{0x53,0x00},	/* 48 */         /* DEVLYS!!!!!!!!!!!! */
	{0x00,0x00},	/* 49 */         /* DEVLYS!!!!!!!!!!!! */
	{0x00,0x00},	/* 4a */         /* DEVLYS!!!!!!!!!!!! */
	{0xA8,0x00},	/* 4b */         /* DEVLYS!!!!!!!!!!!! */
	{0x00,0x00},	/* 4c */         /* DEVLYS!!!!!!!!!!!! */
	{0x00,0x00},	/* 4d */         /* DEVLYS!!!!!!!!!!!! */
	{0x00,0x00},	/* 4e */         /* DEVLYS!!!!!!!!!!!! */
	{0x00,0x00},	/* 4f */         /* DEVLYS!!!!!!!!!!!! */
	{0x00,0x00},	/* 50 */         /* DEVLYS!!!!!!!!!!!! */
	{0x00,0x00},	/* 51 */         /* DEVLYS!!!!!!!!!!!! */
	{0x00,0x00},	/* 52 */         /* DEVLYS!!!!!!!!!!!! */
	{0x00,0x00},	/* 53 */         /* DEVLYS!!!!!!!!!!!! */
	{0x00,0x00},	/* 54 */         /* DEVLYS!!!!!!!!!!!! */
	{0x00,0x00},	/* 55 */         /* DEVLYS!!!!!!!!!!!! */
	{0x00,0x00},	/* 56 */         /* DEVLYS!!!!!!!!!!!! */
	{0x00,0x00},	/* 57 */         /* DEVLYS!!!!!!!!!!!! */
	{0x00,0x00},	/* 58 */         /* DEVLYS!!!!!!!!!!!! */
	{0x00,0x00},	/* 59 */         /* DEVLYS!!!!!!!!!!!! */
	{0x00,0x00},	/* 5a */         /* DEVLYS!!!!!!!!!!!! */
	{0x00,0x00},	/* 5b */         /* DEVLYS!!!!!!!!!!!! */
	{0x00,0x00},	/* 5c */         /* DEVLYS!!!!!!!!!!!! */
	{0x00,0x00},	/* 5d */         /* DEVLYS!!!!!!!!!!!! */
	{0x00,0x00},	/* 5e */         /* DEVLYS!!!!!!!!!!!! */
	{0x00,0x00},	/* 5f */         /* DEVLYS!!!!!!!!!!!! */
	{0x00,0x00},	/* 60 */         /* DEVLYS!!!!!!!!!!!! */
	{0x00,0x00},	/* 61 */         /* DEVLYS!!!!!!!!!!!! */
	{0x00,0x00},	/* 62 */         /* DEVLYS!!!!!!!!!!!! */
	{0x00,0x00},	/* 63 */         /* DEVLYS!!!!!!!!!!!! */
	{0x41,0x00},	/* 64 */         /* DEVLYS!!!!!!!!!!!! */
	{0x00,0x00},	/* 65 */         /* DEVLYS!!!!!!!!!!!! */
	{0x00,0x00},	/* 66 */         /* DEVLYS!!!!!!!!!!!! */
	{0x00,0x00},	/* 67 */         /* DEVLYS!!!!!!!!!!!! */
	{0x00,0x00},	/* 68 */         /* DEVLYS!!!!!!!!!!!! */
	{0x00,0x00},	/* 69 */         /* DEVLYS!!!!!!!!!!!! */
	{0x00,0x00},	/* 6a */         /* DEVLYS!!!!!!!!!!!! */
	{0x00,0x00},	/* 6b */         /* DEVLYS!!!!!!!!!!!! */
	{0x00,0x00},	/* 6c */         /* DEVLYS!!!!!!!!!!!! */
	{0x00,0x00},	/* 6d */         /* DEVLYS!!!!!!!!!!!! */
	{0x00,0x00},	/* 6e */         /* DEVLYS!!!!!!!!!!!! */
	{0x00,0x00},	/* 6f */         /* DEVLYS!!!!!!!!!!!! */
	{0x00,0x00},	/* 70 */         /* DEVLYS!!!!!!!!!!!! */
	{0x00,0x00},	/* 71 */         /* DEVLYS!!!!!!!!!!!! */
	{0x00,0x00},	/* 72 */         /* DEVLYS!!!!!!!!!!!! */
	{0x00,0x00},	/* 73 */         /* DEVLYS!!!!!!!!!!!! */
	{0x00,0x00},	/* 74 */         /* DEVLYS!!!!!!!!!!!! */
	{0x00,0x00},	/* 75 */         /* DEVLYS!!!!!!!!!!!! */
	{0x00,0x00},	/* 76 */         /* DEVLYS!!!!!!!!!!!! */
	{0x00,0x00},	/* 77 */         /* DEVLYS!!!!!!!!!!!! */
	{0x00,0x00},	/* 78 */         /* DEVLYS!!!!!!!!!!!! */
	{0x00,0x00},	/* 79 */         /* DEVLYS!!!!!!!!!!!! */
	{0x00,0x00},	/* 7a */         /* DEVLYS!!!!!!!!!!!! */
	{0x00,0x00},	/* 7b */         /* DEVLYS!!!!!!!!!!!! */
	{0x00,0x00},	/* 7c */         /* DEVLYS!!!!!!!!!!!! */
	{0x00,0x00},	/* 7d */         /* DEVLYS!!!!!!!!!!!! */
	{0x00,0x00},	/* 7e */         /* DEVLYS!!!!!!!!!!!! */
	{0x00,0x00}	/* 7f */         /* DEVLYS!!!!!!!!!!!! */
};         /* DEVLYS!!!!!!!!!!!! */
         /* DEVLYS!!!!!!!!!!!! */
unsigned char convTableHalf[0x80][5] =         /* DEVLYS!!!!!!!!!!!! */
{         /* DEVLYS!!!!!!!!!!!! */
	{0x00,0x00},	/* 00 */         /* DEVLYS!!!!!!!!!!!! */
	{0x00,0x00},	/* 01 */         /* DEVLYS!!!!!!!!!!!! */
	{0x00,0x00},	/* 02 */         /* DEVLYS!!!!!!!!!!!! */
	{0x00,0x00},	/* 03 */         /* DEVLYS!!!!!!!!!!!! */
	{0x00,0x00},	/* 04 */         /* DEVLYS!!!!!!!!!!!! */
	{0x00,0x00},	/* 05 */         /* DEVLYS!!!!!!!!!!!! */
	{0x00,0x00},	/* 06 */         /* DEVLYS!!!!!!!!!!!! */
	{0x00,0x00},	/* 07 */         /* DEVLYS!!!!!!!!!!!! */
	{0x00,0x00},	/* 08 */         /* DEVLYS!!!!!!!!!!!! */
	{0x00,0x00},	/* 09 */         /* DEVLYS!!!!!!!!!!!! */
	{0x00,0x00},	/* 0a */         /* DEVLYS!!!!!!!!!!!! */
	{0x00,0x00},	/* 0b */         /* DEVLYS!!!!!!!!!!!! */
	{0x00,0x00},	/* 0c */         /* DEVLYS!!!!!!!!!!!! */
	{0x00,0x00},	/* 0d */         /* DEVLYS!!!!!!!!!!!! */
	{0x00,0x00},	/* 0e */         /* DEVLYS!!!!!!!!!!!! */
	{0x00,0x00},	/* 0f */         /* DEVLYS!!!!!!!!!!!! */
	{0x00,0x00},	/* 10 */         /* DEVLYS!!!!!!!!!!!! */
	{0x00,0x00},	/* 11 */         /* DEVLYS!!!!!!!!!!!! */
	{0x00,0x00},	/* 12 */         /* DEVLYS!!!!!!!!!!!! */
	{0x00,0x00},	/* 13 */         /* DEVLYS!!!!!!!!!!!! */
	{0x00,0x00},	/* 14 */         /* DEVLYS!!!!!!!!!!!! */
	{0x44,0x00},	/* 15 */         /* DEVLYS!!!!!!!!!!!! */
	{0x00,0x00},	/* 16 */         /* DEVLYS!!!!!!!!!!!! */
	{0x58,0x00},	/* 17 */         /* DEVLYS!!!!!!!!!!!! */
	{0x00,0x00},	/* 18 */         /* DEVLYS!!!!!!!!!!!! */
	{0x00,0x00},	/* 19 */         /* DEVLYS!!!!!!!!!!!! */
	{0x00,0x00},	/* 1a */         /* DEVLYS!!!!!!!!!!!! */
	{0x00,0x00},	/* 1b */         /* DEVLYS!!!!!!!!!!!! */
	{0x54,0x00},	/* 1c */         /* DEVLYS!!!!!!!!!!!! */
	{0x00,0x00},	/* 1d */         /* DEVLYS!!!!!!!!!!!! */
	{0x00,0x00},	/* 1e */         /* DEVLYS!!!!!!!!!!!! */
	{0x00,0x00},	/* 1f */         /* DEVLYS!!!!!!!!!!!! */
	{0x00,0x00},	/* 20 */         /* DEVLYS!!!!!!!!!!!! */
	{0x00,0x00},	/* 21 */         /* DEVLYS!!!!!!!!!!!! */
	{0x00,0x00},	/* 22 */         /* DEVLYS!!!!!!!!!!!! */
	{0x00,0x00},	/* 23 */         /* DEVLYS!!!!!!!!!!!! */
	{0x00,0x00},	/* 24 */         /* DEVLYS!!!!!!!!!!!! */
	{0x00,0x00},	/* 25 */         /* DEVLYS!!!!!!!!!!!! */
	{0x00,0x00},	/* 26 */         /* DEVLYS!!!!!!!!!!!! */
	{0xCB,0x00},	/* 27 */         /* DEVLYS!!!!!!!!!!!! */
	{0x55,0x00},	/* 28 */         /* DEVLYS!!!!!!!!!!!! */
	{0x00,0x00},	/* 29 */         /* DEVLYS!!!!!!!!!!!! */
	{0x00,0x00},	/* 2a */         /* DEVLYS!!!!!!!!!!!! */
	{0x00,0x00},	/* 2b */         /* DEVLYS!!!!!!!!!!!! */
	{0x43,0x00},	/* 2c */         /* DEVLYS!!!!!!!!!!!! */
	{0x00,0x00},	/* 2d */         /* DEVLYS!!!!!!!!!!!! */
	{0x45,0x00},	/* 2e */         /* DEVLYS!!!!!!!!!!!! */
	{0x00,0x00},	/* 2f */         /* DEVLYS!!!!!!!!!!!! */
	{0x00,0x00},	/* 30 */         /* DEVLYS!!!!!!!!!!!! */
	{0x00,0x00},	/* 31 */         /* DEVLYS!!!!!!!!!!!! */
	{0x59,0x00},	/* 32 */         /* DEVLYS!!!!!!!!!!!! */
	{0x00,0x00},	/* 33 */         /* DEVLYS!!!!!!!!!!!! */
	{0x00,0x00},	/* 34 */         /* DEVLYS!!!!!!!!!!!! */
	{0x00,0x00},	/* 35 */         /* DEVLYS!!!!!!!!!!!! */
	{0x00,0x00},	/* 36 */         /* DEVLYS!!!!!!!!!!!! */
	{0x00,0x00},	/* 37 */         /* DEVLYS!!!!!!!!!!!! */
	{0x4C,0x00},	/* 38 */         /* DEVLYS!!!!!!!!!!!! */
	{0x00,0x00},	/* 39 */         /* DEVLYS!!!!!!!!!!!! */
	{0x00,0x00},	/* 3a */         /* DEVLYS!!!!!!!!!!!! */
	{0x00,0x00},	/* 3b */         /* DEVLYS!!!!!!!!!!!! */
	{0x00,0x00},	/* 3c */         /* DEVLYS!!!!!!!!!!!! */
	{0x00,0x00},	/* 3d */         /* DEVLYS!!!!!!!!!!!! */
	{0x00,0x00},	/* 3e */         /* DEVLYS!!!!!!!!!!!! */
	{0x00,0x00},	/* 3f */         /* DEVLYS!!!!!!!!!!!! */
	{0x00,0x00},	/* 40 */         /* DEVLYS!!!!!!!!!!!! */
	{0x00,0x00},	/* 41 */         /* DEVLYS!!!!!!!!!!!! */
	{0x00,0x00},	/* 42 */         /* DEVLYS!!!!!!!!!!!! */
	{0x00,0x00},	/* 43 */         /* DEVLYS!!!!!!!!!!!! */
	{0x00,0x00},	/* 44 */         /* DEVLYS!!!!!!!!!!!! */
	{0x00,0x00},	/* 45 */         /* DEVLYS!!!!!!!!!!!! */
	{0x00,0x00},	/* 46 */         /* DEVLYS!!!!!!!!!!!! */
	{0x00,0x00},	/* 47 */         /* DEVLYS!!!!!!!!!!!! */
	{0x00,0x00},	/* 48 */         /* DEVLYS!!!!!!!!!!!! */
	{0x00,0x00},	/* 49 */         /* DEVLYS!!!!!!!!!!!! */
	{0x00,0x00},	/* 4a */         /* DEVLYS!!!!!!!!!!!! */
	{0x00,0x00},	/* 4b */         /* DEVLYS!!!!!!!!!!!! */
	{0x00,0x00},	/* 4c */         /* DEVLYS!!!!!!!!!!!! */
	{0x00,0x00},	/* 4d */         /* DEVLYS!!!!!!!!!!!! */
	{0x00,0x00},	/* 4e */         /* DEVLYS!!!!!!!!!!!! */
	{0x00,0x00},	/* 4f */         /* DEVLYS!!!!!!!!!!!! */
	{0x00,0x00},	/* 50 */         /* DEVLYS!!!!!!!!!!!! */
	{0x00,0x00},	/* 51 */         /* DEVLYS!!!!!!!!!!!! */
	{0x00,0x00},	/* 52 */         /* DEVLYS!!!!!!!!!!!! */
	{0x00,0x00},	/* 53 */         /* DEVLYS!!!!!!!!!!!! */
	{0x00,0x00},	/* 54 */         /* DEVLYS!!!!!!!!!!!! */
	{0x00,0x00},	/* 55 */         /* DEVLYS!!!!!!!!!!!! */
	{0x00,0x00},	/* 56 */         /* DEVLYS!!!!!!!!!!!! */
	{0x00,0x00},	/* 57 */         /* DEVLYS!!!!!!!!!!!! */
	{0x00,0x00},	/* 58 */         /* DEVLYS!!!!!!!!!!!! */
	{0x00,0x00},	/* 59 */         /* DEVLYS!!!!!!!!!!!! */
	{0x00,0x00},	/* 5a */         /* DEVLYS!!!!!!!!!!!! */
	{0x00,0x00},	/* 5b */         /* DEVLYS!!!!!!!!!!!! */
	{0x00,0x00},	/* 5c */         /* DEVLYS!!!!!!!!!!!! */
	{0x00,0x00},	/* 5d */         /* DEVLYS!!!!!!!!!!!! */
	{0x00,0x00},	/* 5e */         /* DEVLYS!!!!!!!!!!!! */
	{0x00,0x00},	/* 5f */         /* DEVLYS!!!!!!!!!!!! */
	{0x00,0x00},	/* 60 */         /* DEVLYS!!!!!!!!!!!! */
	{0x00,0x00},	/* 61 */         /* DEVLYS!!!!!!!!!!!! */
	{0x00,0x00},	/* 62 */         /* DEVLYS!!!!!!!!!!!! */
	{0x00,0x00},	/* 63 */         /* DEVLYS!!!!!!!!!!!! */
	{0x00,0x00},	/* 64 */         /* DEVLYS!!!!!!!!!!!! */
	{0x00,0x00},	/* 65 */         /* DEVLYS!!!!!!!!!!!! */
	{0x00,0x00},	/* 66 */         /* DEVLYS!!!!!!!!!!!! */
	{0x00,0x00},	/* 67 */         /* DEVLYS!!!!!!!!!!!! */
	{0x00,0x00},	/* 68 */         /* DEVLYS!!!!!!!!!!!! */
	{0x00,0x00},	/* 69 */         /* DEVLYS!!!!!!!!!!!! */
	{0x00,0x00},	/* 6a */         /* DEVLYS!!!!!!!!!!!! */
	{0x00,0x00},	/* 6b */         /* DEVLYS!!!!!!!!!!!! */
	{0x00,0x00},	/* 6c */         /* DEVLYS!!!!!!!!!!!! */
	{0x00,0x00},	/* 6d */         /* DEVLYS!!!!!!!!!!!! */
	{0x00,0x00},	/* 6e */         /* DEVLYS!!!!!!!!!!!! */
	{0x00,0x00},	/* 6f */         /* DEVLYS!!!!!!!!!!!! */
	{0x00,0x00},	/* 70 */         /* DEVLYS!!!!!!!!!!!! */
	{0x00,0x00},	/* 71 */         /* DEVLYS!!!!!!!!!!!! */
	{0x00,0x00},	/* 72 */         /* DEVLYS!!!!!!!!!!!! */
	{0x00,0x00},	/* 73 */         /* DEVLYS!!!!!!!!!!!! */
	{0x00,0x00},	/* 74 */         /* DEVLYS!!!!!!!!!!!! */
	{0x00,0x00},	/* 75 */         /* DEVLYS!!!!!!!!!!!! */
	{0x00,0x00},	/* 76 */         /* DEVLYS!!!!!!!!!!!! */
	{0x00,0x00},	/* 77 */         /* DEVLYS!!!!!!!!!!!! */
	{0x00,0x00},	/* 78 */         /* DEVLYS!!!!!!!!!!!! */
	{0x00,0x00},	/* 79 */         /* DEVLYS!!!!!!!!!!!! */
	{0x00,0x00},	/* 7a */         /* DEVLYS!!!!!!!!!!!! */
	{0x00,0x00},	/* 7b */         /* DEVLYS!!!!!!!!!!!! */
	{0x00,0x00},	/* 7c */         /* DEVLYS!!!!!!!!!!!! */
	{0x00,0x00},	/* 7d */         /* DEVLYS!!!!!!!!!!!! */
	{0x00,0x00},	/* 7e */         /* DEVLYS!!!!!!!!!!!! */
	{0x00,0x00},	/* 7f */         /* DEVLYS!!!!!!!!!!!! */
};         /* DEVLYS!!!!!!!!!!!! */
#endif


unsigned char convTbl[0x80][5] =  /* XDVNG */
{
	{0x00,0x00},	/* 00 */
	{0x00,0x00},	/* 01 */
	{0x00,0x00},	/* 02 */
	{0x00,0x00},	/* 03 */
	{0x00,0x00},	/* 04 */
	{ 65, 0 },	/* 05 a */
	{ 65, 97, 0 }, /* 06 aa */
	{ 69, 0 },	/* 07 i */
	{0x49, 0 },	/* 08 ii */
	{0x75,0x00},	/* 09  u*/
	{0x55,0x00},	/* 0a */
	{0x3f,0x00},	/* 0b */
	{0x3b,0x00},	/* 0c */
	{0x4f, 0xf4, 0x00},	/* 0d */
	{0x4f, 0xf1,0x00},	/* 0e */ /* WRONG should be ~ */
	{0x4f,0x00},	/* 0f */
	{0x4f, 0xf0,0x00},	/* 10 */
	{65,97,0xf4,0x00},	/* 11 */
	{65,97,0xf1,0x00},	/* 12 */ /* WRONG should be ~ */
	{65,0x3c,0x00},	/* 13 */
	{65,0x3e,0x00},	/* 14 */
	{107,0x00},	/* 15 KA */
	{75,58,0x00},	/* 16  ????*/
	{103,58,0x00},	/* 17 */
	{71,58,0x00},	/* 18 */
        {123,0x00},  /* 19 */ /* NGA */
	{99,58,0x00},	/* 1a */
	{67,0x00},	/* 1b */
	{106,58,0x00},	/* 1c */
	{74,58,0x00},	/* 1d */
	{0x57,58,0x00},	/* 1e */
	{88,0x00},	/* 1f */
	{89,0x00},	/* 20 */
	{82,0x00},	/* 21 */
	{90,0x00},	/* 22 */
	{78,58,0x00},	/* 23 */
	{116,58,0x00},	/* 24 */
	{84,58,0x00},	/* 25 */
	{100,0x00},	/* 26 */
	{68,58,0x00},	/* 27 */
	{110,58,0x00},	/* 28 */
	{110,0xcf,58,0x00},	/* 29 ? NNNA, na - dot */
	{112,58,0x00},	/* 2a */
	{80,0x00},	/* 2b */
	{98,58,0x00},	/* 2c */
	{66,58,0x00},	/* 2d */
	{109,58,0x00},	/* 2e */
	{121,58,0x00},	/* 2f */
	{114,0x00},	/* 30 */
	{0x72,0xcf,0x00},	/* 31 */
	{108,58,0x00},	/* 32 */
	{0x4c,0x00},	/* 33 */
	{0x4c,0xcf,0x00},	/* 34 */
	{118,58,0x00},	/* 35 */
	{83,58,0x00},	/* 36 */
	{92,58,0x00},	/* 37 */
	{115,58,0x00},	/* 38 */
	{104, 0x00 },	/* 39 */ /* HA */
	{0x00,0x00},	/* 3a */
	{0x00,0x00},	/* 3b */
	{0xCF,0x00},	/* 3c */
	{124,0x00},	/* 3d */
	{58,0x00},	/* 3e */ /* vowel stem */
	{ 0x65, 0x00 },	/* 3f */
	{0x69,0x00},	/* 40 */
	{0xD9,0x00},	/* 41 */ /*  u */
	{0xDD,0x00},	/* 42 */
	{0xE1,0x00},	/* 43 */
	{0xE5,0x00},	/* 44 */
	{0xF4,0x00},	/* 45 */
	{0x00,0x00},	/* 46 */
	{0x00,0x00},	/* 47 */
	{0x53,0x00},	/* 48 */
	{0x00,0x00},	/* 49 */
	{0x00,0x00},	/* 4a */
	{0x3C,0x00},	/* 4b */
	{0x3E,0x00},	/* 4c */
	{0xCE,0x00},	/* 4d */ /* virama */
	{0x00,0x00},	/* 4e */
	{0x00,0x00},	/* 4f */
	{0x21,0x00},	/* 50 */
	{0x00,0x00},	/* 51 */
	{0x00,0x00},	/* 52 */
	{0x00,0x00},	/* 53 */
	{0x00,0x00},	/* 54 */
	{0x00,0x00},	/* 55 */
	{0x00,0x00},	/* 56 */
	{0x00,0x00},	/* 57 */
	{0x00,0x00},	/* 58 */
	{0x00,0x00},	/* 59 */
	{0x00,0x00},	/* 5a */
	{0x00,0x00},	/* 5b */
	{0x00,0x00},	/* 5c */
	{0x00,0x00},	/* 5d */
	{0x00,0x00},	/* 5e */
	{0x00,0x00},	/* 5f */
	{0x00,0x00},	/* 60 */
	{0x00,0x00},	/* 61 */
	{0x00,0x00},	/* 62 */
	{0x00,0x00},	/* 63 */
	{0x41,0x00},	/* 64 */
	{0x00,0x00},	/* 65 */
	{0x30,0x00},	/* 66 */ /* Dev 0.. */
	{0x31,0x00},	/* 67 */ /* 1 */
	{0x32,0x00},	/* 68 */
	{0x33,0x00},	/* 69 */
	{0x34,0x00},	/* 6a */
	{0x35,0x00},	/* 6b */
	{0x36,0x00},	/* 6c */
	{0x37,0x00},	/* 6d */
	{0x38,0x00},	/* 6e */
	{0x39,0x00},	/* 6f */  /* Dev 9 */
	{0x00,0x00},	/* 70 */
	{0x00,0x00},	/* 71 */
	{0x00,0x00},	/* 72 */
	{0x00,0x00},	/* 73 */
	{0x00,0x00},	/* 74 */
	{0x00,0x00},	/* 75 */
	{0x00,0x00},	/* 76 */
	{0x00,0x00},	/* 77 */
	{0x00,0x00},	/* 78 */
	{0x00,0x00},	/* 79 */
	{0x00,0x00},	/* 7a */
	{0x00,0x00},	/* 7b */
	{0x00,0x00},	/* 7c */
	{0x00,0x00},	/* 7d */
	{0x00,0x00},	/* 7e */
	{0x00,0x00}	/* 7f */
};

unsigned char convTableHalf[0x80][5] =  /* XDVNG */
{
	{0x00,0x00},	/* 00 */
	{0x00,0x00},	/* 01 */
	{0x00,0x00},	/* 02 */
	{0x00,0x00},	/* 03 */
	{0x00,0x00},	/* 04 */
	{0x00,0x00},	/* 05 */
	{0x00,0x00},	/* 06 */
	{0x00,0x00},	/* 07 */
	{0x00,0x00},	/* 08 */
	{0x00,0x00},	/* 09 */
	{0x00,0x00},	/* 0a */
	{0x00,0x00},	/* 0b */
	{0x00,0x00},	/* 0c */
	{0x00,0x00},	/* 0d */
	{0x00,0x00},	/* 0e */
	{0x00,0x00},	/* 0f */
	{0x00,0x00},	/* 10 */
	{0x00,0x00},	/* 11 */
	{0x00,0x00},	/* 12 */
	{0x00,0x00},	/* 13 */
	{0x00,0x00},	/* 14 */
	{0x44,0x00},	/* 15 */
	{0x00,0x00},	/* 16 */
	{0x58,0x00},	/* 17 */
	{0x00,0x00},	/* 18 */
	{0x00,0x00},	/* 19 */
	{0x00,0x00},	/* 1a */
	{0x00,0x00},	/* 1b */
	{0x54,0x00},	/* 1c */
	{0x00,0x00},	/* 1d */
	{0x00,0x00},	/* 1e */
	{0x00,0x00},	/* 1f */
	{0x00,0x00},	/* 20 */
	{0x00,0x00},	/* 21 */
	{0x00,0x00},	/* 22 */
	{0x00,0x00},	/* 23 */
	{0x00,0x00},	/* 24 */
	{0x00,0x00},	/* 25 */
	{0x00,0x00},	/* 26 */
	{0xCB,0x00},	/* 27 */
	{110,0x00},	/* 28 */
	{0x00,0x00},	/* 29 */
	{0x00,0x00},	/* 2a */
	{0x00,0x00},	/* 2b */
	{0x43,0x00},	/* 2c */
	{0x00,0x00},	/* 2d */
	{0x45,0x00},	/* 2e */
	{0x00,0x00},	/* 2f */
	{0x00,0x00},	/* 30 */
	{0x00,0x00},	/* 31 */
	{0x59,0x00},	/* 32 */
	{0x00,0x00},	/* 33 */
	{0x00,0x00},	/* 34 */
	{0x00,0x00},	/* 35 */
	{0x00,0x00},	/* 36 */
	{0x00,0x00},	/* 37 */
	{115,0x00},	/* 38 */
	{0x00,0x00},	/* 39 */
	{0x00,0x00},	/* 3a */
	{0x00,0x00},	/* 3b */
	{0x00,0x00},	/* 3c */
	{0x00,0x00},	/* 3d */
	{0x00,0x00},	/* 3e */
	{0x00,0x00},	/* 3f */
	{0x00,0x00},	/* 40 */
	{0x00,0x00},	/* 41 */
	{0x00,0x00},	/* 42 */
	{0x00,0x00},	/* 43 */
	{0x00,0x00},	/* 44 */
	{0x00,0x00},	/* 45 */
	{0x00,0x00},	/* 46 */
	{0x00,0x00},	/* 47 */
	{0x00,0x00},	/* 48 */
	{0x00,0x00},	/* 49 */
	{0x00,0x00},	/* 4a */
	{0x00,0x00},	/* 4b */
	{0x00,0x00},	/* 4c */
	{0x00,0x00},	/* 4d */
	{0x00,0x00},	/* 4e */
	{0x00,0x00},	/* 4f */
	{0x00,0x00},	/* 50 */
	{0x00,0x00},	/* 51 */
	{0x00,0x00},	/* 52 */
	{0x00,0x00},	/* 53 */
	{0x00,0x00},	/* 54 */
	{0x00,0x00},	/* 55 */
	{0x00,0x00},	/* 56 */
	{0x00,0x00},	/* 57 */
	{0x00,0x00},	/* 58 */
	{0x00,0x00},	/* 59 */
	{0x00,0x00},	/* 5a */
	{0x00,0x00},	/* 5b */
	{0x00,0x00},	/* 5c */
	{0x00,0x00},	/* 5d */
	{0x00,0x00},	/* 5e */
	{0x00,0x00},	/* 5f */
	{0x00,0x00},	/* 60 */
	{0x00,0x00},	/* 61 */
	{0x00,0x00},	/* 62 */
	{0x00,0x00},	/* 63 */
	{0x00,0x00},	/* 64 */
	{0x00,0x00},	/* 65 */
	{0x30,0x00},	/* 66 */ /* Dev 0.. */
	{0x31,0x00},	/* 67 */ /* 1 */
	{0x32,0x00},	/* 68 */
	{0x33,0x00},	/* 69 */
	{0x34,0x00},	/* 6a */
	{0x35,0x00},	/* 6b */
	{0x36,0x00},	/* 6c */
	{0x37,0x00},	/* 6d */
	{0x38,0x00},	/* 6e */
	{0x39,0x00},	/* 6f */  /* Dev 9 */
	{0x00,0x00},	/* 70 */
	{0x00,0x00},	/* 71 */
	{0x00,0x00},	/* 72 */
	{0x00,0x00},	/* 73 */
	{0x00,0x00},	/* 74 */
	{0x00,0x00},	/* 75 */
	{0x00,0x00},	/* 76 */
	{0x00,0x00},	/* 77 */
	{0x00,0x00},	/* 78 */
	{0x00,0x00},	/* 79 */
	{0x00,0x00},	/* 7a */
	{0x00,0x00},	/* 7b */
	{0x00,0x00},	/* 7c */
	{0x00,0x00},	/* 7d */
	{0x00,0x00},	/* 7e */
	{0x00,0x00},	/* 7f */
};

