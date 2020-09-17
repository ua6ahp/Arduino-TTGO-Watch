#include <lvgl/lvgl.h>

/*******************************************************************************
 * Size: 16 px
 * Bpp: 3
 * Opts: --font ../font/new/Quostige/Quostige/Quostige-2.ttf -r 0x20-0x7F --size 16 --format lvgl --bpp 3 --lv-include lvgl/lvgl.h  -o quostige_16.c
 ******************************************************************************/

#ifndef QUOSTIGE_16
#define QUOSTIGE_16 1
#endif

#if QUOSTIGE_16

/*-----------------
 *    BITMAPS
 *----------------*/

/*Store the image of the glyphs*/
static LV_ATTRIBUTE_LARGE_CONST const uint8_t gylph_bitmap[] = {
    /* U+20 " " */

    /* U+21 "!" */
    0x14, 0xf, 0xfe, 0x1f, 0x18,

    /* U+22 "\"" */
    0x19, 0xd2, 0xff, 0x0,

    /* U+23 "#" */
    0x3, 0x9b, 0x0, 0xa0, 0x7a, 0xb0, 0x40, 0xf1,
    0x60, 0x2f, 0x0, 0x76, 0x9e, 0xee, 0x40, 0x3b,
    0xe, 0xc9, 0x1a, 0x1, 0x4a, 0x2, 0xb0, 0xb,
    0x63, 0xbb, 0x9c, 0xc2, 0xd1, 0xec, 0x3f, 0x30,
    0x29, 0x0, 0xb0, 0x3c, 0xc0, 0x5e, 0x6,

    /* U+24 "$" */
    0x3, 0x20, 0x3f, 0x40, 0x3d, 0x31, 0xd4, 0xb,
    0x68, 0xed, 0x0, 0x68, 0x9, 0xb1, 0xc, 0xe,
    0xa4, 0x4d, 0x1, 0x3, 0x2d, 0x86, 0x64, 0x6,
    0x46, 0xe8, 0xb, 0x3, 0x99, 0x2a, 0x40, 0x8b,
    0x23, 0xcc, 0x74, 0xe0, 0xd, 0xcb, 0x52, 0x0,

    /* U+25 "%" */
    0xb, 0x60, 0x15, 0x22, 0x69, 0x2, 0x2, 0x4,
    0x4b, 0x2a, 0x2, 0x6a, 0x47, 0x2, 0x5b, 0x3d,
    0x20, 0x72, 0xec, 0xe, 0x32, 0x16, 0xa0, 0x5f,
    0x84, 0xd8, 0xc5, 0x84, 0xe, 0x45, 0x0, 0xbe,
    0xb0,

    /* U+26 "&" */
    0x0, 0x6e, 0x80, 0x7d, 0xe6, 0xc2, 0x7, 0x24,
    0x21, 0x10, 0x39, 0x20, 0x1f, 0xf7, 0xa0, 0x7d,
    0xaf, 0x82, 0x1, 0x92, 0x30, 0x47, 0xc0, 0x47,
    0x81, 0x99, 0xd8, 0xe, 0x3, 0x24, 0xd8, 0x13,
    0x60, 0xa, 0x40, 0x1b, 0x7f, 0x4e, 0x40, 0x80,

    /* U+27 "'" */
    0x38, 0x2a, 0x0,

    /* U+28 "(" */
    0x2, 0x40, 0x30, 0x9, 0x8, 0x24, 0x5, 0x0,
    0x7c, 0x1, 0x20, 0x3c, 0x48, 0x2, 0xc0, 0x4c,
    0xa, 0xc0, 0xc, 0x50,

    /* U+29 ")" */
    0x3, 0x1c, 0x41, 0xdc, 0xa, 0xa0, 0xb, 0x0,
    0x28, 0xf, 0x98, 0x1e, 0x24, 0x2, 0xe0, 0x52,
    0xbf, 0x0,

    /* U+2A "*" */
    0x12, 0x82, 0xd2, 0x14, 0xa0,

    /* U+2B "+" */
    0x0, 0x58, 0x19, 0x81, 0x2b, 0x2d, 0x35, 0x65,
    0xa6, 0x7, 0xe4, 0x80, 0x0,

    /* U+2C "," */
    0x18, 0xa6, 0x40,

    /* U+2D "-" */
    0x56, 0xe6,

    /* U+2E "." */
    0x0, 0x98,

    /* U+2F "/" */
    0x3, 0xea, 0x7, 0xa7, 0x3, 0x8a, 0x40, 0x3a,
    0x40, 0x1c, 0x42, 0x3, 0xa4, 0x1, 0xc8, 0x10,
    0x3a, 0x40, 0x1c, 0x90, 0x81, 0xd2, 0x0, 0xe6,
    0x80, 0xf5, 0x80, 0x72, 0xa0, 0x78,

    /* U+30 "0" */
    0x0, 0xb6, 0x52, 0x4, 0xbe, 0xcb, 0xc8, 0x9,
    0x40, 0xbf, 0x4, 0x80, 0x62, 0x0, 0xf0, 0x39,
    0x20, 0x1f, 0x99, 0xe0, 0x71, 0x24, 0x80, 0x62,
    0xc0, 0x4a, 0x0, 0xfe, 0x0, 0xbe, 0xcf, 0xc4,
    0x0,

    /* U+31 "1" */
    0x5e, 0xae, 0x7, 0xff, 0x34,

    /* U+32 "2" */
    0x1, 0x7e, 0x60, 0x37, 0xed, 0xda, 0x50, 0x9,
    0x9d, 0x2, 0x20, 0x90, 0x14, 0xe0, 0x68, 0x50,
    0x13, 0x30, 0xa, 0x6a, 0x5, 0x5, 0x2, 0x4d,
    0x6d, 0x40,

    /* U+33 "3" */
    0x6, 0xec, 0x40, 0xf, 0x9b, 0x3a, 0x7, 0x90,
    0x13, 0x80, 0x37, 0x62, 0x80, 0x57, 0x67, 0xa0,
    0x7a, 0x20, 0x3e, 0x60, 0x90, 0x19, 0x80, 0xe4,
    0x4, 0xa0, 0xf9, 0xb3, 0xb0,

    /* U+34 "4" */
    0x3, 0x8e, 0x3, 0xdc, 0x81, 0xdb, 0x90, 0x36,
    0x84, 0xd, 0x62, 0x3, 0x5c, 0x80, 0xc9, 0x2e,
    0xc6, 0x1, 0x7d, 0xa6, 0x7, 0xff, 0x11, 0x80,

    /* U+35 "5" */
    0xb, 0xed, 0x40, 0x1a, 0xed, 0x40, 0x9, 0x0,
    0xfa, 0xec, 0x60, 0xd, 0xad, 0x9e, 0x2, 0xc0,
    0xa2, 0x3, 0xe6, 0x9, 0x1, 0x98, 0xe, 0x40,
    0x4a, 0xf, 0x9b, 0x3b, 0x0,

    /* U+36 "6" */
    0x2, 0x54, 0xe, 0x52, 0x81, 0x8c, 0xc0, 0x74,
    0x5b, 0x28, 0x2, 0x26, 0xcf, 0x42, 0xc0, 0x48,
    0x10, 0x3d, 0x99, 0xe0, 0x6c, 0xd1, 0x60, 0x18,
    0x22, 0xed, 0xa8,

    /* U+37 "7" */
    0x5f, 0xf6, 0x5f, 0xe3, 0x0, 0xd2, 0xa0, 0x32,
    0x60, 0x69, 0x0, 0x72, 0x40, 0x31, 0x60, 0x72,
    0xc0, 0x77, 0x20, 0x79, 0x81, 0x0,

    /* U+38 "8" */
    0x1, 0x36, 0x40, 0x29, 0xf6, 0x7a, 0x1, 0x30,
    0xd, 0x80, 0xae, 0xc8, 0x6, 0xfb, 0x40, 0x12,
    0x80, 0x24, 0x25, 0xc0, 0xdd, 0x1e, 0x6, 0xe5,
    0x28, 0x2, 0x50, 0xdf, 0xec, 0x0,

    /* U+39 "9" */
    0x1, 0x36, 0x40, 0x2d, 0xb7, 0xa1, 0x28, 0x3,
    0x4, 0xb8, 0x1b, 0x23, 0x80, 0xdc, 0xa0, 0xc0,
    0x8a, 0x17, 0xec, 0x80, 0x69, 0xb1, 0x40, 0x3a,
    0xc2, 0x6, 0xbd, 0x0,

    /* U+3A ":" */
    0x51, 0x40, 0x32, 0x8a, 0x0,

    /* U+3B ";" */
    0x14, 0x8a, 0x40, 0xfb, 0x92, 0x84,

    /* U+3C "<" */
    0x3, 0xa3, 0x2, 0x7b, 0x18, 0x3b, 0xe4, 0x16,
    0x90, 0x4, 0xac, 0x60, 0x65, 0x86, 0x60, 0x67,
    0xbd,

    /* U+3D "=" */
    0x36, 0xf0, 0x36, 0xf0, 0x5b, 0x6a, 0x0,

    /* U+3E ">" */
    0x54, 0x81, 0x94, 0xf0, 0xc, 0x77, 0xcc, 0xc,
    0xf5, 0xa0, 0x25, 0x95, 0x6, 0xfe, 0x81, 0x48,
    0xa4, 0x0,

    /* U+3F "?" */
    0x6, 0xec, 0x60, 0x5e, 0x6c, 0xec, 0x28, 0x40,
    0x4a, 0x12, 0x1, 0xff, 0xc6, 0x36, 0x1, 0xad,
    0x44, 0x4, 0x44, 0x20, 0x63, 0xc0, 0xfb, 0x1,
    0x80,

    /* U+40 "@" */
    0x2, 0x9b, 0x50, 0xc, 0x76, 0xef, 0x40, 0xbf,
    0x3b, 0xa3, 0xd0, 0x14, 0x7c, 0xde, 0x34, 0x17,
    0x48, 0x43, 0x41, 0x81, 0xb8, 0x1c, 0xc1, 0xea,
    0x80, 0x64, 0x9, 0x21, 0xf7, 0x77, 0xa0, 0xf,
    0xce, 0xe9, 0xba, 0x0, 0x76, 0xf1, 0x0,

    /* U+41 "A" */
    0x3, 0x28, 0x7, 0xe8, 0x40, 0xf9, 0x27, 0x80,
    0x7b, 0xd4, 0x40, 0xe2, 0x8, 0xec, 0xd, 0x6,
    0xcf, 0x40, 0xce, 0xec, 0x8d, 0x0, 0x90, 0x4,
    0x6f, 0x0, 0x90, 0xe, 0x24, 0xa8, 0x1e, 0xb4,

    /* U+42 "B" */
    0x7f, 0xf6, 0x60, 0x2f, 0xfb, 0x62, 0x3, 0xee,
    0x40, 0xfb, 0xa0, 0x1b, 0x6e, 0x8, 0xd, 0xb7,
    0x8, 0xf, 0xa7, 0x3, 0xf1, 0x3, 0xe9, 0x85,
    0xdb, 0xba,

    /* U+43 "C" */
    0x2, 0x9b, 0xf4, 0x20, 0x47, 0x7d, 0xfb, 0x72,
    0x3, 0xf3, 0x2, 0x5b, 0x82, 0xc8, 0x1e, 0xad,
    0x60, 0x3e, 0x68, 0xf, 0xf9, 0x60, 0x3e, 0x68,
    0xb2, 0x7, 0xab, 0x1f, 0x98, 0x12, 0xdc, 0x1,
    0xdf, 0x67, 0xf1, 0x0,

    /* U+44 "D" */
    0x7f, 0x6a, 0x90, 0x2b, 0xb5, 0xf9, 0x1, 0xe5,
    0xa0, 0x1f, 0xac, 0x3, 0xe4, 0x40, 0xff, 0xe2,
    0x22, 0x7, 0xd6, 0x1, 0xcb, 0x40, 0x17, 0x6d,
    0xd0,

    /* U+45 "E" */
    0x7f, 0xfd, 0x5, 0xff, 0xd0, 0xf, 0xfe, 0x39,
    0xdb, 0x30, 0x23, 0xb6, 0x60, 0x7f, 0xf4, 0xaf,
    0xfe, 0x80,

    /* U+46 "F" */
    0x7f, 0xfd, 0x5, 0xff, 0xd0, 0xf, 0xfe, 0x39,
    0xdb, 0x30, 0x23, 0xb6, 0x60, 0x7f, 0xf6, 0x80,

    /* U+47 "G" */
    0x2, 0x9b, 0xea, 0x40, 0x8e, 0xfb, 0xef, 0x18,
    0xf, 0xcc, 0x9, 0x5c, 0x49, 0x90, 0x3d, 0x42,
    0xc0, 0x4b, 0x6c, 0x80, 0xe5, 0xb6, 0x6b, 0x1,
    0xf4, 0x45, 0x90, 0x38, 0xa4, 0x1f, 0x98, 0x12,
    0xfc, 0x0, 0xef, 0xb3, 0xec, 0x20,

    /* U+48 "H" */
    0x68, 0xf, 0x50, 0x3f, 0xfa, 0x7, 0x6f, 0x0,
    0x3b, 0x78, 0xf, 0xfe, 0xc8,

    /* U+49 "I" */
    0x10, 0x90, 0x1f, 0xfc, 0x22, 0x40,

    /* U+4A "J" */
    0x3, 0xf5, 0x3, 0xff, 0xb0, 0x48, 0xf, 0x92,
    0x1, 0xc4, 0x2a, 0x7, 0x5e, 0x54, 0x2, 0x85,
    0x9, 0xf7, 0xde, 0x80,

    /* U+4B "K" */
    0x68, 0xf, 0x40, 0x3e, 0x5c, 0xf, 0x18, 0xc0,
    0xc6, 0x7e, 0x0, 0x76, 0xbe, 0x20, 0xe, 0xd5,
    0x3, 0xe3, 0x60, 0x1f, 0x32, 0x80, 0xfa, 0xc0,
    0x3f, 0x48,

    /* U+4C "L" */
    0x68, 0xf, 0xff, 0xf8, 0x1d, 0x76, 0xf4,

    /* U+4D "M" */
    0x7e, 0xa0, 0x23, 0x35, 0x16, 0x76, 0xf, 0xd8,
    0xc0, 0x1b, 0x97, 0xc8, 0xf, 0x4b, 0x40, 0x7e,
    0x21, 0x1, 0xfd, 0x88, 0x1f, 0xc4, 0xf, 0xfe,
    0xcb,

    /* U+4E "N" */
    0x7e, 0x1, 0xd4, 0x5d, 0x84, 0xf, 0x2d, 0xc8,
    0x1f, 0x6e, 0x40, 0xfb, 0xf1, 0x3, 0xc6, 0xd0,
    0x1f, 0x34, 0x7, 0xea, 0x7, 0xe4, 0x7, 0xe2,
    0x0,

    /* U+4F "O" */
    0x2, 0x9b, 0xe8, 0x40, 0x8e, 0xfb, 0xec, 0xe4,
    0x7, 0xe6, 0x4, 0xb7, 0x5, 0x90, 0x3d, 0x5a,
    0xc0, 0x7c, 0xb0, 0x1f, 0xf2, 0xc0, 0x7c, 0xb1,
    0x64, 0xf, 0x56, 0x3f, 0x30, 0x25, 0xa0, 0x3,
    0xbe, 0xd7, 0xe4, 0x0,

    /* U+50 "P" */
    0x7f, 0xfa, 0x0, 0xbf, 0xf0, 0x60, 0x7d, 0x70,
    0x1f, 0x5c, 0xe, 0xdc, 0x18, 0x3b, 0x74, 0x3,
    0xff, 0xb2,

    /* U+51 "Q" */
    0x2, 0x9b, 0x50, 0x81, 0xc7, 0x6f, 0x72, 0x6,
    0xfc, 0x80, 0x96, 0xe0, 0x45, 0x10, 0x3d, 0x58,
    0x5, 0xc0, 0xf9, 0x70, 0x3f, 0xf8, 0x6b, 0x81,
    0xf2, 0xe0, 0xa, 0x20, 0x7a, 0xb0, 0x2f, 0xc4,
    0x8, 0xde, 0x6, 0x3e, 0x67, 0xfa, 0x10, 0x38,
    0xdc, 0xf0, 0x1f, 0xfc, 0x3, 0xf9, 0x1, 0xfe,
    0x3b, 0xec, 0x60,

    /* U+52 "R" */
    0x7f, 0xfa, 0x0, 0xbf, 0xf0, 0x60, 0x7d, 0x70,
    0x1f, 0x5c, 0xe, 0xd7, 0xf3, 0x7, 0x6b, 0xa0,
    0x3f, 0x5a, 0x3, 0xf5, 0x40, 0x7c, 0xb0, 0x1f,
    0x10,

    /* U+53 "S" */
    0x1, 0x36, 0xa0, 0x16, 0xfb, 0x5f, 0x2, 0xd8,
    0x9, 0x82, 0x4c, 0xe, 0xc4, 0x5d, 0x10, 0x1c,
    0xf6, 0x19, 0x48, 0x19, 0x39, 0x78, 0x30, 0xe,
    0x64, 0x92, 0x1, 0x26, 0x47, 0xed, 0xb7, 0x0,

    /* U+54 "T" */
    0x5f, 0xfd, 0x17, 0xf1, 0xfe, 0x80, 0x7f, 0xfd,
    0xd8, 0x18,

    /* U+55 "U" */
    0x68, 0xf, 0x50, 0x3f, 0xfc, 0x44, 0xe, 0x21,
    0x50, 0x3a, 0xf2, 0xa0, 0x14, 0x28, 0x4f, 0xbe,
    0xf4, 0x0,

    /* U+56 "V" */
    0x6c, 0x7, 0xab, 0xa0, 0x73, 0xc1, 0x90, 0x35,
    0x63, 0xc0, 0x22, 0xc0, 0x26, 0x5, 0x78, 0x15,
    0x60, 0x12, 0x1, 0x3a, 0x1d, 0x3, 0x92, 0x56,
    0x7, 0x58, 0x80, 0xf1, 0x74, 0x8,

    /* U+57 "W" */
    0x6c, 0x7, 0xfd, 0xb, 0xa0, 0x7f, 0xc8, 0x86,
    0x40, 0xd0, 0xc, 0xe8, 0xf, 0x40, 0x9b, 0x10,
    0x2a, 0xc0, 0x24, 0x2, 0xb4, 0x80, 0x16, 0x6,
    0x48, 0xa, 0x4a, 0x2, 0xc0, 0x35, 0xe2, 0xd0,
    0x48, 0x11, 0x3, 0x10, 0x51, 0x17, 0xba, 0x7,
    0xbe, 0xa0, 0xb, 0xac, 0xf, 0x22, 0xc0, 0xaa,
    0x3, 0x0,

    /* U+58 "X" */
    0x68, 0xf, 0x52, 0x40, 0x72, 0x2a, 0x81, 0xdf,
    0xb, 0x44, 0x18, 0x50, 0x7b, 0x3e, 0xf0, 0x1,
    0xb5, 0xf5, 0x40, 0x3f, 0x20, 0x74, 0x5, 0x90,
    0x35, 0x4c, 0x81, 0xcb, 0x1c, 0x7, 0x10,

    /* U+59 "Y" */
    0x68, 0xf, 0x52, 0x40, 0x72, 0x2a, 0x81, 0xd2,
    0x89, 0x48, 0x8, 0x88, 0x5f, 0xb6, 0x78, 0x4,
    0xb6, 0x98, 0x1e, 0xc0, 0x7f, 0xf3, 0x98, 0x18,

    /* U+5A "Z" */
    0x5f, 0xfd, 0x17, 0xfd, 0x8c, 0x3, 0xdf, 0x80,
    0xf5, 0x84, 0xe, 0x99, 0x1, 0xcc, 0xb0, 0x39,
    0x5a, 0x3, 0x8c, 0xc0, 0x7b, 0xf0, 0x1e, 0x67,
    0xed, 0xcc,

    /* U+5B "[" */
    0x7b, 0x20, 0x9a, 0x1, 0xff, 0xdd, 0x9a, 0x0,

    /* U+5C "\\" */
    0x24, 0x6, 0x74, 0xc, 0x90, 0xe, 0x64, 0xd,
    0x90, 0x19, 0x60, 0x31, 0x60, 0x72, 0x40, 0x35,
    0xe0, 0x62, 0xc0, 0xe4, 0x80, 0x6d, 0x80, 0x64,
    0x80, 0x73, 0x0,

    /* U+5D "]" */
    0x5b, 0x2a, 0xd8, 0xc0, 0xff, 0xee, 0x2d, 0x8c,

    /* U+5E "^" */
    0x1, 0x90, 0xb, 0x20, 0xa2, 0xbc,

    /* U+5F "_" */
    0x5b, 0x78, 0x80,

    /* U+60 "`" */
    0x50, 0x22, 0x80,

    /* U+61 "a" */
    0x1, 0x76, 0x54, 0xc6, 0xfb, 0x3d, 0x9, 0x40,
    0x13, 0x7, 0x81, 0xb0, 0x3c, 0xf, 0x24, 0x60,
    0x16, 0x1, 0xb3, 0xed, 0x0,

    /* U+62 "b" */
    0x68, 0xf, 0xfe, 0x59, 0x9b, 0x28, 0x1b, 0x6b,
    0xe0, 0x5, 0x0, 0x4a, 0x4, 0xd, 0x88, 0xe0,
    0x6c, 0x43, 0x40, 0x12, 0x85, 0xdf, 0xd8, 0x0,

    /* U+63 "c" */
    0x1, 0x36, 0x40, 0x2d, 0xbc, 0x12, 0x80, 0x28,
    0xf, 0x3, 0x20, 0x78, 0x19, 0x4, 0xa0, 0xe,
    0x0, 0xdf, 0x67, 0xc0,

    /* U+64 "d" */
    0x3, 0xc9, 0x81, 0xff, 0xc6, 0x9b, 0x29, 0x1,
    0xbe, 0xce, 0x1, 0x23, 0x0, 0x88, 0x3c, 0xf,
    0x1e, 0x6, 0xc1, 0x28, 0x2, 0x60, 0x37, 0xfa,
    0x80,

    /* U+65 "e" */
    0x1, 0x36, 0x40, 0x2b, 0xb5, 0xe8, 0x45, 0x0,
    0x60, 0x90, 0xdb, 0x36, 0x23, 0x6d, 0xd2, 0xc0,
    0xf, 0x1, 0xb6, 0x9c, 0x0,

    /* U+66 "f" */
    0xb, 0x65, 0x1, 0x36, 0x9a, 0xa0, 0x1b, 0x1f,
    0xb2, 0x0, 0xfb, 0x20, 0x1f, 0xfc, 0xd2, 0x40,
    0x60,

    /* U+67 "g" */
    0x1, 0x36, 0x40, 0x2d, 0xbc, 0x12, 0x80, 0x25,
    0x1e, 0x6, 0xc5, 0x50, 0x36, 0x25, 0x68, 0x84,
    0x50, 0x72, 0x2b, 0xa0, 0x46, 0xce, 0x40, 0x50,
    0x6, 0x50, 0x26, 0x3, 0x70, 0x17, 0xec, 0xec,
    0x0,

    /* U+68 "h" */
    0x68, 0xf, 0xfe, 0x41, 0xbb, 0x10, 0x14, 0xd9,
    0x8, 0x24, 0x2, 0x20, 0x39, 0xf0, 0x3f, 0xf9,
    0x20,

    /* U+69 "i" */
    0x14, 0x51, 0x48, 0x1f, 0xc4, 0x80,

    /* U+6A "j" */
    0x1, 0x40, 0x53, 0xb9, 0xc4, 0xf, 0xfe, 0x4a,
    0xd0,

    /* U+6B "k" */
    0x68, 0xf, 0xfe, 0x65, 0x3, 0x98, 0x1c, 0xed,
    0x0, 0xbb, 0xc0, 0x2b, 0xa4, 0x10, 0x3b, 0xf0,
    0x1c, 0x64, 0x0,

    /* U+6C "l" */
    0x10, 0x90, 0x1f, 0xfc, 0x22, 0x40,

    /* U+6D "m" */
    0x73, 0x68, 0x89, 0xb1, 0x81, 0x3f, 0xb3, 0xdd,
    0xae, 0xc0, 0x42, 0x2, 0xb4, 0x2, 0x50, 0x4,
    0x9, 0x20, 0x1f, 0xfd, 0xf6, 0x0,

    /* U+6E "n" */
    0x6d, 0x76, 0x10, 0x12, 0x36, 0x70, 0x10, 0x80,
    0xac, 0x10, 0x25, 0xc0, 0xff, 0xe4, 0x80,

    /* U+6F "o" */
    0x1, 0x76, 0x40, 0x2d, 0xf6, 0xc1, 0x28, 0x2,
    0x51, 0xe0, 0x6e, 0x4b, 0x81, 0xb9, 0x4a, 0x0,
    0xd2, 0xd, 0xf7, 0xd8, 0x0,

    /* U+70 "p" */
    0x6d, 0x7e, 0xa0, 0x53, 0xf6, 0xf8, 0x3, 0x40,
    0x12, 0x86, 0x3, 0x72, 0x7, 0xb9, 0x5, 0x0,
    0x69, 0x0, 0x6c, 0xfb, 0x0, 0x19, 0xbd, 0x3,
    0xff, 0x8c,

    /* U+71 "q" */
    0x1, 0x76, 0x54, 0xc6, 0xfb, 0x3d, 0x9, 0x40,
    0x13, 0x7, 0x81, 0xb0, 0x38, 0xf, 0x26, 0xc0,
    0x11, 0x1, 0xb3, 0xec, 0x3, 0x5f, 0xa1, 0x3,
    0xff, 0x8a,

    /* U+72 "r" */
    0x77, 0x65, 0x0, 0xf6, 0xa0, 0xa0, 0x1f, 0x4,
    0x9, 0x81, 0xff, 0xc6,

    /* U+73 "s" */
    0xf, 0x69, 0x85, 0xf6, 0xba, 0x4, 0xa, 0x85,
    0xae, 0xa9, 0x6b, 0xaf, 0x62, 0x1, 0x70, 0xb6,
    0xdd, 0x80,

    /* U+74 "t" */
    0x68, 0xf, 0xfe, 0x29, 0xda, 0x0, 0x76, 0x80,
    0xff, 0xe3, 0x33, 0xc0, 0x30, 0xb6, 0xbb,

    /* U+75 "u" */
    0x68, 0x8, 0xc0, 0x3f, 0xf9, 0x27, 0x1, 0x20,
    0x90, 0x83, 0x40, 0x7f, 0xa0,

    /* U+76 "v" */
    0x6c, 0x4, 0x9b, 0x50, 0x2e, 0x83, 0x20, 0x82,
    0x24, 0xb, 0xc0, 0x16, 0x52, 0x1, 0x4f, 0x40,
    0xc8, 0x30, 0x0,

    /* U+77 "w" */
    0x6c, 0x7, 0xe8, 0x5d, 0x2, 0x8c, 0x9, 0x10,
    0xd0, 0x5, 0x40, 0x3a, 0x2, 0x71, 0x21, 0x20,
    0xac, 0x1, 0x65, 0x25, 0xe9, 0x0, 0xd3, 0xd0,
    0x44, 0xa0, 0x64, 0x18, 0xe, 0xc8, 0x0,

    /* U+78 "x" */
    0x68, 0x8, 0xc3, 0x80, 0x97, 0x41, 0x3, 0x58,
    0xd7, 0xe8, 0x2, 0x6f, 0xa0, 0x48, 0x41, 0xac,
    0xe0, 0x25, 0xc0,

    /* U+79 "y" */
    0x68, 0x8, 0xc0, 0x40, 0xff, 0xe3, 0x9e, 0x4,
    0xba, 0x2c, 0x5, 0x62, 0x8c, 0xf0, 0x13, 0xc2,
    0x84, 0x80, 0x18, 0x2e, 0x1, 0x32, 0x53, 0x65,
    0xe0,

    /* U+7A "z" */
    0x5b, 0x6e, 0xd6, 0xd4, 0x4c, 0x8, 0xca, 0x4,
    0x7e, 0x3, 0x7e, 0x3, 0x6e, 0x40, 0x99, 0xfb,
    0x4c,

    /* U+7B "{" */
    0x0, 0xe8, 0xb, 0x40, 0x18, 0x1e, 0x20, 0x4b,
    0x5, 0x10, 0x51, 0x0, 0x5c, 0xf, 0xf1, 0x40,
    0x4a, 0x80,

    /* U+7C "|" */
    0x68, 0xf, 0xfe, 0x60,

    /* U+7D "}" */
    0x54, 0x2, 0x28, 0x6, 0x20, 0x18, 0x1b, 0x0,
    0x2c, 0x9, 0xd0, 0xe, 0x82, 0x80, 0xff, 0x3e,
    0x14, 0x60,

    /* U+7E "~" */
    0x16, 0x89, 0x24, 0x96, 0x74
};


