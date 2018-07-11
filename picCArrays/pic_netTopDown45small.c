#include <stdint.h>
#include "lv_conf.h"
#include "lvgl/lv_draw/lv_draw.h"

static const uint8_t pic_netTopDown45small_pixel_map[] = {

#if LV_COLOR_DEPTH == 1 || LV_COLOR_DEPTH == 8
/*Pixel format: Red: 3 bit, Green: 3 bit, Blue: 2 bit*/

  0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf1, 0xf0, 0xcc, 0xf6, 0xff, 0xff, 
  0xff, 0xff, 0xff, 0xff, 0xff, 0xda, 0xd6, 0xb6, 0x84, 0xc8, 0xec, 0xa8, 0xec, 0x88, 0xff, 
  0xff, 0xff, 0xff, 0xd6, 0xd6, 0xd6, 0xda, 0xa8, 0xec, 0xa8, 0x88, 0xec, 0xa8, 0xec, 0xf6, 
  0xff, 0xd6, 0xd6, 0xd6, 0xd6, 0xda, 0xd6, 0xa8, 0xa8, 0xa8, 0x88, 0x88, 0xec, 0xec, 0xd0, 
  0xbb, 0xfa, 0xda, 0xda, 0xda, 0xb6, 0x91, 0x84, 0xa8, 0xcc, 0xa8, 0xa8, 0x88, 0xcc, 0xd0, 
  0x12, 0x33, 0x53, 0x32, 0x52, 0x76, 0x32, 0x84, 0xa8, 0x84, 0xc8, 0xa8, 0xa8, 0xec, 0xf5, 
  0x13, 0x32, 0x29, 0x44, 0x24, 0x48, 0xb1, 0x91, 0x60, 0xa8, 0xc8, 0x88, 0xec, 0x84, 0xff, 
  0x32, 0x44, 0x44, 0x49, 0x49, 0x29, 0x24, 0x8d, 0x91, 0x84, 0x84, 0x84, 0xa8, 0xb6, 0xff, 
  0xb2, 0x24, 0x49, 0x49, 0x49, 0x49, 0x49, 0x24, 0xb1, 0x0e, 0xb1, 0xd6, 0xda, 0xd6, 0xff, 
  0x92, 0x24, 0x49, 0x49, 0x49, 0x49, 0x49, 0x25, 0x49, 0x56, 0xda, 0xda, 0xd6, 0xda, 0xff, 
  0xb6, 0x24, 0x49, 0x49, 0x49, 0x49, 0x49, 0x49, 0x24, 0x72, 0xda, 0xd6, 0xd6, 0xff, 0xff, 
  0xff, 0x24, 0x49, 0x49, 0x49, 0x49, 0x49, 0x49, 0x24, 0x76, 0xda, 0xd6, 0xd6, 0xff, 0xff, 
  0xff, 0x92, 0x24, 0x49, 0x49, 0x49, 0x49, 0x44, 0x49, 0x33, 0xda, 0xd6, 0xda, 0xff, 0xff, 
  0xff, 0xff, 0x92, 0x24, 0x24, 0x24, 0x24, 0x44, 0x32, 0x13, 0xd6, 0xfa, 0xff, 0xff, 0xff, 
  0xff, 0xff, 0xff, 0xff, 0xb6, 0x92, 0xb6, 0x33, 0x33, 0x9b, 0xff, 0xff, 0xff, 0xff, 0xff, 

#elif LV_COLOR_DEPTH == 16
/*Pixel format: Red: 5 bit, Green: 6 bit, Blue: 5 bit*/

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

#elif LV_COLOR_DEPTH == 24
/*Pixel format: Fix 0xFF: 8 bit, Red: 8 bit, Green: 8 bit, Blue: 8 bit*/

  0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xec, 0xee, 0xef, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfb, 0xfa, 0xf9, 0xff, 0x5d, 0x9b, 0xe3, 0xff, 0x35, 0x8e, 0xf2, 0xff, 0x3a, 0x7c, 0xc7, 0xff, 0x85, 0xb4, 0xea, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
  0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xe0, 0xec, 0xf1, 0xff, 0x9e, 0xc2, 0xd0, 0xff, 0x8a, 0xb9, 0xc9, 0xff, 0x8d, 0xab, 0xbb, 0xff, 0x00, 0x38, 0x9a, 0xff, 0x00, 0x5d, 0xd7, 0xff, 0x00, 0x75, 0xff, 0xff, 0x00, 0x50, 0xb4, 0xff, 0x00, 0x75, 0xff, 0xff, 0x0a, 0x50, 0x9e, 0xff, 0xff, 0xff, 0xff, 0xff, 
  0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xd4, 0xe5, 0xeb, 0xff, 0x96, 0xbf, 0xcd, 0xff, 0x8b, 0xb8, 0xc9, 0xff, 0x93, 0xbd, 0xcd, 0xff, 0xa6, 0xcb, 0xd1, 0xff, 0x07, 0x57, 0xb7, 0xff, 0x00, 0x65, 0xe6, 0xff, 0x00, 0x52, 0xb4, 0xff, 0x00, 0x49, 0x9f, 0xff, 0x00, 0x6e, 0xec, 0xff, 0x00, 0x4b, 0xa1, 0xff, 0x00, 0x72, 0xff, 0xff, 0x8a, 0xb7, 0xe9, 0xff, 
  0xff, 0xff, 0xff, 0xff, 0x8e, 0xba, 0xca, 0xff, 0x8d, 0xb9, 0xc9, 0xff, 0x94, 0xbd, 0xcd, 0xff, 0x95, 0xbf, 0xce, 0xff, 0x97, 0xc2, 0xd3, 0xff, 0x94, 0xba, 0xc4, 0xff, 0x00, 0x41, 0xb3, 0xff, 0x00, 0x51, 0xb6, 0xff, 0x00, 0x49, 0xa1, 0xff, 0x00, 0x46, 0x9b, 0xff, 0x00, 0x42, 0x90, 0xff, 0x00, 0x74, 0xf8, 0xff, 0x00, 0x66, 0xe2, 0xff, 0x39, 0x82, 0xd5, 0xff, 
  0xcb, 0xc8, 0xb0, 0xff, 0x89, 0xc2, 0xe4, 0xff, 0x92, 0xc3, 0xde, 0xff, 0x93, 0xc4, 0xdf, 0xff, 0x96, 0xc3, 0xd5, 0xff, 0xa1, 0xbd, 0xb8, 0xff, 0x6a, 0x85, 0x95, 0xff, 0x00, 0x2f, 0x87, 0xff, 0x00, 0x47, 0xa4, 0xff, 0x00, 0x62, 0xdb, 0xff, 0x00, 0x4b, 0xa7, 0xff, 0x00, 0x49, 0xa0, 0xff, 0x00, 0x40, 0x8c, 0xff, 0x00, 0x60, 0xd5, 0xff, 0x36, 0x84, 0xdd, 0xff, 
  0xbf, 0x87, 0x13, 0xff, 0xc1, 0x8e, 0x20, 0xff, 0xc0, 0x9e, 0x44, 0xff, 0xbd, 0x94, 0x35, 0xff, 0xa5, 0x93, 0x59, 0xff, 0xb8, 0xa5, 0x63, 0xff, 0xb4, 0x83, 0x2a, 0xff, 0x00, 0x36, 0x97, 0xff, 0x00, 0x4f, 0xbc, 0xff, 0x00, 0x39, 0x85, 0xff, 0x00, 0x56, 0xc1, 0xff, 0x00, 0x48, 0xa0, 0xff, 0x00, 0x4f, 0xac, 0xff, 0x00, 0x64, 0xe7, 0xff, 0x68, 0xa2, 0xe4, 0xff, 
  0xc4, 0x8f, 0x1e, 0xff, 0xb8, 0x88, 0x21, 0xff, 0x6c, 0x59, 0x31, 0xff, 0x34, 0x37, 0x41, 0xff, 0x35, 0x36, 0x3c, 0xff, 0x3e, 0x44, 0x4c, 0xff, 0x78, 0x97, 0xa9, 0xff, 0x73, 0x8a, 0x8f, 0xff, 0x00, 0x1a, 0x65, 0xff, 0x00, 0x46, 0xa8, 0xff, 0x00, 0x58, 0xc7, 0xff, 0x00, 0x43, 0x96, 0xff, 0x00, 0x67, 0xea, 0xff, 0x00, 0x35, 0x93, 0xff, 0xf8, 0xf7, 0xf4, 0xff, 
  0xb2, 0x84, 0x29, 0xff, 0x2e, 0x35, 0x46, 0xff, 0x3b, 0x3e, 0x43, 0xff, 0x41, 0x41, 0x42, 0xff, 0x41, 0x41, 0x41, 0xff, 0x40, 0x40, 0x3f, 0xff, 0x38, 0x33, 0x31, 0xff, 0x6a, 0x7c, 0x81, 0xff, 0x78, 0x89, 0x8a, 0xff, 0x00, 0x33, 0x95, 0xff, 0x00, 0x36, 0x98, 0xff, 0x00, 0x36, 0x9d, 0xff, 0x11, 0x5d, 0xb9, 0xff, 0x80, 0xab, 0xbd, 0xff, 0xe2, 0xe9, 0xea, 0xff, 
  0x96, 0x98, 0xa1, 0xff, 0x38, 0x38, 0x38, 0xff, 0x42, 0x42, 0x42, 0xff, 0x42, 0x42, 0x42, 0xff, 0x42, 0x42, 0x42, 0xff, 0x42, 0x42, 0x42, 0xff, 0x41, 0x41, 0x41, 0xff, 0x37, 0x33, 0x31, 0xff, 0x7b, 0x9c, 0xaf, 0xff, 0xb4, 0x7f, 0x1f, 0xff, 0x7b, 0x9a, 0xa9, 0xff, 0x9a, 0xbf, 0xc7, 0xff, 0xa5, 0xca, 0xd1, 0xff, 0x8e, 0xbb, 0xca, 0xff, 0xff, 0xff, 0xff, 0xff, 
  0x81, 0x82, 0x82, 0xff, 0x3a, 0x3a, 0x3a, 0xff, 0x42, 0x42, 0x42, 0xff, 0x42, 0x42, 0x42, 0xff, 0x42, 0x42, 0x42, 0xff, 0x42, 0x42, 0x42, 0xff, 0x42, 0x42, 0x42, 0xff, 0x40, 0x3f, 0x3e, 0xff, 0x44, 0x4e, 0x58, 0xff, 0xbb, 0xa1, 0x55, 0xff, 0x9a, 0xc3, 0xd2, 0xff, 0x97, 0xc1, 0xd0, 0xff, 0x92, 0xbc, 0xcc, 0xff, 0xad, 0xcd, 0xd8, 0xff, 0xff, 0xff, 0xff, 0xff, 
  0xa0, 0xa0, 0xa0, 0xff, 0x36, 0x36, 0x36, 0xff, 0x42, 0x42, 0x42, 0xff, 0x42, 0x42, 0x42, 0xff, 0x42, 0x42, 0x42, 0xff, 0x42, 0x42, 0x42, 0xff, 0x42, 0x42, 0x42, 0xff, 0x41, 0x41, 0x41, 0xff, 0x35, 0x35, 0x3a, 0xff, 0xa7, 0x9d, 0x6f, 0xff, 0x94, 0xc4, 0xda, 0xff, 0x96, 0xbf, 0xce, 0xff, 0x8d, 0xb9, 0xca, 0xff, 0xda, 0xe8, 0xed, 0xff, 0xff, 0xff, 0xff, 0xff, 
  0xf1, 0xf1, 0xf1, 0xff, 0x24, 0x24, 0x24, 0xff, 0x41, 0x41, 0x41, 0xff, 0x42, 0x42, 0x42, 0xff, 0x42, 0x42, 0x42, 0xff, 0x42, 0x42, 0x42, 0xff, 0x42, 0x42, 0x42, 0xff, 0x41, 0x41, 0x41, 0xff, 0x35, 0x38, 0x3f, 0xff, 0xac, 0xa3, 0x74, 0xff, 0x94, 0xc3, 0xd9, 0xff, 0x95, 0xbe, 0xcd, 0xff, 0x89, 0xb7, 0xc8, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
  0xff, 0xff, 0xff, 0xff, 0x97, 0x98, 0x98, 0xff, 0x2b, 0x2b, 0x2b, 0xff, 0x41, 0x41, 0x41, 0xff, 0x42, 0x42, 0x42, 0xff, 0x42, 0x42, 0x42, 0xff, 0x42, 0x42, 0x42, 0xff, 0x3d, 0x3e, 0x42, 0xff, 0x4f, 0x4c, 0x46, 0xff, 0xc3, 0x9d, 0x3d, 0xff, 0x90, 0xc3, 0xdf, 0xff, 0x8c, 0xb9, 0xc9, 0xff, 0xab, 0xcc, 0xd7, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
  0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x9b, 0x9b, 0x9b, 0xff, 0x24, 0x25, 0x25, 0xff, 0x34, 0x34, 0x34, 0xff, 0x37, 0x37, 0x37, 0xff, 0x34, 0x35, 0x37, 0xff, 0x38, 0x3b, 0x43, 0xff, 0xbb, 0x89, 0x20, 0xff, 0xc0, 0x82, 0x02, 0xff, 0x97, 0xb7, 0xc3, 0xff, 0xbb, 0xd4, 0xe0, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
  0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfb, 0xfb, 0xfb, 0xff, 0xb3, 0xb3, 0xb3, 0xff, 0x99, 0x9a, 0x9a, 0xff, 0xaa, 0xaa, 0xb1, 0xff, 0xc3, 0x92, 0x2e, 0xff, 0xc5, 0x93, 0x28, 0xff, 0xdc, 0xc1, 0x87, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 

    #else
    #error "pic_netTopDown45small image :invalid color depth (check LV_COLOR_DEPTH in lv_conf.h)"
    #endif
    };


const lv_img_t pic_netTopDown45small = {
  .header.w = 15,			/*Image width in pixel count*/	
  .header.h = 15,			/*Image height in pixel count*/
  .header.alpha_byte = 0,		/*No alpha byte*/
  .header.chroma_keyed = 0,	/*No chroma keying*/
  .header.format = LV_IMG_FORMAT_INTERNAL_RAW,	/*It's a variable compiled into the code*/
  .pixel_map = pic_netTopDown45small_pixel_map	/*Pointer the array of image pixels.*/
};
