#include <stdint.h>
#include "lv_conf.h"
#include "lvgl/lv_draw/lv_draw.h"

static const uint8_t pic_netsideSmall_pixel_map[] = {

#if LV_COLOR_DEPTH == 1 || LV_COLOR_DEPTH == 8
/*Pixel format: Red: 3 bit, Green: 3 bit, Blue: 2 bit*/

  0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
  0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
  0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
  0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
  0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
  0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
  0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
  0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
  0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
  0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
  0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
  0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
  0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
  0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
  0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
  0x00, 0x00, 0xf5, 0xf5, 0xf5, 0xf5, 0xf5, 0xf5, 0xf5, 0xf5, 0xf5, 0xf5, 0xf5, 0xf1, 0xf1, 0xf1, 0xf1, 0xf1, 0xf1, 0xf5, 
  0x00, 0x00, 0xec, 0xe8, 0xe8, 0xe8, 0xe8, 0xe8, 0xe8, 0xe8, 0xe8, 0xe8, 0xe8, 0xfa, 0xff, 0xdf, 0x9b, 0xff, 0x9b, 0x9b, 
  0x00, 0x00, 0xec, 0xec, 0xec, 0xcc, 0x76, 0xff, 0x96, 0x9b, 0xff, 0xff, 0x17, 0xff, 0xff, 0x7b, 0x9b, 0xff, 0x5b, 0xbf, 
  0x00, 0x00, 0xec, 0xec, 0xe8, 0xfa, 0x5b, 0x9b, 0x9b, 0x7b, 0xff, 0xff, 0x9b, 0x9b, 0xff, 0x7b, 0x9b, 0x9b, 0x57, 0xff, 
  0x00, 0x00, 0xec, 0xe8, 0xf5, 0xff, 0x7b, 0x9b, 0x37, 0xff, 0x7b, 0xbf, 0xff, 0x7b, 0x9b, 0xff, 0x7b, 0x17, 0xbf, 0xff, 
  0x00, 0x00, 0xf0, 0xf5, 0xff, 0xff, 0xff, 0x5b, 0x9b, 0xbb, 0xdf, 0x17, 0xff, 0xdf, 0x5b, 0xff, 0x17, 0x5b, 0xff, 0xff, 
  0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0xff, 0xbf, 0x37, 0x5b, 0x7b, 0x7b, 0xbf, 0x7b, 0x7b, 0x9b, 0x37, 0x9b, 0xff, 0xff, 
  0xb6, 0xb6, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x17, 0x5b, 0x9b, 0x7b, 0x5b, 0x7b, 0x9b, 0x5b, 0x17, 0xff, 0xff, 0xff, 
  0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x7b, 0x9b, 0x37, 0x7b, 0x17, 0xbf, 0x5b, 0x7b, 0x17, 0xff, 0xff, 0xff, 
  0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x7b, 0x37, 0xbf, 0x17, 0xdf, 0x37, 0x7b, 0x37, 0x57, 0xff, 0xff, 0xff, 
  0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x5b, 0x7b, 0x37, 0xbf, 0x17, 0x9b, 0x17, 0x5b, 0x17, 0xff, 0xff, 0xff, 
  0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xbf, 0x7b, 0x7b, 0x7b, 0x7b, 0x7b, 0x9b, 0x7b, 0x9b, 0xff, 0xff, 0xff, 

#elif LV_COLOR_DEPTH == 16
/*Pixel format: Red: 5 bit, Green: 6 bit, Blue: 5 bit*/

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

#elif LV_COLOR_DEPTH == 24
/*Pixel format: Fix 0xFF: 8 bit, Red: 8 bit, Green: 8 bit, Blue: 8 bit*/

  0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
  0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
  0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
  0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
  0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
  0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
  0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
  0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
  0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
  0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
  0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
  0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
  0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
  0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
  0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
  0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x6d, 0xb0, 0xff, 0xff, 0x64, 0xa2, 0xff, 0xff, 0x63, 0xa1, 0xff, 0xff, 0x63, 0xa1, 0xff, 0xff, 0x63, 0xa1, 0xff, 0xff, 0x63, 0xa1, 0xff, 0xff, 0x63, 0xa1, 0xff, 0xff, 0x63, 0xa1, 0xff, 0xff, 0x63, 0xa1, 0xff, 0xff, 0x63, 0xa1, 0xff, 0xff, 0x60, 0xa0, 0xff, 0xff, 0x4e, 0x94, 0xff, 0xff, 0x47, 0x91, 0xff, 0xff, 0x49, 0x93, 0xff, 0xff, 0x4a, 0x94, 0xff, 0xff, 0x47, 0x91, 0xff, 0xff, 0x49, 0x94, 0xff, 0xff, 0x5d, 0xa0, 0xff, 0xff, 
  0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x67, 0xff, 0xff, 0x00, 0x5e, 0xff, 0xff, 0x00, 0x5e, 0xff, 0xff, 0x00, 0x5c, 0xff, 0xff, 0x00, 0x54, 0xff, 0xff, 0x00, 0x4f, 0xff, 0xff, 0x00, 0x53, 0xff, 0xff, 0x00, 0x52, 0xff, 0xff, 0x00, 0x4e, 0xff, 0xff, 0x00, 0x4c, 0xff, 0xff, 0x00, 0x56, 0xfa, 0xff, 0xb6, 0xd4, 0xff, 0xff, 0xf2, 0xf8, 0xff, 0xff, 0xdf, 0xe1, 0xcf, 0xff, 0xd1, 0xcd, 0x92, 0xff, 0xf0, 0xfb, 0xff, 0xff, 0xcc, 0xc6, 0x82, 0xff, 0xd2, 0xc9, 0x80, 0xff, 
  0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x6f, 0xff, 0xff, 0x00, 0x66, 0xff, 0xff, 0x00, 0x64, 0xff, 0xff, 0x08, 0x64, 0xdf, 0xff, 0xb9, 0xb8, 0x74, 0xff, 0xe2, 0xf3, 0xff, 0xff, 0xbe, 0xbf, 0x89, 0xff, 0xc1, 0xc4, 0x98, 0xff, 0xdd, 0xed, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xda, 0xac, 0x00, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xe0, 0xcc, 0x68, 0xff, 0xe8, 0xda, 0x8e, 0xff, 0xff, 0xff, 0xff, 0xff, 0xda, 0xc4, 0x50, 0xff, 0xef, 0xe4, 0xaf, 0xff, 
  0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x6f, 0xff, 0xff, 0x00, 0x66, 0xff, 0xff, 0x00, 0x52, 0xff, 0xff, 0xa3, 0xc6, 0xf6, 0xff, 0xec, 0xd0, 0x55, 0xff, 0xea, 0xda, 0x8a, 0xff, 0xec, 0xdc, 0x91, 0xff, 0xe2, 0xcd, 0x64, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfa, 0xf6, 0xe6, 0xff, 0xe4, 0xd7, 0x8f, 0xff, 0xe3, 0xd5, 0x89, 0xff, 0xff, 0xff, 0xff, 0xff, 0xe0, 0xd0, 0x7a, 0xff, 0xe3, 0xd5, 0x87, 0xff, 0xe7, 0xdb, 0x98, 0xff, 0xd3, 0xbd, 0x43, 0xff, 0xff, 0xff, 0xff, 0xff, 
  0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x6a, 0xff, 0xff, 0x00, 0x53, 0xff, 0xff, 0x70, 0xa9, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xe0, 0xd1, 0x7d, 0xff, 0xe5, 0xd9, 0x92, 0xff, 0xcc, 0xb3, 0x26, 0xff, 0xff, 0xff, 0xff, 0xff, 0xdc, 0xc9, 0x66, 0xff, 0xee, 0xe5, 0xb6, 0xff, 0xfb, 0xf9, 0xef, 0xff, 0xdd, 0xcc, 0x6d, 0xff, 0xe4, 0xd7, 0x8e, 0xff, 0xff, 0xff, 0xff, 0xff, 0xe0, 0xd0, 0x7a, 0xff, 0xc9, 0xaf, 0x19, 0xff, 0xf0, 0xe9, 0xbf, 0xff, 0xff, 0xff, 0xff, 0xff, 
  0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x26, 0x86, 0xff, 0xff, 0x7a, 0xb0, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xd6, 0xc1, 0x50, 0xff, 0xe8, 0xdd, 0x9f, 0xff, 0xe9, 0xdf, 0xa3, 0xff, 0xf5, 0xf1, 0xd7, 0xff, 0xca, 0xaf, 0x1b, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf3, 0xed, 0xcd, 0xff, 0xd5, 0xc0, 0x4a, 0xff, 0xff, 0xff, 0xff, 0xff, 0xc4, 0xa6, 0x01, 0xff, 0xd6, 0xc1, 0x50, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
  0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xee, 0xe6, 0xb8, 0xff, 0xcf, 0xb6, 0x2f, 0xff, 0xd8, 0xc4, 0x57, 0xff, 0xda, 0xc8, 0x62, 0xff, 0xdd, 0xcd, 0x70, 0xff, 0xec, 0xe3, 0xb0, 0xff, 0xdd, 0xcc, 0x6c, 0xff, 0xdd, 0xcc, 0x6d, 0xff, 0xe4, 0xd6, 0x8b, 0xff, 0xd1, 0xba, 0x39, 0xff, 0xe8, 0xdd, 0x9e, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
  0xbf, 0xbf, 0xbf, 0xff, 0xb6, 0xb6, 0xb6, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xca, 0xaf, 0x1a, 0xff, 0xd8, 0xc4, 0x57, 0xff, 0xe2, 0xd3, 0x81, 0xff, 0xdd, 0xcc, 0x6e, 0xff, 0xd7, 0xc3, 0x53, 0xff, 0xdd, 0xcb, 0x6c, 0xff, 0xe5, 0xd8, 0x8f, 0xff, 0xd5, 0xc1, 0x4e, 0xff, 0xc4, 0xa6, 0x01, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
  0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xdb, 0xc9, 0x65, 0xff, 0xe1, 0xd3, 0x81, 0xff, 0xcf, 0xb7, 0x31, 0xff, 0xe1, 0xd2, 0x7e, 0xff, 0xc9, 0xae, 0x17, 0xff, 0xec, 0xe2, 0xad, 0xff, 0xd8, 0xc5, 0x5a, 0xff, 0xde, 0xcd, 0x70, 0xff, 0xc7, 0xaa, 0x0c, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
  0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xdf, 0xcf, 0x77, 0xff, 0xcd, 0xb4, 0x28, 0xff, 0xec, 0xe3, 0xaf, 0xff, 0xc4, 0xa6, 0x00, 0xff, 0xf4, 0xef, 0xd2, 0xff, 0xce, 0xb5, 0x2a, 0xff, 0xde, 0xce, 0x73, 0xff, 0xd0, 0xb9, 0x37, 0xff, 0xd4, 0xbd, 0x44, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
  0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xd7, 0xc3, 0x54, 0xff, 0xde, 0xcd, 0x71, 0xff, 0xd1, 0xb9, 0x38, 0xff, 0xed, 0xe4, 0xb3, 0xff, 0xc9, 0xae, 0x19, 0xff, 0xe7, 0xdb, 0x99, 0xff, 0xc9, 0xad, 0x16, 0xff, 0xd9, 0xc5, 0x5b, 0xff, 0xc6, 0xa8, 0x06, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
  0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf0, 0xe8, 0xbf, 0xff, 0xe1, 0xd2, 0x7e, 0xff, 0xe0, 0xd0, 0x7a, 0xff, 0xdb, 0xc9, 0x65, 0xff, 0xdf, 0xcf, 0x76, 0xff, 0xdc, 0xcb, 0x6a, 0xff, 0xe1, 0xd3, 0x83, 0xff, 0xdd, 0xcb, 0x6c, 0xff, 0xe5, 0xd8, 0x91, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 

    #else
    #error "pic_netsideSmall image :invalid color depth (check LV_COLOR_DEPTH in lv_conf.h)"
    #endif
    };


const lv_img_t pic_netsideSmall = {
  .header.w = 20,			/*Image width in pixel count*/	
  .header.h = 27,			/*Image height in pixel count*/
  .header.alpha_byte = 0,		/*No alpha byte*/
  .header.chroma_keyed = 0,	/*No chroma keying*/
  .header.format = LV_IMG_FORMAT_INTERNAL_RAW,	/*It's a variable compiled into the code*/
  .pixel_map = pic_netsideSmall_pixel_map	/*Pointer the array of image pixels.*/
};
