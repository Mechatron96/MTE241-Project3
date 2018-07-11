#include "nbaGraphics.h"
#include <stdio.h>
#include <stdint.h>
#include <string.h>
#include <math.h>
#include "GLCD.h"
#include "uart.h"
uint8_t pic_playerTopDown90small_pixel_map[] = {
0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x7c, 0xf7, 0xca, 0xec, 0x44, 0xb3, 0x66, 0xec, 0x34, 0xee, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
  0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x77, 0xe6, 0xe0, 0xb1, 0xc0, 0xfb, 0xa0, 0xba, 0xc0, 0xfb, 0x60, 0xc2, 0xe7, 0xcb, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
  0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x00, 0xeb, 0x20, 0xdb, 0x20, 0xdb, 0xc0, 0xc2, 0x20, 0xdb, 0x20, 0xdb, 0x40, 0xfb, 0x14, 0xe6, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
  0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xb3, 0xd5, 0x40, 0xba, 0x80, 0xb2, 0xe0, 0x81, 0xe0, 0x89, 0xc0, 0x81, 0xa0, 0xb2, 0x40, 0xaa, 0xa7, 0xbb, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
  0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf9, 0xe6, 0x29, 0xac, 0xc0, 0xd2, 0x40, 0xeb, 0x60, 0xa2, 0x80, 0xb2, 0x60, 0xaa, 0x40, 0xeb, 0x20, 0xe3, 0x02, 0xbb, 0x1b, 0xdf, 0xff, 0xff, 0xff, 0xff, 
  0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf2, 0xcd, 0x50, 0xbd, 0x60, 0xd2, 0x00, 0x92, 0xe0, 0xca, 0x20, 0x9a, 0xe0, 0xd2, 0xe0, 0x89, 0xc0, 0xd2, 0xa7, 0xb3, 0x12, 0xce, 0xb8, 0xde, 0xff, 0xff, 
  0xff, 0xff, 0xff, 0xff, 0x19, 0xe7, 0xd1, 0xcd, 0x74, 0xd6, 0xe4, 0x9a, 0xa0, 0x91, 0xa0, 0xc2, 0xc0, 0x89, 0xa0, 0xba, 0x00, 0x9a, 0x80, 0x81, 0xf3, 0xcd, 0xf2, 0xcd, 0x13, 0xd6, 0xff, 0xff, 
  0xff, 0xff, 0xff, 0xff, 0xd1, 0xcd, 0xf2, 0xcd, 0x12, 0xce, 0x74, 0xde, 0xc1, 0x79, 0xc0, 0xa1, 0x20, 0x71, 0xc0, 0xa1, 0xc0, 0x91, 0x4d, 0xa4, 0x53, 0xd6, 0xf2, 0xcd, 0xb1, 0xcd, 0xbe, 0xff, 
  0xff, 0xff, 0x19, 0xef, 0xd1, 0xcd, 0xf2, 0xcd, 0x12, 0xde, 0x15, 0x75, 0x97, 0x34, 0x13, 0x8d, 0xce, 0xac, 0x11, 0xa5, 0xf6, 0x6c, 0x37, 0x1c, 0x12, 0xde, 0xf2, 0xcd, 0xd2, 0xcd, 0xd7, 0xe6, 
  0xff, 0xff, 0x54, 0xd6, 0xf2, 0xcd, 0x12, 0xd6, 0xb4, 0xad, 0xd4, 0x6c, 0xcb, 0x93, 0x28, 0x4a, 0xc7, 0x31, 0xc7, 0x39, 0xe9, 0x62, 0xd0, 0xa4, 0xf7, 0x54, 0x32, 0xe6, 0xf2, 0xcd, 0xd1, 0xcd, 
  0xff, 0xff, 0xb7, 0xde, 0xf1, 0xd5, 0x32, 0xde, 0xb5, 0x54, 0x07, 0x4a, 0xc7, 0x39, 0x08, 0x42, 0x08, 0x42, 0x08, 0x42, 0xe7, 0x39, 0x86, 0x39, 0x71, 0x33, 0x95, 0x95, 0x32, 0xe6, 0xd1, 0xcd, 
  0xff, 0xff, 0xff, 0xff, 0x14, 0x7d, 0x79, 0x0c, 0x8a, 0x4a, 0xe7, 0x39, 0x08, 0x42, 0x08, 0x42, 0x08, 0x42, 0x08, 0x42, 0x08, 0x42, 0x08, 0x42, 0xc7, 0x41, 0x7a, 0x0c, 0x35, 0x7d, 0xb0, 0xcd, 
  0xff, 0xff, 0xff, 0xff, 0x17, 0x0c, 0x98, 0x1c, 0xa6, 0x41, 0x08, 0x42, 0x08, 0x42, 0x08, 0x42, 0x08, 0x42, 0x08, 0x42, 0x08, 0x42, 0x08, 0x42, 0xc6, 0x41, 0xb3, 0x2b, 0x58, 0x0c, 0x78, 0x1c, 
  0xff, 0xff, 0xff, 0xff, 0x1b, 0x8e, 0x38, 0x04, 0xa6, 0x41, 0x08, 0x42, 0x08, 0x42, 0x08, 0x42, 0x08, 0x42, 0x08, 0x42, 0x08, 0x42, 0x08, 0x42, 0xe7, 0x41, 0xee, 0x2a, 0x17, 0x04, 0x7e, 0xe7, 
  0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x3b, 0x96, 0x6a, 0x4a, 0xc7, 0x39, 0x08, 0x42, 0x08, 0x42, 0x08, 0x42, 0x08, 0x42, 0x08, 0x42, 0x08, 0x42, 0x45, 0x29, 0xd6, 0x6c, 0x9f, 0xe7, 0xff, 0xff, 
  0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x86, 0x31, 0xa6, 0x31, 0x08, 0x42, 0x08, 0x42, 0x08, 0x42, 0xe7, 0x39, 0x24, 0x21, 0xd3, 0x9c, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
};
uint8_t pic_playerTopDown45small_pixel_map[] = {
0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x7d, 0xef, 0xff, 0xff, 0xdf, 0xff, 0xcb, 0xe4, 0x66, 0xf4, 0xe7, 0xc3, 0xb0, 0xed, 0xff, 0xff, 0xff, 0xff, 
  0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x7c, 0xf7, 0x13, 0xd6, 0xd1, 0xcd, 0x51, 0xbd, 0xc0, 0x99, 0xe0, 0xd2, 0xa0, 0xfb, 0x80, 0xb2, 0xa0, 0xfb, 0x81, 0x9a, 0xff, 0xff, 
  0xff, 0xff, 0xff, 0xff, 0x3a, 0xef, 0xf2, 0xcd, 0xd1, 0xcd, 0xf2, 0xcd, 0x54, 0xd6, 0xa0, 0xb2, 0x20, 0xe3, 0x80, 0xb2, 0x40, 0x9a, 0x60, 0xeb, 0x40, 0xa2, 0x80, 0xfb, 0xb1, 0xed, 
  0xff, 0xff, 0xd1, 0xcd, 0xd1, 0xcd, 0xf2, 0xcd, 0xf2, 0xcd, 0x12, 0xd6, 0xd2, 0xc5, 0x00, 0xb2, 0x80, 0xb2, 0x40, 0xa2, 0x20, 0x9a, 0x00, 0x92, 0xa0, 0xfb, 0x20, 0xe3, 0x07, 0xd4, 
  0x59, 0xb6, 0x11, 0xe6, 0x12, 0xde, 0x32, 0xde, 0x12, 0xd6, 0xf4, 0xbd, 0x2d, 0x94, 0x60, 0x81, 0x20, 0xa2, 0x00, 0xdb, 0x40, 0xa2, 0x40, 0xa2, 0x00, 0x8a, 0x00, 0xd3, 0x26, 0xdc, 
  0x37, 0x14, 0x78, 0x24, 0xf8, 0x44, 0xb7, 0x34, 0x94, 0x5c, 0x37, 0x65, 0x16, 0x2c, 0xa0, 0x91, 0x60, 0xba, 0xc0, 0x81, 0xa0, 0xc2, 0x40, 0xa2, 0x60, 0xaa, 0x20, 0xe3, 0x0d, 0xe5, 
  0x78, 0x1c, 0x57, 0x24, 0xcd, 0x32, 0xa6, 0x41, 0xa6, 0x39, 0x27, 0x4a, 0xaf, 0xac, 0x4e, 0x8c, 0xc0, 0x60, 0x20, 0xaa, 0xc0, 0xc2, 0x00, 0x92, 0x20, 0xeb, 0xa0, 0x91, 0xbf, 0xf7, 
  0x36, 0x2c, 0xa5, 0x41, 0xe7, 0x41, 0x08, 0x42, 0x08, 0x42, 0x08, 0x3a, 0x87, 0x31, 0xed, 0x83, 0x4f, 0x8c, 0x80, 0x91, 0xa0, 0x99, 0xa0, 0x99, 0xe2, 0xba, 0x50, 0xbd, 0x5c, 0xef, 
  0xd2, 0xa4, 0xc7, 0x39, 0x08, 0x42, 0x08, 0x42, 0x08, 0x42, 0x08, 0x42, 0x08, 0x42, 0x86, 0x31, 0xef, 0xac, 0xf6, 0x1b, 0xcf, 0xac, 0xf3, 0xc5, 0x54, 0xd6, 0xd1, 0xcd, 0xff, 0xff, 
  0x10, 0x84, 0xc7, 0x39, 0x08, 0x42, 0x08, 0x42, 0x08, 0x42, 0x08, 0x42, 0x08, 0x42, 0xe8, 0x39, 0x68, 0x5a, 0x17, 0x55, 0x13, 0xd6, 0x12, 0xd6, 0xf2, 0xcd, 0x75, 0xde, 0xff, 0xff, 
  0x14, 0xa5, 0xa6, 0x31, 0x08, 0x42, 0x08, 0x42, 0x08, 0x42, 0x08, 0x42, 0x08, 0x42, 0x08, 0x42, 0xa6, 0x39, 0xf4, 0x6c, 0x32, 0xde, 0xf2, 0xcd, 0xd1, 0xcd, 0x5b, 0xef, 0xff, 0xff, 
  0x9e, 0xf7, 0x24, 0x21, 0x08, 0x42, 0x08, 0x42, 0x08, 0x42, 0x08, 0x42, 0x08, 0x42, 0x08, 0x42, 0xc6, 0x39, 0x15, 0x75, 0x12, 0xde, 0xf2, 0xcd, 0xb1, 0xcd, 0xff, 0xff, 0xff, 0xff, 
  0xff, 0xff, 0xd2, 0x9c, 0x45, 0x29, 0x08, 0x42, 0x08, 0x42, 0x08, 0x42, 0x08, 0x42, 0xe7, 0x41, 0x69, 0x42, 0xf8, 0x3c, 0x12, 0xde, 0xd1, 0xcd, 0x75, 0xd6, 0xff, 0xff, 0xff, 0xff, 
  0xff, 0xff, 0xff, 0xff, 0xd3, 0x9c, 0x24, 0x21, 0xa6, 0x31, 0xa6, 0x31, 0xa6, 0x31, 0xc7, 0x41, 0x57, 0x24, 0x18, 0x04, 0xb2, 0xc5, 0xb7, 0xe6, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
  0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xdf, 0xff, 0x96, 0xb5, 0xd3, 0x9c, 0x55, 0xb5, 0x98, 0x2c, 0x98, 0x2c, 0x1b, 0x86, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
};
uint8_t pic_playerTopDown0small_pixel_map[] = {
0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x9d, 0xff, 0x34, 0xd6, 0xd2, 0xcd, 0x96, 0xde, 0xdf, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
  0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x39, 0x4d, 0xf7, 0x03, 0xd4, 0x5c, 0x11, 0xde, 0xf2, 0xcd, 0xf2, 0xcd, 0xb1, 0xc5, 0x75, 0xde, 0xde, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
  0xff, 0xff, 0xff, 0xff, 0x9a, 0x75, 0xb4, 0x13, 0xf4, 0x2b, 0x79, 0x0c, 0xf3, 0xbd, 0x12, 0xde, 0xf2, 0xcd, 0xf2, 0xcd, 0xf2, 0xcd, 0xf2, 0xcd, 0x76, 0xd6, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
  0xff, 0xff, 0xfb, 0xde, 0xa6, 0x39, 0xc6, 0x41, 0xc6, 0x41, 0x07, 0x4a, 0x53, 0x5c, 0x55, 0x85, 0x32, 0xe6, 0x13, 0xd6, 0x54, 0xd6, 0x6b, 0xbc, 0x65, 0xab, 0x6b, 0xcc, 0x3b, 0xef, 0xff, 0xff, 
  0xdf, 0xff, 0x24, 0x21, 0xe7, 0x39, 0x08, 0x42, 0x08, 0x42, 0x08, 0x42, 0xa6, 0x39, 0xf3, 0x8c, 0x96, 0x44, 0x91, 0xc5, 0xc0, 0x81, 0xa0, 0xd2, 0x00, 0xdb, 0x60, 0xb2, 0x00, 0xfb, 0xce, 0xc4, 
  0x10, 0x84, 0xc7, 0x39, 0x08, 0x42, 0x08, 0x42, 0x08, 0x42, 0x08, 0x42, 0xe7, 0x39, 0x6a, 0x7b, 0xb7, 0x4c, 0xa0, 0x81, 0x20, 0xa2, 0xe0, 0x89, 0xe0, 0xd2, 0x80, 0xb2, 0xa0, 0xb2, 0x60, 0xd2, 
  0x08, 0x42, 0x08, 0x42, 0x08, 0x42, 0x08, 0x42, 0x08, 0x42, 0x08, 0x42, 0x08, 0x42, 0x08, 0x42, 0x11, 0x9d, 0xc0, 0xa1, 0x80, 0xba, 0x00, 0xdb, 0xc0, 0xc2, 0xe0, 0x81, 0xa0, 0xfb, 0xc0, 0xfb, 
  0xe7, 0x39, 0x08, 0x42, 0x08, 0x42, 0x08, 0x42, 0x08, 0x42, 0x08, 0x42, 0x08, 0x42, 0xc7, 0x31, 0xce, 0xac, 0x20, 0x71, 0xc0, 0x81, 0x20, 0x9a, 0x80, 0xb2, 0xe0, 0x89, 0xc0, 0xc2, 0xa0, 0xba, 
  0x08, 0x42, 0x08, 0x42, 0x08, 0x42, 0x08, 0x42, 0x08, 0x42, 0x08, 0x42, 0x08, 0x42, 0xe7, 0x39, 0x12, 0x9d, 0xc0, 0xa1, 0xa0, 0xc2, 0x80, 0xba, 0x60, 0xa2, 0xe0, 0x81, 0xc0, 0xba, 0xc0, 0xfb, 
  0xcf, 0x7b, 0xc7, 0x39, 0x08, 0x42, 0x08, 0x42, 0x08, 0x42, 0x08, 0x42, 0xe7, 0x39, 0x4a, 0x73, 0xd7, 0x54, 0xc0, 0x89, 0xc0, 0x89, 0x40, 0xa2, 0x40, 0xeb, 0x80, 0xb2, 0xa0, 0xf3, 0xc0, 0xa9, 
  0x9e, 0xf7, 0x04, 0x21, 0x08, 0x42, 0x08, 0x42, 0x08, 0x42, 0xe7, 0x41, 0xa6, 0x39, 0xf2, 0x94, 0x96, 0x34, 0x50, 0xbd, 0x00, 0x92, 0xa0, 0xd2, 0x00, 0xe3, 0x20, 0xaa, 0xe0, 0xf2, 0x91, 0xdd, 
  0xff, 0xff, 0x79, 0xce, 0x85, 0x39, 0xc6, 0x41, 0xc6, 0x41, 0x6a, 0x3a, 0x14, 0x2c, 0x56, 0x6d, 0x32, 0xe6, 0x13, 0xd6, 0x74, 0xd6, 0x8c, 0xb4, 0xe9, 0xbb, 0x2f, 0xcd, 0x5d, 0xef, 0xff, 0xff, 
  0xff, 0xff, 0xff, 0xff, 0x79, 0x75, 0x92, 0x1b, 0x57, 0x24, 0x9a, 0x0c, 0xf3, 0xbd, 0x12, 0xde, 0xf2, 0xcd, 0xf2, 0xcd, 0xf2, 0xcd, 0xd1, 0xcd, 0x3b, 0xe7, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
  0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x58, 0x14, 0x18, 0x04, 0x74, 0x9d, 0x12, 0xde, 0xf2, 0xcd, 0xd1, 0xcd, 0xd1, 0xcd, 0xb7, 0xde, 0x5c, 0xef, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
  0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x7b, 0x5d, 0xf2, 0xcd, 0xb0, 0xcd, 0x54, 0xd6, 0x5b, 0xef, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
  0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
};
/*uint8_t pic_netTopDownSmall_pixel_map[] = {
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x00, 0x00, 0x00, 0x00, 
  0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x00, 0x00, 0x00, 0x00, 
  0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x00, 0x00, 0x00, 0x00, 
  0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x00, 0x00, 0x00, 0x00, 
  0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x00, 0x00, 0x00, 0x00, 
  0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x00, 0x00, 0x00, 0x00, 
  0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x00, 0x00, 0x00, 0x00, 
  0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x00, 0x00, 0x00, 0x00, 
  0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x00, 0x00, 0x00, 0x00, 
  0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x00, 0x00, 0x00, 0x00, 
  0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x00, 0x00, 0x00, 0x00, 
  0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x00, 0x00, 0x00, 0x00, 
  0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x00, 0x00, 0x00, 0x00, 
  0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x00, 0x00, 0x00, 0x00, 
  0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xe4, 0xfb, 0xe4, 0xfb, 0xe4, 0xfb, 0xe4, 0xfb, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x00, 0x00, 0x00, 0x00, 
  0xff, 0xff, 0xff, 0xff, 0xe4, 0xfb, 0xe4, 0xfb, 0xe4, 0xfb, 0xe4, 0xfb, 0xe4, 0xfb, 0xe4, 0xfb, 0xe4, 0xfb, 0xe4, 0xfb, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x00, 0x00, 0x00, 0x00, 
  0xff, 0xff, 0xe4, 0xfb, 0xe4, 0xfb, 0xe4, 0xfb, 0xe4, 0xfb, 0x1d, 0x05, 0x1d, 0x05, 0xe4, 0xfb, 0xe4, 0xfb, 0xe4, 0xfb, 0xe4, 0xfb, 0xff, 0xff, 0xff, 0xff, 0x00, 0x00, 0x00, 0x00, 
  0xff, 0xff, 0xe4, 0xfb, 0xe4, 0xfb, 0x1d, 0x05, 0x1d, 0x05, 0x1d, 0x05, 0x1d, 0x05, 0x1d, 0x05, 0x1d, 0x05, 0xe4, 0xfb, 0xe4, 0xfb, 0xff, 0xff, 0xff, 0xff, 0x00, 0x00, 0x00, 0x00, 
  0xe4, 0xfb, 0xe4, 0xfb, 0xe4, 0xfb, 0x1d, 0x05, 0x1d, 0x05, 0x1d, 0x05, 0x1d, 0x05, 0x1d, 0x05, 0x1d, 0x05, 0xe4, 0xfb, 0xe4, 0xfb, 0xe4, 0xfb, 0xe4, 0xfb, 0x00, 0x00, 0x00, 0x00, 
  0xe4, 0xfb, 0xe4, 0xfb, 0x1d, 0x05, 0x1d, 0x05, 0x1d, 0x05, 0x1d, 0x05, 0x1d, 0x05, 0x1d, 0x05, 0x1d, 0x05, 0x1d, 0x05, 0xe4, 0xfb, 0xe4, 0xfb, 0xe4, 0xfb, 0x00, 0x00, 0x00, 0x00, 
  0xe4, 0xfb, 0xe4, 0xfb, 0x1d, 0x05, 0x1d, 0x05, 0x1d, 0x05, 0x1d, 0x05, 0x1d, 0x05, 0x1d, 0x05, 0x1d, 0x05, 0x1d, 0x05, 0xe4, 0xfb, 0xe4, 0xfb, 0xe4, 0xfb, 0x00, 0x00, 0x00, 0x00, 
  0xe4, 0xfb, 0xe4, 0xfb, 0xe4, 0xfb, 0x1d, 0x05, 0x1d, 0x05, 0x1d, 0x05, 0x1d, 0x05, 0x1d, 0x05, 0x1d, 0x05, 0xe4, 0xfb, 0xe4, 0xfb, 0xe4, 0xfb, 0xe4, 0xfb, 0x00, 0x00, 0x00, 0x00, 
  0xff, 0xff, 0xe4, 0xfb, 0xe4, 0xfb, 0x1d, 0x05, 0x1d, 0x05, 0x1d, 0x05, 0x1d, 0x05, 0x1d, 0x05, 0x1d, 0x05, 0xe4, 0xfb, 0xe4, 0xfb, 0xff, 0xff, 0xff, 0xff, 0x00, 0x00, 0x00, 0x00, 
  0xff, 0xff, 0xe4, 0xfb, 0xe4, 0xfb, 0xe4, 0xfb, 0xe4, 0xfb, 0x1d, 0x05, 0x1d, 0x05, 0xe4, 0xfb, 0xe4, 0xfb, 0xe4, 0xfb, 0xe4, 0xfb, 0xff, 0xff, 0xff, 0xff, 0x00, 0x00, 0x00, 0x00, 
  0xff, 0xff, 0xff, 0xff, 0xe4, 0xfb, 0xe4, 0xfb, 0xe4, 0xfb, 0xe4, 0xfb, 0xe4, 0xfb, 0xe4, 0xfb, 0xe4, 0xfb, 0xe4, 0xfb, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x00, 0x00, 0x00, 0x00, 
  0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xe4, 0xfb, 0xe4, 0xfb, 0xe4, 0xfb, 0xe4, 0xfb, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x00, 0x00, 0x00, 0x00, 
  0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x00, 0x00, 0x00, 0x00, 
  0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x00, 0x00, 0x00, 0x00, 
  0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x00, 0x00, 0x00, 0x00, 
  0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x00, 0x00, 0x00, 0x00, 
  0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x00, 0x00, 0x00, 0x00, 
  0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x00, 0x00, 0x00, 0x00, 
  0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x00, 0x00, 0x00, 0x00, 
  0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x00, 0x00, 0x00, 0x00, 
  0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x00, 0x00, 0x00, 0x00, 
  0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x00, 0x00, 0x00, 0x00, 
  0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x00, 0x00, 0x00, 0x00, 
  0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x00, 0x00, 0x00, 0x00, 
  0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x00, 0x00, 0x00, 0x00, 
  0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x00, 0x00, 0x00, 0x00, 
};*/
uint8_t pic_netsideSmall_pixel_map[] = {
0x00, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
  0x00, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
  0x00, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
  0x00, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
  0x00, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
  0x00, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
  0x00, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
  0x00, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
  0x00, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
  0x00, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
  0x00, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
  0x00, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
  0x00, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
  0x00, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
  0x00, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
  0x00, 0x00, 0x00, 0x00, 0x8d, 0xfd, 0x0c, 0xfd, 0x0c, 0xfd, 0x0c, 0xfd, 0x0c, 0xfd, 0x0c, 0xfd, 0x0c, 0xfd, 0x0c, 0xfd, 0x0c, 0xfd, 0x0c, 0xfd, 0x0c, 0xfd, 0xa9, 0xfc, 0x88, 0xfc, 0x89, 0xfc, 0xa9, 0xfc, 0x88, 0xfc, 0xa9, 0xfc, 0x0b, 0xfd, 
  0x00, 0x00, 0x00, 0x00, 0x20, 0xfb, 0xe0, 0xfa, 0xe0, 0xfa, 0xe0, 0xfa, 0xa0, 0xfa, 0x60, 0xfa, 0x80, 0xfa, 0x80, 0xfa, 0x60, 0xfa, 0x60, 0xfa, 0xa0, 0xfa, 0xb6, 0xfe, 0xde, 0xff, 0x1b, 0xcf, 0x7a, 0x96, 0xde, 0xff, 0x39, 0x86, 0x5a, 0x86, 
  0x00, 0x00, 0x00, 0x00, 0x60, 0xfb, 0x20, 0xfb, 0x20, 0xfb, 0x21, 0xdb, 0xd7, 0x75, 0x9c, 0xff, 0xf7, 0x8d, 0x38, 0x9e, 0x7b, 0xff, 0xff, 0xff, 0x7b, 0x05, 0xff, 0xff, 0xff, 0xff, 0x7c, 0x6e, 0xdd, 0x8e, 0xff, 0xff, 0x3b, 0x56, 0x3d, 0xaf, 
  0x00, 0x00, 0x00, 0x00, 0x60, 0xfb, 0x20, 0xfb, 0x80, 0xfa, 0x34, 0xf6, 0x9d, 0x56, 0xdd, 0x8e, 0xfd, 0x96, 0x7c, 0x66, 0xff, 0xff, 0xbf, 0xe7, 0xbc, 0x8e, 0xbc, 0x8e, 0xff, 0xff, 0x9c, 0x7e, 0xbc, 0x86, 0xdc, 0x9e, 0xfa, 0x45, 0xff, 0xff, 
  0x00, 0x00, 0x00, 0x00, 0x40, 0xfb, 0x80, 0xfa, 0x4e, 0xfd, 0xff, 0xff, 0x9c, 0x7e, 0xdc, 0x96, 0x99, 0x25, 0xff, 0xff, 0x5b, 0x66, 0x3d, 0xb7, 0xdf, 0xef, 0x7b, 0x6e, 0xbc, 0x8e, 0xff, 0xff, 0x9c, 0x7e, 0x79, 0x1d, 0x5e, 0xbf, 0xff, 0xff, 
  0x00, 0x00, 0x00, 0x00, 0x24, 0xfc, 0x8f, 0xfd, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x1a, 0x56, 0xfd, 0x9e, 0xfd, 0xa6, 0x9e, 0xd7, 0x79, 0x1d, 0xff, 0xff, 0x7e, 0xcf, 0x1a, 0x4e, 0xff, 0xff, 0x38, 0x05, 0x1a, 0x56, 0xff, 0xff, 0xff, 0xff, 
  0x00, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x3d, 0xbf, 0xb9, 0x2d, 0x3b, 0x56, 0x5b, 0x66, 0x7b, 0x76, 0x1d, 0xb7, 0x7b, 0x6e, 0x7b, 0x6e, 0xbc, 0x8e, 0xda, 0x3d, 0xfd, 0x9e, 0xff, 0xff, 0xff, 0xff, 
  0xf7, 0xbd, 0xb6, 0xb5, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x79, 0x1d, 0x3b, 0x56, 0x9c, 0x86, 0x7b, 0x6e, 0x1a, 0x56, 0x5b, 0x6e, 0xdc, 0x8e, 0x1a, 0x4e, 0x38, 0x05, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
  0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x5b, 0x66, 0x9c, 0x86, 0xb9, 0x35, 0x9c, 0x7e, 0x79, 0x15, 0x1d, 0xaf, 0x3b, 0x5e, 0x7b, 0x76, 0x58, 0x0d, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
  0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x7b, 0x76, 0xb9, 0x2d, 0x1d, 0xaf, 0x38, 0x05, 0x7e, 0xd7, 0xb9, 0x2d, 0x7b, 0x76, 0xda, 0x35, 0xfa, 0x45, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
  0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x1a, 0x56, 0x7b, 0x76, 0xda, 0x3d, 0x3d, 0xb7, 0x79, 0x1d, 0xdc, 0x9e, 0x79, 0x15, 0x3b, 0x5e, 0x58, 0x05, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
  0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x5e, 0xbf, 0x9c, 0x7e, 0x9c, 0x7e, 0x5b, 0x66, 0x7b, 0x76, 0x5b, 0x6e, 0x9c, 0x86, 0x5b, 0x6e, 0xdc, 0x96, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
};

