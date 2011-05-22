//*****************************************************************************
//
// fontcmsc18.c - Font definition for the 18 point Cmsc font.
//
// Copyright (c) 2008-2011 Texas Instruments Incorporated.  All rights reserved.
// Software License Agreement
// 
// Texas Instruments (TI) is supplying this software for use solely and
// exclusively on TI's microcontroller products. The software is owned by
// TI and/or its suppliers, and is protected under applicable copyright
// laws. You may not combine this software with "viral" open-source
// software in order to form a larger program.
// 
// THIS SOFTWARE IS PROVIDED "AS IS" AND WITH ALL FAULTS.
// NO WARRANTIES, WHETHER EXPRESS, IMPLIED OR STATUTORY, INCLUDING, BUT
// NOT LIMITED TO, IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR
// A PARTICULAR PURPOSE APPLY TO THIS SOFTWARE. TI SHALL NOT, UNDER ANY
// CIRCUMSTANCES, BE LIABLE FOR SPECIAL, INCIDENTAL, OR CONSEQUENTIAL
// DAMAGES, FOR ANY REASON WHATSOEVER.
// 
// This is part of revision 6852 of the Stellaris Graphics Library.
//
//*****************************************************************************

//*****************************************************************************
//
// This file is generated by ftrasterize; DO NOT EDIT BY HAND!
//
//*****************************************************************************

#include "grlib/grlib.h"

//*****************************************************************************
//
// Details of this font:
//     Style: cmsc
//     Size: 18 point
//     Bold: no
//     Italic: no
//     Memory usage: 2312 bytes
//
//*****************************************************************************