/*---------------------
 *  GLYPH DESCRIPTION
 *--------------------*/

static const lv_font_fmt_txt_glyph_dsc_t glyph_dsc[] = {
    {.bitmap_index = 0, .adv_w = 0, .box_w = 0, .box_h = 0, .ofs_x = 0, .ofs_y = 0} /* id = 0 reserved */,
    {.bitmap_index = 0, .adv_w = 49, .box_w = 0, .box_h = 0, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 0, .adv_w = 42, .box_w = 2, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 5, .adv_w = 69, .box_w = 4, .box_h = 2, .ofs_x = 0, .ofs_y = 8},
    {.bitmap_index = 9, .adv_w = 182, .box_w = 11, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 48, .adv_w = 141, .box_w = 9, .box_h = 13, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 88, .adv_w = 145, .box_w = 9, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 121, .adv_w = 169, .box_w = 11, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 161, .adv_w = 44, .box_w = 3, .box_h = 2, .ofs_x = 0, .ofs_y = 8},
    {.bitmap_index = 164, .adv_w = 71, .box_w = 4, .box_h = 13, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 184, .adv_w = 71, .box_w = 4, .box_h = 13, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 202, .adv_w = 66, .box_w = 4, .box_h = 3, .ofs_x = 0, .ofs_y = 7},
    {.bitmap_index = 207, .adv_w = 100, .box_w = 6, .box_h = 6, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 220, .adv_w = 44, .box_w = 3, .box_h = 2, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 223, .adv_w = 99, .box_w = 6, .box_h = 1, .ofs_x = 0, .ofs_y = 4},
    {.bitmap_index = 225, .adv_w = 35, .box_w = 2, .box_h = 2, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 227, .adv_w = 134, .box_w = 8, .box_h = 13, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 257, .adv_w = 141, .box_w = 9, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 290, .adv_w = 52, .box_w = 3, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 295, .adv_w = 117, .box_w = 7, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 321, .adv_w = 121, .box_w = 8, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 350, .adv_w = 121, .box_w = 8, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 374, .adv_w = 123, .box_w = 8, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 403, .adv_w = 127, .box_w = 8, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 430, .adv_w = 120, .box_w = 7, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 452, .adv_w = 128, .box_w = 8, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 482, .adv_w = 127, .box_w = 8, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 510, .adv_w = 36, .box_w = 2, .box_h = 6, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 515, .adv_w = 46, .box_w = 3, .box_h = 6, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 521, .adv_w = 118, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 538, .adv_w = 106, .box_w = 7, .box_h = 3, .ofs_x = 0, .ofs_y = 3},
    {.bitmap_index = 545, .adv_w = 118, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 563, .adv_w = 121, .box_w = 8, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 588, .adv_w = 170, .box_w = 11, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 627, .adv_w = 163, .box_w = 10, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 659, .adv_w = 148, .box_w = 9, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 685, .adv_w = 178, .box_w = 11, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 721, .adv_w = 148, .box_w = 9, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 746, .adv_w = 148, .box_w = 9, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 764, .adv_w = 148, .box_w = 9, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 780, .adv_w = 179, .box_w = 11, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 818, .adv_w = 148, .box_w = 9, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 831, .adv_w = 41, .box_w = 2, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 837, .adv_w = 148, .box_w = 9, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 857, .adv_w = 148, .box_w = 9, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 883, .adv_w = 148, .box_w = 9, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 890, .adv_w = 181, .box_w = 11, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 915, .adv_w = 148, .box_w = 9, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 940, .adv_w = 180, .box_w = 11, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 976, .adv_w = 148, .box_w = 9, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 994, .adv_w = 181, .box_w = 13, .box_h = 13, .ofs_x = 0, .ofs_y = -3},
    {.bitmap_index = 1045, .adv_w = 148, .box_w = 9, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1070, .adv_w = 141, .box_w = 9, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1102, .adv_w = 148, .box_w = 9, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1112, .adv_w = 148, .box_w = 9, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1130, .adv_w = 151, .box_w = 9, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1160, .adv_w = 238, .box_w = 15, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1210, .adv_w = 148, .box_w = 9, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1241, .adv_w = 148, .box_w = 9, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1265, .adv_w = 148, .box_w = 9, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1291, .adv_w = 70, .box_w = 4, .box_h = 13, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 1299, .adv_w = 91, .box_w = 6, .box_h = 14, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 1326, .adv_w = 70, .box_w = 4, .box_h = 13, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 1334, .adv_w = 87, .box_w = 5, .box_h = 3, .ofs_x = 0, .ofs_y = 7},
    {.bitmap_index = 1340, .adv_w = 125, .box_w = 8, .box_h = 1, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1343, .adv_w = 52, .box_w = 3, .box_h = 2, .ofs_x = 0, .ofs_y = 8},
    {.bitmap_index = 1346, .adv_w = 128, .box_w = 8, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1367, .adv_w = 128, .box_w = 8, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1391, .adv_w = 123, .box_w = 8, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1411, .adv_w = 128, .box_w = 8, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1436, .adv_w = 127, .box_w = 8, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1457, .adv_w = 96, .box_w = 6, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1474, .adv_w = 128, .box_w = 8, .box_h = 11, .ofs_x = 0, .ofs_y = -4},
    {.bitmap_index = 1507, .adv_w = 114, .box_w = 7, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1524, .adv_w = 41, .box_w = 2, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1530, .adv_w = 56, .box_w = 3, .box_h = 12, .ofs_x = 0, .ofs_y = -3},
    {.bitmap_index = 1539, .adv_w = 114, .box_w = 7, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1558, .adv_w = 41, .box_w = 2, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1564, .adv_w = 201, .box_w = 13, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1586, .adv_w = 114, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1601, .adv_w = 128, .box_w = 8, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1622, .adv_w = 128, .box_w = 8, .box_h = 10, .ofs_x = 0, .ofs_y = -3},
    {.bitmap_index = 1648, .adv_w = 128, .box_w = 8, .box_h = 10, .ofs_x = 0, .ofs_y = -3},
    {.bitmap_index = 1674, .adv_w = 100, .box_w = 6, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1686, .adv_w = 113, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1704, .adv_w = 100, .box_w = 6, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1719, .adv_w = 114, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1732, .adv_w = 114, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1751, .adv_w = 190, .box_w = 12, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1782, .adv_w = 114, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1801, .adv_w = 114, .box_w = 7, .box_h = 11, .ofs_x = 0, .ofs_y = -4},
    {.bitmap_index = 1826, .adv_w = 114, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1843, .adv_w = 71, .box_w = 4, .box_h = 13, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 1861, .adv_w = 30, .box_w = 2, .box_h = 13, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 1865, .adv_w = 71, .box_w = 4, .box_h = 13, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 1883, .adv_w = 96, .box_w = 6, .box_h = 2, .ofs_x = 0, .ofs_y = 3}
};

