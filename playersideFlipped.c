#include <stdint.h>
#include "lv_conf.h"
#include "lvgl/lv_draw/lv_draw.h"

static const uint8_t playersideFlipped_pixel_map[] = {

#if LV_COLOR_DEPTH == 1 || LV_COLOR_DEPTH == 8
/*Pixel format: Red: 3 bit, Green: 3 bit, Blue: 2 bit*/

  0xff, 0x92, 0x49, 0xff, 0xff, 0x6d, 0xff, 0xff, 0xff, 
  0xff, 0x00, 0x6d, 0xff, 0x49, 0x24, 0xff, 0xff, 0xff, 
  0x24, 0x00, 0xdb, 0x24, 0x00, 0xb6, 0xff, 0xff, 0xff, 
  0x92, 0x00, 0xff, 0xdb, 0x00, 0xff, 0xff, 0xff, 0xff, 
  0xff, 0x00, 0xff, 0xff, 0x00, 0xdb, 0xff, 0xff, 0xff, 
  0xff, 0x04, 0xb6, 0xff, 0x00, 0xb6, 0xff, 0xff, 0xff, 
  0xff, 0x24, 0x49, 0xff, 0x00, 0x6d, 0xff, 0xff, 0xff, 
  0xff, 0x49, 0x00, 0xff, 0x00, 0x24, 0xff, 0xff, 0xff, 
  0xff, 0xdb, 0x00, 0x92, 0x6d, 0x00, 0xff, 0xff, 0xff, 
  0xb6, 0x6d, 0x00, 0x00, 0x24, 0x00, 0xff, 0xff, 0xff, 
  0x24, 0x00, 0x00, 0x00, 0x00, 0x00, 0xdb, 0xff, 0xff, 
  0x49, 0x00, 0x00, 0x00, 0x00, 0x00, 0xdb, 0xff, 0xff, 
  0xb6, 0x00, 0x00, 0x00, 0x00, 0x00, 0xdb, 0xff, 0xff, 
  0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 
  0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 
  0xff, 0x49, 0x00, 0x00, 0x00, 0x6d, 0xff, 0xff, 0xff, 
  0xff, 0xff, 0x00, 0x00, 0x00, 0x6d, 0xff, 0xff, 0xff, 
  0xff, 0xff, 0x00, 0x00, 0x00, 0x24, 0xff, 0xff, 0xff, 
  0xff, 0xff, 0x00, 0x00, 0x00, 0x04, 0xff, 0xff, 0xff, 
  0xff, 0xff, 0x00, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 
  0xff, 0xdb, 0x00, 0x00, 0x00, 0x24, 0xff, 0xff, 0xff, 
  0xff, 0xdb, 0x00, 0x00, 0x00, 0x24, 0xff, 0xff, 0xff, 
  0xff, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x6d, 0xff, 
  0xff, 0xff, 0xdb, 0x00, 0x00, 0x49, 0x49, 0x00, 0x49, 
  0xff, 0xff, 0x92, 0x00, 0x00, 0xb6, 0xff, 0x6d, 0x49, 
  0xff, 0xff, 0xb6, 0x00, 0x00, 0xdb, 0xff, 0x00, 0xff, 
  0xff, 0xff, 0xff, 0xff, 0x49, 0xff, 0xb6, 0x6d, 0xff, 
  0xff, 0xff, 0xff, 0x24, 0x00, 0x49, 0x00, 0xff, 0xff, 
  0xff, 0xff, 0xff, 0x00, 0x00, 0x00, 0x6d, 0xff, 0xff, 
  0xff, 0xff, 0xff, 0x92, 0x00, 0x24, 0xff, 0xff, 0xff, 

#elif LV_COLOR_DEPTH == 16
/*Pixel format: Red: 5 bit, Green: 6 bit, Blue: 5 bit*/

  0xff, 0xff, 0xf3, 0x9c, 0x08, 0x42, 0xff, 0xff, 0xff, 0xff, 0x8e, 0x73, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
  0xbe, 0xf7, 0x00, 0x00, 0xef, 0x7b, 0xff, 0xff, 0x28, 0x42, 0x65, 0x29, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
  0x86, 0x31, 0x00, 0x00, 0xba, 0xd6, 0xa6, 0x31, 0x00, 0x00, 0xf7, 0xbd, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
  0xd3, 0x9c, 0x00, 0x00, 0x7d, 0xef, 0x38, 0xc6, 0x00, 0x00, 0x7d, 0xef, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
  0xff, 0xff, 0x20, 0x00, 0x1c, 0xe7, 0xff, 0xff, 0x00, 0x00, 0xfb, 0xde, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
  0xff, 0xff, 0x04, 0x19, 0x14, 0xa5, 0xff, 0xff, 0x00, 0x00, 0x55, 0xad, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
  0xff, 0xff, 0xe7, 0x39, 0x08, 0x42, 0xff, 0xff, 0x00, 0x00, 0x8d, 0x6b, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
  0xff, 0xff, 0xcb, 0x5a, 0x00, 0x00, 0xff, 0xff, 0x82, 0x08, 0xe7, 0x39, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
  0xff, 0xff, 0xdb, 0xde, 0x00, 0x00, 0xd3, 0x9c, 0x4d, 0x6b, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
  0xd7, 0xbd, 0xef, 0x7b, 0x00, 0x00, 0x82, 0x10, 0x44, 0x21, 0x00, 0x00, 0x1c, 0xe7, 0xff, 0xff, 0xff, 0xff, 
  0xa6, 0x31, 0x00, 0x00, 0x40, 0x00, 0x20, 0x00, 0x20, 0x00, 0x00, 0x00, 0xda, 0xde, 0xff, 0xff, 0xff, 0xff, 
  0x8a, 0x52, 0x00, 0x00, 0x41, 0x00, 0x41, 0x00, 0x41, 0x00, 0x00, 0x00, 0x59, 0xce, 0xff, 0xff, 0xff, 0xff, 
  0x34, 0xa5, 0x00, 0x00, 0x41, 0x00, 0x41, 0x00, 0x41, 0x00, 0x00, 0x00, 0x59, 0xce, 0xff, 0xff, 0xff, 0xff, 
  0xff, 0xff, 0x00, 0x00, 0x20, 0x00, 0x41, 0x00, 0x40, 0x00, 0x00, 0x00, 0x3c, 0xe7, 0xff, 0xff, 0xff, 0xff, 
  0xff, 0xff, 0xc3, 0x18, 0x00, 0x00, 0x41, 0x00, 0x20, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
  0xff, 0xff, 0xcb, 0x5a, 0x00, 0x00, 0x40, 0x00, 0x00, 0x00, 0xcf, 0x7b, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
  0xff, 0xff, 0x5d, 0xef, 0x00, 0x00, 0x40, 0x00, 0x00, 0x00, 0x6d, 0x6b, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
  0xff, 0xff, 0xff, 0xff, 0x20, 0x00, 0x20, 0x00, 0x00, 0x00, 0xc7, 0x39, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
  0xff, 0xff, 0xff, 0xff, 0x00, 0x00, 0x20, 0x00, 0x00, 0x00, 0x04, 0x19, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
  0xff, 0xff, 0x3c, 0xe7, 0x00, 0x00, 0x40, 0x00, 0x00, 0x00, 0xe3, 0x18, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
  0xff, 0xff, 0x18, 0xc6, 0x00, 0x00, 0x41, 0x00, 0x00, 0x00, 0xa6, 0x31, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
  0xff, 0xff, 0x38, 0xc6, 0x00, 0x00, 0x40, 0x00, 0x00, 0x00, 0xc7, 0x39, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
  0xff, 0xff, 0xff, 0xff, 0x20, 0x00, 0x20, 0x00, 0x40, 0x00, 0x00, 0x00, 0x41, 0x08, 0x6d, 0x6b, 0xff, 0xff, 
  0xff, 0xff, 0xff, 0xff, 0x59, 0xce, 0x00, 0x00, 0x00, 0x00, 0xeb, 0x5a, 0xeb, 0x5a, 0x00, 0x00, 0xaa, 0x52, 
  0xff, 0xff, 0xff, 0xff, 0x51, 0x8c, 0x00, 0x00, 0x00, 0x00, 0xf7, 0xbd, 0xff, 0xff, 0x8e, 0x73, 0xeb, 0x5a, 
  0xff, 0xff, 0xff, 0xff, 0x75, 0xad, 0x00, 0x00, 0xc3, 0x10, 0x18, 0xc6, 0xff, 0xff, 0x61, 0x08, 0x7d, 0xef, 
  0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x08, 0x42, 0xbe, 0xff, 0x75, 0xad, 0x8e, 0x73, 0xff, 0xff, 
  0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xc7, 0x39, 0x00, 0x00, 0xcb, 0x5a, 0x82, 0x10, 0xff, 0xff, 0xff, 0xff, 
  0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xc3, 0x10, 0x00, 0x00, 0x00, 0x00, 0x4d, 0x6b, 0xff, 0xff, 0xff, 0xff, 
  0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xd3, 0x9c, 0x20, 0x00, 0x65, 0x29, 0x9e, 0xf7, 0xff, 0xff, 0xff, 0xff, 

#elif LV_COLOR_DEPTH == 24
/*Pixel format: Fix 0xFF: 8 bit, Red: 8 bit, Green: 8 bit, Blue: 8 bit*/

  0xff, 0xff, 0xff, 0xff, 0x9f, 0x9f, 0x9f, 0xff, 0x40, 0x41, 0x40, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x73, 0x73, 0x73, 0xff, 0xfd, 0xfc, 0xfd, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
  0xf6, 0xf7, 0xf7, 0xff, 0x00, 0x00, 0x00, 0xff, 0x7e, 0x7e, 0x7d, 0xff, 0xff, 0xff, 0xff, 0xff, 0x44, 0x44, 0x43, 0xff, 0x2d, 0x2f, 0x2d, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
  0x32, 0x32, 0x32, 0xff, 0x00, 0x00, 0x00, 0xff, 0xd5, 0xd5, 0xd5, 0xff, 0x33, 0x34, 0x33, 0xff, 0x00, 0x00, 0x00, 0xff, 0xbe, 0xbe, 0xbe, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
  0x9a, 0x9b, 0x99, 0xff, 0x00, 0x00, 0x00, 0xff, 0xec, 0xec, 0xec, 0xff, 0xc4, 0xc4, 0xc4, 0xff, 0x00, 0x00, 0x00, 0xff, 0xed, 0xed, 0xed, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
  0xff, 0xff, 0xff, 0xff, 0x05, 0x06, 0x04, 0xff, 0xe1, 0xe1, 0xe1, 0xff, 0xff, 0xff, 0xff, 0xff, 0x00, 0x00, 0x00, 0xff, 0xde, 0xde, 0xdf, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
  0xff, 0xff, 0xff, 0xff, 0x20, 0x21, 0x1f, 0xff, 0xa4, 0xa3, 0xa4, 0xff, 0xff, 0xff, 0xff, 0xff, 0x01, 0x02, 0x00, 0xff, 0xa9, 0xa9, 0xa8, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
  0xff, 0xff, 0xff, 0xff, 0x3c, 0x3c, 0x3b, 0xff, 0x42, 0x43, 0x42, 0xff, 0xff, 0xff, 0xff, 0xff, 0x00, 0x00, 0x00, 0xff, 0x6f, 0x70, 0x6f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
  0xff, 0xff, 0xff, 0xff, 0x59, 0x5a, 0x59, 0xff, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0xff, 0x10, 0x10, 0x0f, 0xff, 0x3c, 0x3d, 0x3c, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
  0xff, 0xff, 0xff, 0xff, 0xd9, 0xd9, 0xd9, 0xff, 0x00, 0x00, 0x00, 0xff, 0x99, 0x9a, 0x9a, 0xff, 0x68, 0x69, 0x68, 0xff, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
  0xbb, 0xbb, 0xba, 0xff, 0x7c, 0x7d, 0x7c, 0xff, 0x00, 0x00, 0x00, 0xff, 0x12, 0x13, 0x11, 0xff, 0x27, 0x28, 0x26, 0xff, 0x00, 0x00, 0x00, 0xff, 0xe2, 0xe3, 0xe3, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
  0x34, 0x35, 0x34, 0xff, 0x00, 0x00, 0x00, 0xff, 0x07, 0x08, 0x06, 0xff, 0x05, 0x06, 0x04, 0xff, 0x04, 0x05, 0x03, 0xff, 0x00, 0x00, 0x00, 0xff, 0xd7, 0xd8, 0xd8, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
  0x50, 0x51, 0x50, 0xff, 0x00, 0x00, 0x00, 0xff, 0x08, 0x09, 0x07, 0xff, 0x08, 0x09, 0x07, 0xff, 0x08, 0x09, 0x07, 0xff, 0x00, 0x00, 0x00, 0xff, 0xc8, 0xc9, 0xc9, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
  0xa5, 0xa5, 0xa5, 0xff, 0x00, 0x00, 0x00, 0xff, 0x08, 0x09, 0x07, 0xff, 0x08, 0x09, 0x07, 0xff, 0x08, 0x09, 0x07, 0xff, 0x00, 0x00, 0x00, 0xff, 0xca, 0xca, 0xca, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
  0xff, 0xff, 0xff, 0xff, 0x00, 0x01, 0x00, 0xff, 0x05, 0x06, 0x04, 0xff, 0x08, 0x09, 0x07, 0xff, 0x07, 0x08, 0x06, 0xff, 0x00, 0x00, 0x00, 0xff, 0xe5, 0xe5, 0xe5, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
  0xff, 0xff, 0xff, 0xff, 0x18, 0x1a, 0x18, 0xff, 0x02, 0x03, 0x01, 0xff, 0x08, 0x09, 0x07, 0xff, 0x04, 0x05, 0x03, 0xff, 0x02, 0x03, 0x02, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
  0xff, 0xff, 0xff, 0xff, 0x59, 0x5b, 0x59, 0xff, 0x00, 0x00, 0x00, 0xff, 0x07, 0x08, 0x06, 0xff, 0x00, 0x00, 0x00, 0xff, 0x7a, 0x7a, 0x79, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
  0xff, 0xff, 0xff, 0xff, 0xeb, 0xeb, 0xeb, 0xff, 0x00, 0x00, 0x00, 0xff, 0x07, 0x08, 0x06, 0xff, 0x00, 0x00, 0x00, 0xff, 0x6b, 0x6c, 0x6b, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
  0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x06, 0x07, 0x05, 0xff, 0x05, 0x06, 0x04, 0xff, 0x00, 0x00, 0x00, 0xff, 0x39, 0x39, 0x38, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
  0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x00, 0x00, 0x00, 0xff, 0x06, 0x07, 0x05, 0xff, 0x02, 0x03, 0x01, 0xff, 0x21, 0x21, 0x1f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
  0xff, 0xff, 0xff, 0xff, 0xe6, 0xe6, 0xe6, 0xff, 0x00, 0x00, 0x00, 0xff, 0x07, 0x08, 0x06, 0xff, 0x02, 0x03, 0x01, 0xff, 0x1b, 0x1c, 0x1b, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
  0xff, 0xff, 0xff, 0xff, 0xc0, 0xc0, 0xc0, 0xff, 0x00, 0x00, 0x00, 0xff, 0x08, 0x09, 0x07, 0xff, 0x00, 0x01, 0x00, 0xff, 0x36, 0x37, 0x35, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
  0xff, 0xff, 0xff, 0xff, 0xc4, 0xc4, 0xc4, 0xff, 0x00, 0x00, 0x00, 0xff, 0x07, 0x08, 0x06, 0xff, 0x00, 0x01, 0x00, 0xff, 0x3a, 0x3b, 0x39, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
  0xff, 0xff, 0xff, 0xff, 0xfe, 0xfe, 0xfe, 0xff, 0x06, 0x07, 0x05, 0xff, 0x03, 0x04, 0x02, 0xff, 0x07, 0x08, 0x06, 0xff, 0x00, 0x00, 0x00, 0xff, 0x08, 0x09, 0x08, 0xff, 0x6c, 0x6c, 0x6b, 0xff, 0xff, 0xff, 0xff, 0xff, 
  0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xc9, 0xc9, 0xc9, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x5d, 0x5d, 0x5c, 0xff, 0x5d, 0x5e, 0x5d, 0xff, 0x00, 0x00, 0x00, 0xff, 0x55, 0x55, 0x55, 0xff, 
  0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x88, 0x88, 0x89, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0xbe, 0xbe, 0xbf, 0xff, 0xff, 0xff, 0xff, 0xff, 0x73, 0x73, 0x73, 0xff, 0x5c, 0x5c, 0x5a, 0xff, 
  0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xac, 0xad, 0xac, 0xff, 0x00, 0x00, 0x00, 0xff, 0x18, 0x18, 0x17, 0xff, 0xc2, 0xc2, 0xc2, 0xff, 0xff, 0xff, 0xff, 0xff, 0x0c, 0x0d, 0x0c, 0xff, 0xed, 0xed, 0xed, 0xff, 
  0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x42, 0x42, 0x41, 0xff, 0xf7, 0xf7, 0xf8, 0xff, 0xab, 0xac, 0xab, 0xff, 0x71, 0x72, 0x70, 0xff, 0xff, 0xff, 0xff, 0xff, 
  0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x3b, 0x3b, 0x3c, 0xff, 0x00, 0x00, 0x00, 0xff, 0x5a, 0x5b, 0x59, 0xff, 0x12, 0x13, 0x11, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
  0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x18, 0x18, 0x17, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x6a, 0x6b, 0x69, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
  0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x98, 0x98, 0x98, 0xff, 0x06, 0x07, 0x05, 0xff, 0x2b, 0x2d, 0x2b, 0xff, 0xf0, 0xf0, 0xf1, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 

    #else
    #error "playersideFlipped image :invalid color depth (check LV_COLOR_DEPTH in lv_conf.h)"
    #endif
    };


const lv_img_t playersideFlipped = {
  .header.w = 9,			/*Image width in pixel count*/	
  .header.h = 30,			/*Image height in pixel count*/
  .header.alpha_byte = 0,		/*No alpha byte*/
  .header.chroma_keyed = 0,	/*No chroma keying*/
  .header.format = LV_IMG_FORMAT_INTERNAL_RAW,	/*It's a variable compiled into the code*/
  .pixel_map = playersideFlipped_pixel_map	/*Pointer the array of image pixels.*/
};
