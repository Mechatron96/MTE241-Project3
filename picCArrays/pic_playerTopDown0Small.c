#include <stdint.h>
#include "lv_conf.h"
#include "lvgl/lv_draw/lv_draw.h"

static const uint8_t pic_playerTopDown0Small_pixel_map[] = {

#if LV_COLOR_DEPTH == 1 || LV_COLOR_DEPTH == 8
/*Pixel format: Red: 3 bit, Green: 3 bit, Blue: 2 bit*/

  0xff, 0xbb, 0xbb, 0xda, 0xda, 0xff, 0xff, 0xff, 0xff, 0xff, 
  0xbb, 0x2e, 0x52, 0xb6, 0xd6, 0xda, 0xda, 0xff, 0xff, 0xff, 
  0x6d, 0x49, 0x49, 0x71, 0x96, 0xd5, 0xd1, 0xd1, 0xf6, 0xff, 
  0x49, 0x49, 0x49, 0x49, 0x71, 0x88, 0xa8, 0xa8, 0xcc, 0xf5, 
  0x49, 0x49, 0x49, 0x49, 0x6d, 0x88, 0xa8, 0xa8, 0xc8, 0xf0, 
  0x49, 0x49, 0x49, 0x49, 0x8d, 0xa8, 0xa8, 0xa8, 0xc8, 0xf0, 
  0x49, 0x49, 0x49, 0x49, 0x72, 0x88, 0xa8, 0xc8, 0xcc, 0xf6, 
  0x6d, 0x49, 0x29, 0x72, 0x96, 0xb5, 0xd1, 0xd1, 0xfa, 0xff, 
  0xbb, 0x2e, 0x52, 0xb6, 0xd6, 0xda, 0xda, 0xff, 0xff, 0xff, 
  0xff, 0x9b, 0x96, 0xda, 0xfb, 0xff, 0xff, 0xff, 0xff, 0xff, 

#elif LV_COLOR_DEPTH == 16
/*Pixel format: Red: 5 bit, Green: 6 bit, Blue: 5 bit*/

  0xff, 0xff, 0xfd, 0xbe, 0x7a, 0xb6, 0x55, 0xd6, 0x96, 0xde, 0x3a, 0xef, 0xdf, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
  0x5a, 0xae, 0xf4, 0x33, 0x74, 0x54, 0xb3, 0xad, 0xf2, 0xcd, 0x13, 0xce, 0x96, 0xde, 0x3b, 0xef, 0xff, 0xff, 0xff, 0xff, 
  0x8e, 0x6b, 0x28, 0x42, 0x8a, 0x42, 0x2f, 0x74, 0x73, 0x9d, 0x0e, 0xc5, 0x08, 0xc4, 0x08, 0xc4, 0xf2, 0xf5, 0xbe, 0xf7, 
  0x08, 0x42, 0x08, 0x42, 0x08, 0x42, 0xea, 0x5a, 0x0f, 0x74, 0xc4, 0x92, 0x80, 0xb2, 0xa0, 0xb2, 0x00, 0xd3, 0x6f, 0xe5, 
  0x08, 0x42, 0x08, 0x42, 0x08, 0x42, 0x28, 0x4a, 0x6a, 0x7b, 0x00, 0x9a, 0x60, 0xaa, 0x60, 0xa2, 0xe0, 0xca, 0x26, 0xe4, 
  0x08, 0x42, 0x08, 0x42, 0x08, 0x42, 0x28, 0x4a, 0x6b, 0x83, 0x20, 0xa2, 0x60, 0xaa, 0x60, 0xaa, 0xe0, 0xca, 0x26, 0xe4, 
  0x08, 0x42, 0x08, 0x42, 0x08, 0x42, 0xea, 0x5a, 0x30, 0x74, 0xa4, 0x92, 0x80, 0xb2, 0xc0, 0xc2, 0x00, 0xd3, 0xb0, 0xed, 
  0x8e, 0x6b, 0x29, 0x42, 0xac, 0x3a, 0x30, 0x6c, 0x74, 0x9d, 0x2f, 0xbd, 0x49, 0xc4, 0x8b, 0xcc, 0x13, 0xf6, 0xff, 0xff, 
  0x3a, 0xae, 0xf4, 0x2b, 0xd5, 0x5c, 0xb3, 0xb5, 0xf2, 0xcd, 0x13, 0xd6, 0x96, 0xde, 0x9d, 0xf7, 0xff, 0xff, 0xff, 0xff, 
  0xff, 0xff, 0x5b, 0x9e, 0xf7, 0x9d, 0x55, 0xd6, 0xd8, 0xe6, 0x7c, 0xf7, 0xdf, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 

#elif LV_COLOR_DEPTH == 24
/*Pixel format: Fix 0xFF: 8 bit, Red: 8 bit, Green: 8 bit, Blue: 8 bit*/

  0xff, 0xff, 0xff, 0xff, 0xeb, 0xdc, 0xbc, 0xff, 0xd1, 0xce, 0xb6, 0xff, 0xaa, 0xca, 0xd6, 0xff, 0xb4, 0xd1, 0xdc, 0xff, 0xd7, 0xe7, 0xec, 0xff, 0xf9, 0xfb, 0xfc, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
  0xd5, 0xc8, 0xac, 0xff, 0xa2, 0x7e, 0x32, 0xff, 0xa2, 0x8d, 0x51, 0xff, 0x9d, 0xb5, 0xad, 0xff, 0x96, 0xbf, 0xce, 0xff, 0x98, 0xc0, 0xce, 0xff, 0xb4, 0xd0, 0xdb, 0xff, 0xd9, 0xe4, 0xe9, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
  0x72, 0x70, 0x6b, 0xff, 0x47, 0x45, 0x40, 0xff, 0x56, 0x52, 0x47, 0xff, 0x7f, 0x85, 0x74, 0xff, 0x9e, 0xad, 0x9c, 0xff, 0x76, 0xa3, 0xc0, 0xff, 0x41, 0x83, 0xc3, 0xff, 0x41, 0x80, 0xc5, 0xff, 0x90, 0xbd, 0xf1, 0xff, 0xf4, 0xf4, 0xf5, 0xff, 
  0x42, 0x42, 0x42, 0xff, 0x42, 0x42, 0x42, 0xff, 0x42, 0x42, 0x42, 0xff, 0x55, 0x5c, 0x5e, 0xff, 0x7e, 0x82, 0x71, 0xff, 0x25, 0x58, 0x95, 0xff, 0x00, 0x51, 0xb5, 0xff, 0x00, 0x54, 0xb7, 0xff, 0x00, 0x63, 0xd4, 0xff, 0x7f, 0xaf, 0xe6, 0xff, 
  0x42, 0x42, 0x42, 0xff, 0x42, 0x42, 0x42, 0xff, 0x42, 0x42, 0x42, 0xff, 0x45, 0x47, 0x48, 0xff, 0x55, 0x6c, 0x7e, 0xff, 0x02, 0x42, 0x99, 0xff, 0x00, 0x4d, 0xad, 0xff, 0x00, 0x4c, 0xa5, 0xff, 0x00, 0x5e, 0xca, 0xff, 0x30, 0x84, 0xe3, 0xff, 
  0x42, 0x42, 0x42, 0xff, 0x42, 0x42, 0x42, 0xff, 0x42, 0x42, 0x42, 0xff, 0x45, 0x47, 0x48, 0xff, 0x58, 0x6f, 0x80, 0xff, 0x03, 0x46, 0xa0, 0xff, 0x00, 0x4d, 0xae, 0xff, 0x00, 0x4d, 0xa9, 0xff, 0x00, 0x5f, 0xcb, 0xff, 0x30, 0x84, 0xe2, 0xff, 
  0x42, 0x42, 0x42, 0xff, 0x42, 0x42, 0x42, 0xff, 0x42, 0x42, 0x42, 0xff, 0x55, 0x5c, 0x5e, 0xff, 0x81, 0x84, 0x71, 0xff, 0x27, 0x57, 0x90, 0xff, 0x00, 0x51, 0xb5, 0xff, 0x00, 0x59, 0xc1, 0xff, 0x03, 0x63, 0xd2, 0xff, 0x87, 0xb5, 0xea, 0xff, 
  0x72, 0x70, 0x6b, 0xff, 0x49, 0x46, 0x40, 0xff, 0x63, 0x56, 0x3a, 0xff, 0x85, 0x85, 0x6b, 0xff, 0xa0, 0xae, 0x99, 0xff, 0x7a, 0xa5, 0xbd, 0xff, 0x4a, 0x88, 0xc4, 0xff, 0x5d, 0x92, 0xcf, 0xff, 0x9b, 0xc3, 0xf2, 0xff, 0xff, 0xff, 0xff, 0xff, 
  0xd5, 0xc7, 0xaa, 0xff, 0xa3, 0x7c, 0x29, 0xff, 0xaa, 0x98, 0x5a, 0xff, 0x9c, 0xb7, 0xb3, 0xff, 0x96, 0xbf, 0xce, 0xff, 0x9b, 0xc1, 0xd0, 0xff, 0xb5, 0xd0, 0xda, 0xff, 0xed, 0xf1, 0xf3, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
  0xff, 0xff, 0xff, 0xff, 0xdf, 0xca, 0x9a, 0xff, 0xb9, 0xbc, 0x9f, 0xff, 0xa9, 0xca, 0xd6, 0xff, 0xc4, 0xda, 0xe3, 0xff, 0xe1, 0xec, 0xf1, 0xff, 0xf9, 0xfb, 0xfc, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 

    #else
    #error "pic_playerTopDown0Small image :invalid color depth (check LV_COLOR_DEPTH in lv_conf.h)"
    #endif
    };


const lv_img_t pic_playerTopDown0Small = {
  .header.w = 10,			/*Image width in pixel count*/	
  .header.h = 10,			/*Image height in pixel count*/
  .header.alpha_byte = 0,		/*No alpha byte*/
  .header.chroma_keyed = 0,	/*No chroma keying*/
  .header.format = LV_IMG_FORMAT_INTERNAL_RAW,	/*It's a variable compiled into the code*/
  .pixel_map = pic_playerTopDown0Small_pixel_map	/*Pointer the array of image pixels.*/
};