/*---------------------
 *  CHARACTER MAPPING
 *--------------------*/



/*Collect the unicode lists and glyph_id offsets*/
static const lv_font_fmt_txt_cmap_t cmaps[] =
{
    {
        .range_start = 32, .range_length = 95, .glyph_id_start = 1,
        .unicode_list = NULL, .glyph_id_ofs_list = NULL, .list_length = 0, .type = LV_FONT_FMT_TXT_CMAP_FORMAT0_TINY
    }
};

/*-----------------
 *    KERNING
 *----------------*/


/*Map glyph_ids to kern left classes*/
static const uint8_t kern_left_class_mapping[] =
{
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 1, 2, 3, 4, 5, 6,
    7, 0, 0, 8, 0, 9, 0, 0,
    7, 10, 7, 11, 7, 12, 13, 14,
    14, 5, 15, 5, 0, 0, 0, 0,
    0, 0, 16, 17, 18, 0, 18, 19,
    18, 20, 0, 0, 21, 0, 20, 20,
    18, 17, 16, 0, 22, 23, 24, 25,
    25, 26, 24, 27, 0, 0, 0, 0
};

/*Map glyph_ids to kern right classes*/
static const uint8_t kern_right_class_mapping[] =
{
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 1, 0, 2, 0, 0, 0,
    2, 0, 0, 3, 0, 0, 0, 0,
    2, 0, 2, 0, 0, 4, 5, 6,
    6, 0, 7, 0, 0, 0, 0, 0,
    0, 0, 8, 0, 9, 8, 9, 10,
    9, 0, 0, 11, 0, 0, 0, 0,
    9, 12, 8, 13, 14, 15, 16, 17,
    17, 0, 16, 0, 0, 0, 0, 0
};