//*****************************************************************************
//
// The compressed data for the 18 point Cmsc font.
//
//*****************************************************************************
static const unsigned char g_pucCmsc18Data[2112] =
{
      5,   7,   0,  16,  80,  15,   2,  33,  17,  17,  17,  17,
     17,  17,  17,  17,  17,  49,  17, 176,  15,   7, 226,  34,
     19,  18,  49,  33,  49,  33,  33,  33,   0,  10,  96,  35,
     14, 240, 240,  65,  49, 129,  65, 129,  49, 145,  49, 145,
     49,  77,  81,  49, 145,  49, 145,  49,  93,  65,  49, 145,
     49, 129,  65, 129,  49, 145,  49, 240, 240,  80,  33,   9,
    193, 101,  50,  17,  34,  17,  33,  34,  17,  33,  34,  18,
     17, 100, 116,  81,  34,  18,  17,  49,  18,  17,  49,  17,
     33,  33,  53,  97, 240, 240, 176,  46,  15,  19, 113,  65,
     34,  66,  49,  70,  65,  65,  49,  81,  65,  49,  81,  65,
     33, 113,  33,  33, 131,  33,  51, 129,  49,  17, 113,  49,
     49,  81,  65,  49,  66,  65,  49,  65,  81,  49,  49, 113,
     17, 195,   0,   7,  96,  35,  14, 240,  35, 161,  49, 145,
     49, 145,  49, 145,  18, 163,  68,  65,  97,  68,  65,  65,
     49,  49,  81,  50,  17,  97,  66,  81,  18,  49,  17,  50,
     36,  52,   0,   9,  10,   4, 130,  35,  49,  49,  33,   0,
      6,  32,  21,   5,  49,  49,  49,  65,  65,  49,  65,  65,
     65,  65,  65,  65,  65,  81,  65,  65,  81,  81,  96,  21,
      5,   1,  81,  65,  81,  65,  81,  65,  65,  65,  65,  65,
     65,  65,  49,  65,  49,  65,  49, 144,  17,   8,  49, 113,
     65,  33,  33,  37,  81,  85,  33,  33,  33,  65,   0,  11,
     64,  20,  14,   0,   6,   1, 209, 209, 209, 209, 209, 125,
    113, 209, 209, 209, 209, 209,   0,   6,  16,  10,   4,   0,
      6,   2,  35,  49,  49,  33, 160,   8,   6,   0,   7,  69,
      0,   6,  16,   6,   2, 240, 145,  17, 176,  21,   8,  97,
    113,  97, 113, 113,  97, 113,  97, 113, 113,  97, 113, 113,
     97, 113,  97, 113, 113, 240,  28,   8, 240,  51,  65,  49,
     33,  81,  17,  81,  17,  81,  17,  81,  17,  81,  17,  81,
     17,  81,  17,  81,  33,  49,  67, 240, 240, 208,  17,   6,
    225,  51,  81,  81,  81,  81,  81,  81,  81,  81,  81,  53,
    240, 240,  16,  23,   8, 240,  51,  50,  49,  33,  81,  17,
     81,  17,  81, 113,  97,  97,  97,  97,  82,  65,  23, 240,
    240, 176,  22,   7, 243,  49,  49,  33,  65,  17,  65,  81,
     51, 113, 113,  97,  17,  65,  17,  50,  36, 240, 240, 112,
     23,   9, 240, 129, 129,  99,  97,  17,  81,  33,  65,  49,
     65,  49,  49,  65,  56,  97, 129, 101,   0,   5,  96,  24,
      8, 240,  33,  65,  37,  49, 113, 113,  18,  66,  33, 129,
    113,  18,  65,  18,  65,  17,  65,  52, 240, 240, 208,  27,
      8, 240,  67,  65,  34,  33,  65,  17, 113,  19,  50,  49,
     33,  81,  17,  81,  17,  81,  17,  81,  33,  49,  67, 240,
    240, 208,  19,   9, 240,  65, 135,  17,  81, 113, 113, 129,
    113, 129, 129, 129, 129, 129,   0,   6,  32,  26,   9, 240,
     83,  81,  50,  33,  81,  33,  81,  50,  33,  83,  81,  20,
     33,  66,  33,  82,  17,  81,  49,  50,  68,   0,   6,  27,
      8, 240,  51,  65,  49,  33,  81,  17,  81,  17,  81,  17,
     81,  33,  50,  51,  17, 113,  17,  65,  33,  49,  67, 240,
    240, 224,   7,   2, 193,  17, 145,  17, 176,  11,   3, 240,
     50,  18, 210,  18,  33,  33,  17, 128,  18,  12,   0,   7,
     33, 146, 130, 130, 130, 130, 178, 194, 194, 194, 194,   0,
      6,  16,  11,  13,   0,  11,  60, 240, 240, 172,   0,  11,
     64,  17,  12,   0,   6,   2, 194, 194, 194, 194, 178, 130,
    115, 114, 130,   0,   8,  96,  19,   8, 240,  37,  33,  81,
     17,  81,  97,  97, 113,  97, 113, 113, 227,  83, 240, 240,
    208,  44,  14, 240, 240,  37, 114,  19,  18,  65,  33,  49,
     33,  34,  17,  81,  18,  17,  33,  81,  33,  17,  33,  81,
     33,  17,  33,  81,  33,  17,  33,  81,  33,  33,  33,  50,
     33,  34,  35,  34,  66, 129,  88,   0,   9,  28,  14, 240,
     81, 209, 195, 161,  18, 161,  34, 145,  34, 129,  65, 129,
     66, 119,  97,  97,  97,  98,  81,  98,  52,  69,   0,   8,
    112,  27,  12, 240, 153,  81,  97,  65, 113,  49, 113,  49,
     97,  71,  81,  97,  65, 113,  49, 113,  49, 113,  49,  97,
     41,   0,   7, 112,  27,  13, 240, 244,  49,  50,  68,  33,
    130,  33, 145,  17, 161,  17, 193, 193, 161,  33, 145,  33,
    129,  66,  82, 101,   0,   8,  80,  28,  13, 240, 185,  97,
     97,  81, 113,  65, 129,  49, 129,  49, 129,  49, 129,  49,
    129,  49, 129,  49, 113,  65,  97,  57,   0,   8,  80,  28,
     13, 240, 187,  65, 113,  65, 113,  65,  65, 113,  65, 118,
    113,  65, 113,  65,  49,  49, 129,  49, 113,  65, 113,  43,
      0,   8,  48,  24,  12, 240, 155,  49,  98,  49, 113,  49,
    177,  65,  97,  65, 102,  97,  65,  97,  65,  97, 177, 150,
      0,   8,  32,  25,  13, 240, 244, 114,  67,  49, 129,  49,
    129,  33, 193, 193, 193, 101,  33, 129,  49, 129,  66,  82,
    101,   0,   8,  80,  29,  13, 240, 181,  37,  49,  97,  81,
     97,  81,  97,  81,  97,  88,  81,  97,  81,  97,  81,  97,
     81,  97,  81,  97,  53,  37,   0,   8,  32,  17,   6, 197,
     49,  81,  81,  81,  81,  81,  81,  81,  81,  81,  53, 240,
    240,  16,  20,   8, 240,  53,  97, 113, 113, 113, 113, 113,
    113, 113,  34,  49,  34,  34,  52, 240, 240, 208,  30,  13,
    240, 181,  52,  49,  97,  81,  81,  97,  65, 113,  49, 129,
     34, 131,  18, 113,  65, 113,  66,  97,  82,  81,  98,  37,
     52,   0,   8,  32,  22,  11, 240, 117, 129, 161, 161, 161,
    161, 161, 161,  97,  49,  97,  49,  81,  65,  81,  41,   0,
      7,  16,  48,  16, 240, 240,  36, 131,  51,  98,  81,  17,
     81,  17,  81,  17,  81,  17,  81,  18,  65,  17,  81,  33,
     49,  33,  81,  34,  33,  33,  81,  49,  17,  49,  81,  49,
     17,  49,  81,  51,  49,  81,  65,  65,  53,  33,  37,   0,
     10,  16,  36,  14, 240, 212,  69,  51,  81,  81,  18,  65,
     81,  18,  65,  81,  34,  49,  81,  50,  33,  81,  50,  33,
     81,  66,  17,  81,  83,  81,  98,  81,  98,  53,  81,   0,
      9,  16,  28,  13, 240, 244, 114,  66,  65, 129,  49, 129,
     33, 161,  17, 161,  17, 161,  17, 161,  33, 129,  49, 129,
     66,  66, 116,   0,   8,  96,  22,  11, 240, 120,  81,  82,
     49,  97,  49,  97,  49,  82,  54,  81, 161, 161, 161, 161,
    133,   0,   7,  80,  33,  13, 240, 245,  98,  81,  66, 113,
     49, 129,  33, 161,  17, 161,  17, 161,  17, 161,  33, 129,
     50,  35,  33,  66,  17,  34, 117, 194,  17, 163, 162, 240,
    208,  29,  15, 240, 248, 145,  81, 129,  97, 113,  97, 113,
     81, 134, 145,  66, 129,  81, 129,  82, 113,  82, 113,  82,
     49,  35,  84,   0,   9,  80,  22,   9, 240,  83,  81,  50,
     33,  81,  33, 130, 133, 115, 130, 129,  17,  97,  18,  65,
     33,  20,   0,   6,  22,  13, 240, 203,  33,  65,  65,  17,
     81,  65, 113, 193, 193, 193, 193, 193, 193, 193, 151,   0,
      8,  64,  29,  14, 240, 213,  53,  49, 113,  81, 113,  81,
    113,  81, 113,  81, 113,  81, 113,  81, 113,  81, 113,  81,
     98,  97,  66, 133,   0,   9,  48,  28,  14, 240, 212,  84,
     34, 113,  81, 113,  82,  81, 113,  81, 114,  49, 130,  49,
    146,  17, 162,  17, 177,  17, 178, 209,   0,   9,  80,  45,
     19, 240, 240, 132,  52,  52,  34,  82,  81,  81,  82,  81,
     82,  66,  81,  82,  49,  18,  49, 113,  49,  33,  49, 114,
     33,  34,  17, 130,  17,  50,  17, 145,  17,  65,  17, 146,
     82, 162,  82, 177,  97,   0,  12,  80,  27,  14, 240, 213,
     52,  66,  81, 113,  65, 130,  33, 163, 194, 195, 161,  33,
    145,  50, 113,  82,  97,  98,  52,  69,   0,   8, 112,  24,
     14, 240, 213,  68,  50,  97,  97,  81, 114,  65, 130,  33,
    161,  17, 193, 209, 209, 209, 209, 181,   0,   9,  48,  23,
     10, 240,  89,  18,  81,  33,  82, 114, 129, 129, 130, 129,
    129,  81,  34,  81,  33,  82,  25,   0,   6,  48,  20,   4,
     67,  17,  49,  49,  49,  49,  49,  49,  49,  49,  49,  49,
     49,  49,  49,  49,  49,  51,  16,   8, 240,  33,  49,  33,
     49,  49,  49,  51,  19,  33,  50,   0,  12,  16,  20,   4,
     67,  49,  49,  49,  49,  49,  49,  49,  49,  49,  49,  49,
     49,  49,  49,  49,  49,  19,   8,   5, 193,  34,  17,   0,
      9,  64,   7,   2,  65,  17, 240, 240,  16,  10,   4, 145,
     33,  49,  51,  34,   0,   6,  16,  22,  11,   0,   7,  50,
    129,  17, 129,  18,  97,  49,  97,  49, 102,  65,  81,  65,
     82,  35,  52,   0,   7,  22,   9, 240, 240, 247,  49,  81,
     33,  81,  38,  49,  66,  33,  81,  33,  81,  33,  66,  23,
      0,   5, 112,  23,  10,   0,   6,  83,  33,  34,  51,  18,
     97,  17, 113,  17, 145, 113,  18,  97,  34,  65,  84,   0,
      6,  80,  23,  10,   0,   6,  39,  65,  66,  49,  97,  33,
     97,  33,  97,  33,  97,  33,  97,  33,  81,  39,   0,   6,
     80,  22,  10,   0,   6,  40,  49, 145,  49,  85,  81,  49,
     81,  49,  33,  33,  97,  33,  82,  24,   0,   6,  64,  19,
      9, 240, 240, 248,  33,  81,  33, 129,  49,  69,  65,  49,
     65, 129, 116,   0,   6,  32,  21,  10,   0,   6,  68,  82,
     50,  33,  97,  33, 145, 145,  68,  33,  81,  50,  65,  69,
      0,   6,  80,  24,  10,   0,   6,  36,  20,  33,  81,  49,
     81,  55,  49,  81,  49,  81,  49,  81,  49,  81,  36,  20,
      0,   6,  48,  14,   4, 240,  83,  33,  49,  49,  49,  49,
     49,  49,  35, 240,  96,  17,   6, 240, 240,  20,  65,  81,
     81,  81,  81,  81,  33,  33,  35, 240, 240,  48,  24,  10,
      0,   6,  35,  51,  33,  65,  65,  49,  81,  33, 100,  97,
     49,  81,  65,  65,  66,  35,  51,   0,   6,  48,  18,   8,
    240, 240, 164,  81, 113, 113, 113, 113, 113,  65,  33,  65,
     23, 240, 240, 176,  36,  12,   0,   7,  67,  98,  34,  82,
     49,  17,  49,  17,  49,  17,  49,  17,  49,  18,  33,  17,
     49,  33,  17,  33,  49,  35,  33,  49,  49,  49,  35,  33,
     35,   0,   7,  80,  29,  10,   0,   6,  35,  51,  35,  49,
     49,  17,  49,  49,  18,  33,  49,  34,  17,  49,  49,  17,
     49,  66,  49,  66,  35,  65,   0,   6,  64,  23,  10,   0,
      6,  69,  66,  50,  33, 113,  17, 113,  17, 113,  17, 113,
     18,  82,  34,  50,  69,   0,   6,  80,  19,   8, 240, 240,
    166,  49,  65,  33,  65,  33,  65,  37,  49, 113, 113,  99,
    240, 240, 240,  28,  10,   0,   6,  84,  66,  65,  34,  97,
     17, 113,  17, 113,  17, 113,  33,  34,  17,  50,  18,  17,
     84, 145,  17, 130, 130, 240,  96,  24,  11,   0,   6, 118,
     97,  65,  81,  65,  85,  97,  49,  97,  49,  97,  50,  81,
     50,  33,  19,  51,   0,   7,  16,  22,   7, 240, 240,  99,
     17,  17,  50,  17,  65,  18, 100,  98,  17,  65,  18,  49,
     17,  19, 240, 240, 112,  20,  10,   0,   6,  41,  17,  49,
     49,  17,  49,  49,  81, 145, 145, 145, 145, 117,   0,   6,
     80,  24,  11,   0,   6, 116,  36,  33,  97,  49,  97,  49,
     97,  49,  97,  49,  97,  49,  97,  50,  65, 100,   0,   7,
     48,  23,  11,   0,   6, 116,  66,  49,  81,  66,  65,  81,
     49,  97,  49, 113,  17, 129,  17, 130, 161,   0,   7,  64,
     33,  15,   0,   9,  52,  35,  50,  49,  65,  65,  65,  66,
     49,  66,  33,  17,  33,  97,  33,  17,  33,  97,  17,  34,
     17, 114,  50, 130,  50, 129,   0,  10,  80,  23,  10,   0,
      6,  35,  51,  34,  49,  82,  17, 114, 145, 129,  17,  97,
     34,  65,  66,  35,  51,   0,   6,  48,  20,  10,   0,   6,
     35,  66,  34,  65,  65,  49,  97,  17, 115, 129, 145, 145,
    131,   0,   6,  96,  19,   8, 240, 240, 167,  17,  65,  98,
     97,  97,  97,  97,  65,  33,  65,  23, 240, 240, 176,   8,
     10,   0,  10,   9,   0,  12,  80,   9,  20,   0,  20,  15,
      4,   0,  25,  16,  11,   6, 209,  33,  33,  33,  17,  33,
      0,  10,  96,   9,   7, 242,  33,  17,  34,   0,  13,  48,};