uint8_t pic_playerSideSmall_pixel_map[] = {
		0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xd3, 0x9c, 0x20, 0x00, 0x65, 0x29, 0x9e, 0xf7, 0xff, 0xff, 0xff, 0xff, 
  0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xc3, 0x10, 0x00, 0x00, 0x00, 0x00, 0x4d, 0x6b, 0xff, 0xff, 0xff, 0xff, 
  0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xc7, 0x39, 0x00, 0x00, 0xcb, 0x5a, 0x82, 0x10, 0xff, 0xff, 0xff, 0xff, 
  0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x08, 0x42, 0xbe, 0xff, 0x75, 0xad, 0x8e, 0x73, 0xff, 0xff, 
  0xff, 0xff, 0xff, 0xff, 0x75, 0xad, 0x00, 0x00, 0xc3, 0x10, 0x18, 0xc6, 0xff, 0xff, 0x61, 0x08, 0x7d, 0xef, 
  0xff, 0xff, 0xff, 0xff, 0x51, 0x8c, 0x00, 0x00, 0x00, 0x00, 0xf7, 0xbd, 0xff, 0xff, 0x8e, 0x73, 0xeb, 0x5a, 
  0xff, 0xff, 0xff, 0xff, 0x59, 0xce, 0x00, 0x00, 0x00, 0x00, 0xeb, 0x5a, 0xeb, 0x5a, 0x00, 0x00, 0xaa, 0x52, 
  0xff, 0xff, 0xff, 0xff, 0x20, 0x00, 0x20, 0x00, 0x40, 0x00, 0x00, 0x00, 0x41, 0x08, 0x6d, 0x6b, 0xff, 0xff, 
  0xff, 0xff, 0x38, 0xc6, 0x00, 0x00, 0x40, 0x00, 0x00, 0x00, 0xc7, 0x39, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
  0xff, 0xff, 0x18, 0xc6, 0x00, 0x00, 0x41, 0x00, 0x00, 0x00, 0xa6, 0x31, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
  0xff, 0xff, 0x3c, 0xe7, 0x00, 0x00, 0x40, 0x00, 0x00, 0x00, 0xe3, 0x18, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
  0xff, 0xff, 0xff, 0xff, 0x00, 0x00, 0x20, 0x00, 0x00, 0x00, 0x04, 0x19, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
  0xff, 0xff, 0xff, 0xff, 0x20, 0x00, 0x20, 0x00, 0x00, 0x00, 0xc7, 0x39, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
  0xff, 0xff, 0x5d, 0xef, 0x00, 0x00, 0x40, 0x00, 0x00, 0x00, 0x6d, 0x6b, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
  0xff, 0xff, 0xcb, 0x5a, 0x00, 0x00, 0x40, 0x00, 0x00, 0x00, 0xcf, 0x7b, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
  0xff, 0xff, 0xc3, 0x18, 0x00, 0x00, 0x41, 0x00, 0x20, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
  0xff, 0xff, 0x00, 0x00, 0x20, 0x00, 0x41, 0x00, 0x40, 0x00, 0x00, 0x00, 0x3c, 0xe7, 0xff, 0xff, 0xff, 0xff, 
  0x34, 0xa5, 0x00, 0x00, 0x41, 0x00, 0x41, 0x00, 0x41, 0x00, 0x00, 0x00, 0x59, 0xce, 0xff, 0xff, 0xff, 0xff, 
  0x8a, 0x52, 0x00, 0x00, 0x41, 0x00, 0x41, 0x00, 0x41, 0x00, 0x00, 0x00, 0x59, 0xce, 0xff, 0xff, 0xff, 0xff, 
  0xa6, 0x31, 0x00, 0x00, 0x40, 0x00, 0x20, 0x00, 0x20, 0x00, 0x00, 0x00, 0xda, 0xde, 0xff, 0xff, 0xff, 0xff, 
  0xd7, 0xbd, 0xef, 0x7b, 0x00, 0x00, 0x82, 0x10, 0x44, 0x21, 0x00, 0x00, 0x1c, 0xe7, 0xff, 0xff, 0xff, 0xff, 
  0xff, 0xff, 0xdb, 0xde, 0x00, 0x00, 0xd3, 0x9c, 0x4d, 0x6b, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
  0xff, 0xff, 0xcb, 0x5a, 0x00, 0x00, 0xff, 0xff, 0x82, 0x08, 0xe7, 0x39, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
  0xff, 0xff, 0xe7, 0x39, 0x08, 0x42, 0xff, 0xff, 0x00, 0x00, 0x8d, 0x6b, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
  0xff, 0xff, 0x04, 0x19, 0x14, 0xa5, 0xff, 0xff, 0x00, 0x00, 0x55, 0xad, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
  0xff, 0xff, 0x20, 0x00, 0x1c, 0xe7, 0xff, 0xff, 0x00, 0x00, 0xfb, 0xde, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
  0xd3, 0x9c, 0x00, 0x00, 0x7d, 0xef, 0x38, 0xc6, 0x00, 0x00, 0x7d, 0xef, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
  0x86, 0x31, 0x00, 0x00, 0xba, 0xd6, 0xa6, 0x31, 0x00, 0x00, 0xf7, 0xbd, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
  0xbe, 0xf7, 0x00, 0x00, 0xef, 0x7b, 0xff, 0xff, 0x28, 0x42, 0x65, 0x29, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
  0xff, 0xff, 0xf3, 0x9c, 0x08, 0x42, 0xff, 0xff, 0xff, 0xff, 0x8e, 0x73, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 

};
const double xPositions[5] = {0, -5.12, -7.24, -5.12,0}; // @ 90, 135, 180, 225 and 270 from +x axis
const double yPositions[5] = {6.71, 5.12,0,-5.12,-6.71};
int topDown0_Orientation = 0;
int topDown45_Orientation =45;
int topDown90_Orientation =90;

