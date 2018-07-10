#include <stdint.h>
#include "lv_conf.h"
#include "lvgl/lv_draw/lv_draw.h"

static const uint8_t pic_playerTopDown45small_pixel_map[] = {

#if LV_COLOR_DEPTH == 1 || LV_COLOR_DEPTH == 8
/*Pixel format: Red: 3 bit, Green: 3 bit, Blue: 2 bit*/

  0xff, 0xff, 0xff, 0xff, 0xfb, 0xd6, 0xf1, 0xcc, 0xf5, 0xfb, 
  0xff, 0xff, 0xda, 0xda, 0xd5, 0xac, 0xa8, 0xa8, 0xcc, 0xf1, 
  0xff, 0xda, 0xd6, 0xd6, 0xb1, 0xa8, 0xa8, 0xa8, 0xa8, 0xcc, 
  0x97, 0x72, 0x92, 0x72, 0x6d, 0x88, 0xa8, 0xa8, 0xa8, 0xd0, 
  0x52, 0x29, 0x49, 0x49, 0x6d, 0x8c, 0xa8, 0xa8, 0xcc, 0xd6, 
  0x72, 0x49, 0x49, 0x49, 0x49, 0x6d, 0x6d, 0xb1, 0xd5, 0xfb, 
  0x92, 0x49, 0x49, 0x49, 0x49, 0x49, 0x72, 0xd6, 0xda, 0xff, 
  0xb6, 0x49, 0x49, 0x49, 0x49, 0x29, 0x72, 0xd6, 0xda, 0xff, 
  0xff, 0x92, 0x49, 0x49, 0x49, 0x29, 0x72, 0xda, 0xff, 0xff, 
  0xff, 0xff, 0xb6, 0x92, 0x72, 0x52, 0x77, 0xdb, 0xff, 0xff, 

#elif LV_COLOR_DEPTH == 16
/*Pixel format: Red: 5 bit, Green: 6 bit, Blue: 5 bit*/

  0xff, 0xff, 0xff, 0xff, 0xdf, 0xff, 0x7c, 0xf7, 0xf9, 0xe6, 0x91, 0xd5, 0x68, 0xe4, 0xc5, 0xdb, 0x0c, 0xed, 0xd9, 0xee, 
  0xff, 0xff, 0x1a, 0xef, 0x76, 0xde, 0x13, 0xd6, 0x4f, 0xc5, 0x22, 0xbb, 0xa0, 0xba, 0x80, 0xaa, 0x40, 0xdb, 0xcb, 0xe4, 
  0x5c, 0xef, 0x13, 0xce, 0xf2, 0xcd, 0xf2, 0xcd, 0x4b, 0xac, 0x40, 0xaa, 0x40, 0xa2, 0x60, 0xaa, 0xa0, 0xba, 0xc4, 0xdb, 
  0xfa, 0x85, 0xd4, 0x64, 0xb1, 0x84, 0xb2, 0x7c, 0xcd, 0x7b, 0x00, 0x92, 0x40, 0xaa, 0x80, 0xba, 0xa0, 0xba, 0x07, 0xdc, 
  0x75, 0x4c, 0xcc, 0x3a, 0x49, 0x4a, 0x69, 0x52, 0x6c, 0x63, 0x07, 0x8b, 0x20, 0xa2, 0x40, 0xa2, 0x22, 0xc3, 0x91, 0xdd, 
  0x11, 0x74, 0x08, 0x42, 0x08, 0x42, 0x08, 0x42, 0x08, 0x42, 0x4c, 0x63, 0xcd, 0x7b, 0x4b, 0xac, 0x4f, 0xc5, 0xf9, 0xe6, 
  0x30, 0x84, 0x08, 0x42, 0x08, 0x42, 0x08, 0x42, 0x08, 0x42, 0x69, 0x4a, 0x92, 0x6c, 0xf3, 0xc5, 0x13, 0xd6, 0x5b, 0xef, 
  0x55, 0xad, 0x08, 0x42, 0x08, 0x42, 0x08, 0x42, 0x08, 0x42, 0x49, 0x3a, 0x92, 0x6c, 0xf2, 0xcd, 0xb7, 0xde, 0xff, 0xff, 
  0x7d, 0xef, 0x51, 0x8c, 0x08, 0x42, 0x08, 0x42, 0x08, 0x42, 0xee, 0x32, 0xf5, 0x64, 0x13, 0xce, 0x5b, 0xef, 0xff, 0xff, 
  0xff, 0xff, 0x9e, 0xf7, 0x96, 0xb5, 0x71, 0x8c, 0x52, 0x7c, 0x75, 0x4c, 0x79, 0x6d, 0xfa, 0xde, 0xff, 0xff, 0xff, 0xff, 

#elif LV_COLOR_DEPTH == 24
/*Pixel format: Fix 0xFF: 8 bit, Red: 8 bit, Green: 8 bit, Blue: 8 bit*/

  0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf8, 0xfa, 0xfb, 0xff, 0xe6, 0xef, 0xf3, 0xff, 0xcd, 0xde, 0xe6, 0xff, 0x89, 0xb0, 0xd6, 0xff, 0x45, 0x8e, 0xe2, 0xff, 0x28, 0x7b, 0xda, 0xff, 0x61, 0xa2, 0xee, 0xff, 0xc9, 0xdb, 0xef, 0xff, 
  0xff, 0xff, 0xff, 0xff, 0xd1, 0xe2, 0xe9, 0xff, 0xb0, 0xce, 0xda, 0xff, 0x9d, 0xc3, 0xd1, 0xff, 0x79, 0xa8, 0xc6, 0xff, 0x17, 0x64, 0xbc, 0xff, 0x00, 0x54, 0xb8, 0xff, 0x00, 0x50, 0xad, 0xff, 0x00, 0x68, 0xdf, 0xff, 0x59, 0x9b, 0xe5, 0xff, 
  0xe6, 0xeb, 0xeb, 0xff, 0x9d, 0xc1, 0xcd, 0xff, 0x96, 0xbe, 0xcd, 0xff, 0x96, 0xbd, 0xc9, 0xff, 0x5f, 0x8b, 0xad, 0xff, 0x01, 0x4b, 0xa9, 0xff, 0x00, 0x4a, 0xa7, 0xff, 0x00, 0x4e, 0xac, 0xff, 0x00, 0x57, 0xbd, 0xff, 0x22, 0x78, 0xdb, 0xff, 
  0xd7, 0xbe, 0x87, 0xff, 0xa5, 0x99, 0x65, 0xff, 0x8e, 0x95, 0x80, 0xff, 0x93, 0x95, 0x79, 0xff, 0x6e, 0x7b, 0x7a, 0xff, 0x04, 0x40, 0x93, 0xff, 0x00, 0x4b, 0xac, 0xff, 0x00, 0x53, 0xba, 0xff, 0x00, 0x57, 0xbf, 0xff, 0x3a, 0x83, 0xd9, 0xff, 
  0xac, 0x8c, 0x49, 0xff, 0x67, 0x58, 0x3a, 0xff, 0x48, 0x49, 0x48, 0xff, 0x4c, 0x4f, 0x50, 0xff, 0x66, 0x6c, 0x65, 0xff, 0x3c, 0x62, 0x8a, 0xff, 0x04, 0x46, 0xa0, 0xff, 0x01, 0x4a, 0xa6, 0xff, 0x17, 0x67, 0xc5, 0xff, 0x8d, 0xb1, 0xda, 0xff, 
  0x88, 0x80, 0x70, 0xff, 0x42, 0x42, 0x42, 0xff, 0x42, 0x42, 0x42, 0xff, 0x42, 0x42, 0x42, 0xff, 0x42, 0x42, 0x42, 0xff, 0x65, 0x6b, 0x65, 0xff, 0x6e, 0x7a, 0x79, 0xff, 0x5e, 0x89, 0xaa, 0xff, 0x79, 0xa8, 0xc6, 0xff, 0xcb, 0xdd, 0xe3, 0xff, 
  0x84, 0x84, 0x84, 0xff, 0x42, 0x42, 0x42, 0xff, 0x42, 0x42, 0x42, 0xff, 0x42, 0x42, 0x42, 0xff, 0x42, 0x42, 0x42, 0xff, 0x49, 0x4c, 0x4e, 0xff, 0x94, 0x91, 0x6e, 0xff, 0x98, 0xbc, 0xc4, 0xff, 0x9b, 0xc2, 0xd0, 0xff, 0xde, 0xea, 0xee, 0xff, 
  0xab, 0xab, 0xab, 0xff, 0x41, 0x41, 0x41, 0xff, 0x42, 0x42, 0x42, 0xff, 0x42, 0x42, 0x42, 0xff, 0x42, 0x42, 0x42, 0xff, 0x4b, 0x48, 0x3f, 0xff, 0x95, 0x92, 0x6e, 0xff, 0x96, 0xbe, 0xcc, 0xff, 0xb9, 0xd5, 0xdf, 0xff, 0xfc, 0xfc, 0xfd, 0xff, 
  0xef, 0xef, 0xef, 0xff, 0x88, 0x88, 0x88, 0xff, 0x42, 0x42, 0x42, 0xff, 0x42, 0x42, 0x42, 0xff, 0x41, 0x41, 0x42, 0xff, 0x70, 0x5d, 0x35, 0xff, 0xac, 0x9d, 0x62, 0xff, 0x99, 0xc0, 0xcd, 0xff, 0xdb, 0xe8, 0xed, 0xff, 0xff, 0xff, 0xff, 0xff, 
  0xff, 0xff, 0xff, 0xff, 0xf1, 0xf1, 0xf1, 0xff, 0xb3, 0xb3, 0xb3, 0xff, 0x8f, 0x8f, 0x8f, 0xff, 0x90, 0x88, 0x7a, 0xff, 0xaf, 0x8e, 0x4b, 0xff, 0xc8, 0xae, 0x6c, 0xff, 0xd5, 0xde, 0xd8, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 

    #else
    #error "pic_playerTopDown45small image :invalid color depth (check LV_COLOR_DEPTH in lv_conf.h)"
    #endif
    };


const lv_img_t pic_playerTopDown45small = {
  .header.w = 10,			/*Image width in pixel count*/	
  .header.h = 10,			/*Image height in pixel count*/
  .header.alpha_byte = 0,		/*No alpha byte*/
  .header.chroma_keyed = 0,	/*No chroma keying*/
  .header.format = LV_IMG_FORMAT_INTERNAL_RAW,	/*It's a variable compiled into the code*/
  .pixel_map = pic_playerTopDown45small_pixel_map	/*Pointer the array of image pixels.*/
};