//*****************************************************************************
//
// The font definition for the 18 point Cmsc font.
//
//*****************************************************************************
const tFont g_sFontCmsc18 =
{
    //
    // The format of the font.
    //
    FONT_FMT_PIXEL_RLE,

    //
    // The maximum width of the font.
    //
    18,

    //
    // The height of the font.
    //
    19,

    //
    // The baseline of the font.
    //
    14,

    //
    // The offset to each character in the font.
    //
    {
           0,    5,   20,   35,   70,  103,  149,  184,
         194,  215,  236,  253,  273,  283,  291,  297,
         318,  346,  363,  386,  408,  431,  455,  482,
         501,  527,  554,  561,  572,  590,  601,  618,
         637,  681,  709,  736,  763,  791,  819,  843,
         868,  897,  914,  934,  964,  986, 1034, 1070,
        1098, 1120, 1153, 1182, 1204, 1226, 1255, 1283,
        1328, 1355, 1379, 1402, 1422, 1438, 1458, 1466,
        1473, 1483, 1505, 1527, 1550, 1573, 1595, 1614,
        1635, 1659, 1673, 1690, 1714, 1732, 1768, 1797,
        1820, 1839, 1867, 1891, 1913, 1933, 1957, 1980,
        2013, 2036, 2056, 2075, 2083, 2092, 2103,
    },

    //
    // A pointer to the actual font data
    //
    g_pucCmsc18Data
};