void rotateIcon(int wantedAngle, int numRows,int numCols){
	int i;
	int j;
	int lIndex;
	int rIndex;
	int bIndex;
	int uIndex;
	int temp;
	if (wantedAngle == topDown0_Orientation || wantedAngle == topDown45_Orientation ||wantedAngle == topDown90_Orientation ){
		return;
	}
	if(wantedAngle%180 ==90){// flip vertically;
		for(i =0; i<numRows/2; i++){// for half the rows
			for(j =0; j<numCols; j++){
				uIndex = numCols*i +j;
				bIndex = numCols*(numRows-1-i) + j;
				//printf("\n\%d,%d",uIndex,bIndex);
				temp = pic_playerTopDown90small_pixel_map[uIndex];
				pic_playerTopDown90small_pixel_map[uIndex] = pic_playerTopDown90small_pixel_map[bIndex];
				pic_playerTopDown90small_pixel_map[bIndex] = temp;
			}
		}
		topDown90_Orientation = wantedAngle;
	}
	else if (wantedAngle%180 ==0){//flip horizontally
		for(i =0; i<numRows; i++){// for each row
			for(j =0; j<numCols/2; j++){ //for half the columns
				lIndex = numCols*i + j;
				rIndex = numCols*(i+1) -1 - j;
				temp = pic_playerTopDown0small_pixel_map[lIndex];
				pic_playerTopDown0small_pixel_map[lIndex] = pic_playerTopDown0small_pixel_map[rIndex];
				pic_playerTopDown0small_pixel_map[rIndex] = temp;
			}
		}
		topDown0_Orientation = wantedAngle;
	}
	else{ // 45 degree case
		if((wantedAngle + topDown45_Orientation)%360 == 180){ // flip horizontally
			for(i =0; i<numRows; i++){// for each row
				for(j =0; j<numCols/2; j++){ //for half the columns
					lIndex = numCols*i + j;
					rIndex = numCols*(i+1) -1 - j;
					temp = pic_playerTopDown45small_pixel_map[lIndex];
					pic_playerTopDown45small_pixel_map[lIndex] = pic_playerTopDown45small_pixel_map[rIndex];
					pic_playerTopDown45small_pixel_map[rIndex] = temp;
				}
			}
		}
		else if ((wantedAngle + topDown45_Orientation)%360 == 0){//flip vertically
				for(i =0; i<numRows/2; i++){// for half the rows
				for(j =0; j<numCols; j++){
					uIndex = numCols*i +j;
					bIndex = numCols*(numRows-1-i) + j;
					//printf("\n\%d,%d",uIndex,bIndex);
					temp = pic_playerTopDown45small_pixel_map[uIndex];
					pic_playerTopDown45small_pixel_map[uIndex] = pic_playerTopDown45small_pixel_map[bIndex];
					pic_playerTopDown45small_pixel_map[bIndex] = temp;
				}
			}
		}
		else {// do both flips
			//horizontally
			for(i =0; i<numRows; i++){// for each row
				for(j =0; j<numCols/2; j++){ //for half the columns
					lIndex = numCols*i + j;
					rIndex = numCols*(i+1) -1 - j;
					temp = pic_playerTopDown45small_pixel_map[lIndex];
					pic_playerTopDown45small_pixel_map[lIndex] = pic_playerTopDown45small_pixel_map[rIndex];
					pic_playerTopDown45small_pixel_map[rIndex] = temp;
				}
			}//now vertically
			for(i =0; i<numRows/2; i++){// for half the rows
				for(j =0; j<numCols; j++){
					uIndex = numCols*i +j;
					bIndex = numCols*(numRows-1-i) + j;
					//printf("\n\%d,%d",uIndex,bIndex);
					temp = pic_playerTopDown45small_pixel_map[uIndex];
					pic_playerTopDown45small_pixel_map[uIndex] = pic_playerTopDown45small_pixel_map[bIndex];
					pic_playerTopDown45small_pixel_map[bIndex] = temp;
				}
			}
		}
		topDown45_Orientation = wantedAngle;
}
}
void updateAngleSelectScreen(int XYAngle,int XZAngle, int playerPosition){ // this updates the part of the screen which displays the players
	int XYInterval;
	int XZInterval;
	int hoopBaseLineX =100;
	int hoopBaseLineY =80;
	int xAdjust =0;
	int yAdjust =0;
	int sSize =16; //sprite size
	
	XYInterval = ((XYAngle +23)%360)/45;
	rotateIcon(XYInterval*45,16,32);
		switch(playerPosition){
			case 0:
				xAdjust = 0;
				yAdjust =-67;
			break;
			case 1:
				xAdjust = -51;
				yAdjust =-51;
			break;
			case 2:
				xAdjust = -72;
				yAdjust =0;
			break;
			case 3:
				xAdjust = -51;
				yAdjust =51;
			break;
			case 4:
				xAdjust = 0;
				yAdjust =67;
			break;
		}
		xAdjust = xAdjust - sSize/2;
		yAdjust = yAdjust - sSize/2;

	switch(XYInterval){
		case 0:
		case 4:
			GLCD_Bitmap(hoopBaseLineX +xAdjust ,hoopBaseLineY + yAdjust ,sSize,sSize, pic_playerTopDown0small_pixel_map);
			GLCD_Bitmap(197 ,66 ,9,30, pic_playerSideSmall_pixel_map);
		break;
		case 1:
		case 3:
		case 5:
		case 7:
			GLCD_Bitmap(hoopBaseLineX +xAdjust ,hoopBaseLineY + yAdjust ,sSize,sSize, pic_playerTopDown45small_pixel_map);
			GLCD_Bitmap(202 ,66 ,9,30, pic_playerSideSmall_pixel_map);
		break;
		case 2:
		case 6:
			GLCD_Bitmap(hoopBaseLineX +xAdjust ,hoopBaseLineY + yAdjust ,sSize,sSize, pic_playerTopDown90small_pixel_map);
			GLCD_Bitmap(202 ,66 ,9,30, pic_playerSideSmall_pixel_map);
		break;
	}
	GLCD_Bitmap(278 ,55 ,22,30, pic_netsideSmall_pixel_map);
	//WHAT TO DO FOR THE NET!!!!!!!!!!!!!
	// STORE ANGLES FROM 0-90 and for 90-360, flip or rotate by 90 the different sprites. 
}
void updateStatsSelectScreen(double initVelocity,int XYAngle,int XZAngle){ // this updates the top part of the screen when powerbar
	// display numbers and shit
	// Done
	char buf4[64];
	char buf5[64];
	char buf3[64];
	sprintf(buf4, "%d", XYAngle);
	sprintf(buf5, "%d", XZAngle);
	sprintf(buf3, "%f", initVelocity);
	
	GLCD_DisplayString(24, 1, 0, "XYAngle: ");
	GLCD_DisplayChar(24, 13, 0, buf4[0]);
	if(buf4[1]!= NULL)
		GLCD_DisplayChar(24, 14, 0, buf4[1]);
	if(buf4[2]!= NULL)
		GLCD_DisplayChar(24, 15, 0, buf4[2]);

	
	GLCD_DisplayString(24, 20, 0, "XZAngle: ");
	GLCD_DisplayChar(24, 31, 0, buf5[0]);
	if(buf5[1]!= NULL)
		GLCD_DisplayChar(24, 32, 0, buf5[1]);
	if(buf5[2]!= NULL)
		GLCD_DisplayChar(24, 33, 0, buf5[2]);
	
	printf("%c%c%c", buf4[0], buf4[1], buf4[2]);
	
	GLCD_DisplayString(24, 38, 0, "Velocity: ");
	GLCD_DisplayChar(24, 48, 0, buf3[0]);
	if(buf3[1]!= NULL)
		GLCD_DisplayChar(24, 49, 0, buf3[1]);
	if(buf3[2]!= NULL)
		GLCD_DisplayChar(24, 50, 0, buf3[2]);
	if(buf3[3]!= NULL)
		GLCD_DisplayChar(24, 51, 0, buf3[3]);
	
}
void drawSelectScreenBottom(int score, int shotsTaken){
	// basically displays the bottom 
	// Done
	char buf1[64];
	char buf2[64];
	sprintf(buf1, "%d", score);
	sprintf(buf2, "%d", shotsTaken);
	GLCD_DisplayString(28, 1, 0 , "Shots Taken: ");
	GLCD_DisplayChar(28, 13, 0, buf1[0]);
	if(buf1[1]!= NULL)
		GLCD_DisplayChar(28, 14, 0, buf1[1]);
	GLCD_DisplayString(28, 20, 0, "Score: ");
	GLCD_DisplayChar(28, 26, 0, buf2[0]);
	if(buf2[1]!= NULL)
		GLCD_DisplayChar(28, 27, 0, buf2[1]);
}
void shotAnimation(int animationNumber){
	//Done
	switch (animationNumber){
		case 0:
			//Ball didn't come close SAY MISS
			GLCD_DisplayString(25,0, 1, "Didn't Come Close!");
			GLCD_DisplayString(27,0, 1, "MISS!");
		break;
		case 1:
			//ball bounced out AWWWWWWWWW SOOOOOO CLOSE!
			GLCD_DisplayString(25, 0, 1, "Ball Bounced Out!");
			GLCD_DisplayString(27, 0, 1, "AWWWW SOOOO CLOSE!");
		break;
		case 2:
			//ball bounced in; AND OFF THE BACKBOARD!
			GLCD_DisplayString(25, 0, 1, "Ball Bounced In!");
			GLCD_DisplayString(27, 0, 1, "OFF THE BACKBOAD!");
		break;
		case 3:
			//ball went straight in; SPLASHHHHH!!!
		GLCD_DisplayString(25, 0, 1, "Straight in!");
		GLCD_DisplayString(27, 0, 1, "SPLASHHHH!!!");
		break;
	}
}
void clearScreen(void){
	//Done
	GLCD_Clear(White);
	GLCD_SetBackColor(White);
}
void finalAnimation(int finalScore){
	//Done 
	char buf[2];
	sprintf(buf, "%d", finalScore);
	GLCD_DisplayString(25,0, 1, "Final Score: ");
	GLCD_DisplayChar(25,12, 1, buf[0]);
	if(buf[1]!= NULL)
		GLCD_DisplayChar(25,13, 1, buf[1]);
	GLCD_DisplayString(25, 14, 1, "/30");
	


}


void initialize(void){
	//Done
	SystemInit();
	GLCD_Init();
	GLCD_Clear(White);
	GLCD_SetBackColor(White);
	GLCD_DisplayString(30,0, 1,"Press Int0 to Begin!");
	//Put in a bit about the rules and a quick briefer
}