/*Kern values between classes*/
static const int8_t kern_class_values[] =
{
    0, -17, -17, -21, -13, -28, 0, -13,
    -13, 0, -17, 0, 0, -9, -9, -13,
    -28, 0, 0, 0, -13, 0, 0, 0,
    0, 0, 0, -4, 0, 0, -4, 0,
    0, 0, -17, 0, 0, -17, 0, -17,
    -9, 0, 0, 0, 0, 0, 0, -4,
    0, 0, 0, -17, 0, 0, -17, 0,
    -17, 0, 0, 0, 0, -4, 0, 0,
    -4, 0, 0, 0, 0, -17, -17, 0,
    0, 0, 0, -9, -17, 0, -17, 0,
    0, -9, 0, 0, -17, -28, -17, -17,
    0, 0, 0, 0, -17, -17, -9, -17,
    -17, -17, -17, 0, -17, -17, -17, 0,
    0, -17, 0, -17, -9, 0, 0, 0,
    -4, 0, 0, 13, 0, 0, 0, -17,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, -17, -17, -21, -17, -28, -21, -17,
    -17, 0, -17, 0, 0, -9, -9, -17,
    -17, -28, 0, -17, -9, 0, -9, 0,
    -17, -17, 0, -4, 0, 0, -9, 0,
    0, 0, 0, -4, -9, -9, 0, 0,
    -4, -9, -9, 0, 0, 0, 0, -4,
    0, 0, 0, -21, -17, -17, 0, 0,
    0, 0, -17, -17, -9, -17, -4, 0,
    -17, 0, -17, -17, -13, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, -4, 0, 0, 0, -28, -17, -21,
    0, 0, 0, 0, -21, -21, 0, -17,
    -17, 0, -17, 0, -13, -17, -28, -13,
    -21, 0, 0, 0, 0, -21, -21, 0,
    -9, -9, -9, -21, 0, -9, -9, 0,
    0, 0, -17, 0, 0, -9, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, -17, 0, -17, -17, 0,
    0, 0, -9, 0, 0, 0, 0, 0,
    -9, 0, 0, 0, -17, 0, -21, 0,
    0, 0, 0, -9, 0, 0, 0, 0,
    0, -13, -21, 0, -17, -9, 0, 0,
    0, -17, -17, 0, -9, -9, 0, -17,
    0, 0, 0, 0, 0, 0, -17, 0,
    -17, 0, 0, 0, 0, -9, 0, 0,
    0, 0, 0, -9, 0, -13, -17, -28,
    -9, -28, -21, -13, -13, 0, -9, 0,
    0, -9, -9, -9, -9, -9, 0, 0,
    -17, 0, -17, -21, -4, -4, 0, -9,
    0, 0, 0, 0, 0, -9, -9, -9,
    -4, -17, -4, -28, -17, -4, -4, 0,
    -9, 0, 0, 0, 0, -4, -13, 0,
    0, 0, -17, 0, -13, -9, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    -28, 0, -9, -17, 0, -17, -9, -13,
    -13, 0, 0, 0, 0, -9, 0, 0,
    0, 0, 0, -4, -17, 0, -17, -9,
    -9, -9, 0, 0, 0, 0, -4, 0,
    0, 0, 0, 0, -9, -17, 0, -17,
    -9, -9, -9, 0, 0, 0, 0, -4,
    0, 0, 0
};


/*Collect the kern class' data in one place*/
static const lv_font_fmt_txt_kern_classes_t kern_classes =
{
    .class_pair_values   = kern_class_values,
    .left_class_mapping  = kern_left_class_mapping,
    .right_class_mapping = kern_right_class_mapping,
    .left_class_cnt      = 27,
    .right_class_cnt     = 17,
};

/*--------------------
 *  ALL CUSTOM DATA
 *--------------------*/

/*Store all the custom data of the font*/
static lv_font_fmt_txt_dsc_t font_dsc = {
    .glyph_bitmap = gylph_bitmap,
    .glyph_dsc = glyph_dsc,
    .cmaps = cmaps,
    .kern_dsc = &kern_classes,
    .kern_scale = 16,
    .cmap_num = 1,
    .bpp = 3,
    .kern_classes = 1,
    .bitmap_format = 1
};


/*-----------------
 *  PUBLIC FONT
 *----------------*/

/*Initialize a public general font descriptor*/
lv_font_t quostige_16 = {
    .get_glyph_dsc = lv_font_get_glyph_dsc_fmt_txt,    /*Function pointer to get glyph's data*/
    .get_glyph_bitmap = lv_font_get_bitmap_fmt_txt,    /*Function pointer to get glyph's bitmap*/
    .line_height = 17,          /*The maximum line height required by the font*/
    .base_line = 4,             /*Baseline measured from the bottom of the line*/
#if !(LVGL_VERSION_MAJOR == 6 && LVGL_VERSION_MINOR == 0)
    .subpx = LV_FONT_SUBPX_NONE,
#endif
    .dsc = &font_dsc           /*The custom font data. Will be accessed by `get_glyph_bitmap/dsc` */
};

#endif /*#if QUOSTIGE_16*/
