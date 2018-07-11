#include <stdint.h>
#include "lv_conf.h"
#include "lvgl/lv_draw/lv_draw.h"

static const uint8_t pic_netTopDown0small_pixel_map[] = {

#if LV_COLOR_DEPTH == 1 || LV_COLOR_DEPTH == 8
/*Pixel format: Red: 3 bit, Green: 3 bit, Blue: 2 bit*/

  0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xda, 0xd6, 0xda, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
  0xff, 0xff, 0xff, 0x57, 0x0e, 0x52, 0xda, 0xd6, 0xd6, 0xd6, 0xda, 0xff, 0xff, 0xff, 0xff, 0xff, 
  0xff, 0xff, 0x77, 0x0e, 0x2e, 0x13, 0xb6, 0xda, 0xd6, 0xd6, 0xd6, 0xd6, 0xda, 0xff, 0xff, 0xff, 
  0xff, 0xdb, 0x24, 0x44, 0x44, 0x48, 0x52, 0x96, 0xfa, 0xda, 0xda, 0xb1, 0xac, 0xd1, 0xff, 0xff, 
  0xff, 0x24, 0x24, 0x49, 0x49, 0x49, 0x24, 0x92, 0x52, 0xd6, 0x84, 0xc8, 0xcc, 0xa8, 0xec, 0xd1, 
  0x92, 0x24, 0x49, 0x49, 0x49, 0x49, 0x24, 0x6d, 0x52, 0x84, 0xa8, 0x84, 0xc8, 0xa8, 0xa8, 0xc8, 
  0x49, 0x49, 0x49, 0x49, 0x49, 0x49, 0x49, 0x49, 0x96, 0xa4, 0xa8, 0xcc, 0xc8, 0x84, 0xec, 0xec, 
  0x24, 0x49, 0x49, 0x49, 0x49, 0x49, 0x49, 0x24, 0xb1, 0x64, 0x84, 0x88, 0xa8, 0x84, 0xc8, 0xa8, 
  0x49, 0x49, 0x49, 0x49, 0x49, 0x49, 0x49, 0x24, 0x96, 0xa4, 0xc8, 0xa8, 0xa8, 0x84, 0xa8, 0xec, 
  0x6d, 0x24, 0x49, 0x49, 0x49, 0x49, 0x24, 0x6d, 0x52, 0x84, 0x84, 0xa8, 0xec, 0xa8, 0xec, 0xa4, 
  0xff, 0x24, 0x49, 0x49, 0x49, 0x44, 0x24, 0x92, 0x32, 0xb6, 0x88, 0xc8, 0xec, 0xa8, 0xe8, 0xd6, 
  0xff, 0xdb, 0x24, 0x44, 0x44, 0x29, 0x32, 0x76, 0xfa, 0xda, 0xda, 0xb1, 0xad, 0xd5, 0xff, 0xff, 
  0xff, 0xff, 0x77, 0x0e, 0x32, 0x13, 0xb6, 0xda, 0xd6, 0xd6, 0xd6, 0xd6, 0xff, 0xff, 0xff, 0xff, 
  0xff, 0xff, 0xff, 0x13, 0x13, 0x96, 0xda, 0xd6, 0xd6, 0xd6, 0xda, 0xff, 0xff, 0xff, 0xff, 0xff, 
  0xff, 0xff, 0xff, 0xff, 0x57, 0xd6, 0xd6, 0xda, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
  0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 

#elif LV_COLOR_DEPTH == 16
/*Pixel format: Red: 5 bit, Green: 6 bit, Blue: 5 bit*/

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

#elif LV_COLOR_DEPTH == 24
/*Pixel format: Fix 0xFF: 8 bit, Red: 8 bit, Green: 8 bit, Blue: 8 bit*/

  0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfd, 0xf8, 0xff, 0xee, 0xf3, 0xfa, 0xff, 0xa5, 0xc6, 0xd4, 0xff, 0x90, 0xbb, 0xcb, 0xff, 0xb6, 0xd2, 0xdd, 0xff, 0xf8, 0xfb, 0xfc, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
  0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xce, 0xa4, 0x4a, 0xff, 0xbb, 0x7c, 0x00, 0xff, 0xa7, 0x9a, 0x5d, 0xff, 0x8f, 0xc2, 0xdd, 0xff, 0x95, 0xbe, 0xcd, 0xff, 0x91, 0xbc, 0xcc, 0xff, 0x88, 0xb6, 0xc7, 0xff, 0xaf, 0xce, 0xda, 0xff, 0xf7, 0xfa, 0xfb, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
  0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xd1, 0xb2, 0x76, 0xff, 0xa3, 0x75, 0x16, 0xff, 0xa7, 0x7e, 0x29, 0xff, 0xcc, 0x8d, 0x0f, 0xff, 0x9e, 0xbe, 0xbe, 0xff, 0x93, 0xc2, 0xda, 0xff, 0x95, 0xbf, 0xce, 0xff, 0x95, 0xbe, 0xcd, 0xff, 0x92, 0xbd, 0xcc, 0xff, 0x90, 0xbd, 0xca, 0xff, 0xb4, 0xce, 0xd3, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
  0xff, 0xff, 0xff, 0xff, 0xdc, 0xdc, 0xdc, 0xff, 0x34, 0x35, 0x3c, 0xff, 0x34, 0x39, 0x43, 0xff, 0x34, 0x39, 0x43, 0xff, 0x38, 0x40, 0x4f, 0xff, 0x98, 0x89, 0x5b, 0xff, 0xab, 0xab, 0x83, 0xff, 0x92, 0xc6, 0xe3, 0xff, 0x99, 0xc3, 0xd1, 0xff, 0xa5, 0xca, 0xd0, 0xff, 0x5c, 0x8f, 0xb8, 0xff, 0x2d, 0x6d, 0xaa, 0xff, 0x5c, 0x8f, 0xc8, 0xff, 0xdf, 0xe4, 0xeb, 0xff, 0xff, 0xff, 0xff, 0xff, 
  0xf9, 0xf9, 0xf9, 0xff, 0x24, 0x24, 0x24, 0xff, 0x3f, 0x3f, 0x3f, 0xff, 0x42, 0x42, 0x42, 0xff, 0x42, 0x42, 0x42, 0xff, 0x40, 0x40, 0x40, 0xff, 0x34, 0x37, 0x3e, 0xff, 0x98, 0x9e, 0x88, 0xff, 0xb2, 0x93, 0x45, 0xff, 0x8b, 0xb2, 0xc3, 0xff, 0x01, 0x3b, 0x87, 0xff, 0x00, 0x57, 0xd6, 0xff, 0x00, 0x60, 0xde, 0xff, 0x00, 0x4c, 0xb5, 0xff, 0x00, 0x62, 0xfe, 0xff, 0x74, 0x9b, 0xc7, 0xff, 
  0x80, 0x80, 0x80, 0xff, 0x39, 0x39, 0x39, 0xff, 0x42, 0x42, 0x42, 0xff, 0x42, 0x42, 0x42, 0xff, 0x42, 0x42, 0x42, 0xff, 0x42, 0x42, 0x42, 0xff, 0x3d, 0x3c, 0x3b, 0xff, 0x57, 0x6d, 0x7e, 0xff, 0xbb, 0x97, 0x4a, 0xff, 0x00, 0x35, 0x86, 0xff, 0x00, 0x44, 0xa4, 0xff, 0x00, 0x3c, 0x88, 0xff, 0x00, 0x5f, 0xd0, 0xff, 0x00, 0x53, 0xb3, 0xff, 0x00, 0x54, 0xb3, 0xff, 0x00, 0x4f, 0xd1, 0xff, 
  0x42, 0x42, 0x42, 0xff, 0x41, 0x41, 0x41, 0xff, 0x42, 0x42, 0x42, 0xff, 0x42, 0x42, 0x42, 0xff, 0x42, 0x42, 0x42, 0xff, 0x42, 0x42, 0x42, 0xff, 0x41, 0x40, 0x40, 0xff, 0x40, 0x40, 0x41, 0xff, 0x8f, 0xa0, 0x9b, 0xff, 0x00, 0x39, 0xa5, 0xff, 0x00, 0x53, 0xbe, 0xff, 0x00, 0x61, 0xd8, 0xff, 0x00, 0x58, 0xc2, 0xff, 0x00, 0x3d, 0x83, 0xff, 0x00, 0x77, 0xff, 0xff, 0x00, 0x78, 0xff, 0xff, 
  0x3f, 0x3f, 0x3f, 0xff, 0x42, 0x42, 0x42, 0xff, 0x42, 0x42, 0x42, 0xff, 0x42, 0x42, 0x42, 0xff, 0x42, 0x42, 0x42, 0xff, 0x42, 0x42, 0x42, 0xff, 0x41, 0x41, 0x41, 0xff, 0x3c, 0x38, 0x35, 0xff, 0x76, 0x9b, 0xae, 0xff, 0x00, 0x26, 0x71, 0xff, 0x00, 0x3b, 0x87, 0xff, 0x00, 0x44, 0x99, 0xff, 0x00, 0x50, 0xb1, 0xff, 0x00, 0x3f, 0x89, 0xff, 0x00, 0x59, 0xc0, 0xff, 0x00, 0x55, 0xba, 0xff, 
  0x41, 0x41, 0x41, 0xff, 0x41, 0x41, 0x41, 0xff, 0x42, 0x42, 0x42, 0xff, 0x42, 0x42, 0x42, 0xff, 0x42, 0x42, 0x42, 0xff, 0x42, 0x42, 0x42, 0xff, 0x41, 0x41, 0x40, 0xff, 0x3f, 0x3f, 0x3f, 0xff, 0x91, 0xa2, 0x9c, 0xff, 0x00, 0x38, 0xa5, 0xff, 0x00, 0x55, 0xc3, 0xff, 0x00, 0x52, 0xb8, 0xff, 0x00, 0x4c, 0xa7, 0xff, 0x00, 0x3d, 0x84, 0xff, 0x00, 0x58, 0xbc, 0xff, 0x00, 0x7b, 0xff, 0xff, 
  0x7a, 0x7a, 0x7b, 0xff, 0x3a, 0x3a, 0x3a, 0xff, 0x42, 0x42, 0x42, 0xff, 0x42, 0x42, 0x42, 0xff, 0x42, 0x42, 0x42, 0xff, 0x42, 0x42, 0x42, 0xff, 0x3e, 0x3c, 0x3b, 0xff, 0x54, 0x69, 0x77, 0xff, 0xb8, 0x99, 0x54, 0xff, 0x07, 0x3b, 0x8a, 0xff, 0x00, 0x39, 0x8c, 0xff, 0x00, 0x4b, 0xa7, 0xff, 0x00, 0x6b, 0xea, 0xff, 0x00, 0x53, 0xb3, 0xff, 0x00, 0x74, 0xf7, 0xff, 0x00, 0x3b, 0xaa, 0xff, 
  0xf1, 0xf1, 0xf1, 0xff, 0x22, 0x22, 0x22, 0xff, 0x40, 0x40, 0x40, 0xff, 0x42, 0x42, 0x42, 0xff, 0x41, 0x41, 0x42, 0xff, 0x3d, 0x3f, 0x42, 0xff, 0x31, 0x34, 0x3f, 0xff, 0x92, 0x9e, 0x91, 0xff, 0xb6, 0x90, 0x37, 0xff, 0x87, 0xaa, 0xb8, 0xff, 0x04, 0x43, 0x93, 0xff, 0x00, 0x54, 0xd2, 0xff, 0x00, 0x61, 0xe3, 0xff, 0x00, 0x46, 0xab, 0xff, 0x00, 0x5d, 0xf6, 0xff, 0x89, 0xb1, 0xde, 0xff, 
  0xff, 0xff, 0xff, 0xff, 0xce, 0xce, 0xce, 0xff, 0x2d, 0x30, 0x38, 0xff, 0x35, 0x3a, 0x43, 0xff, 0x32, 0x38, 0x45, 0xff, 0x57, 0x4d, 0x38, 0xff, 0xa7, 0x80, 0x2a, 0xff, 0xb3, 0xa8, 0x6e, 0xff, 0x92, 0xc5, 0xe2, 0xff, 0x99, 0xc3, 0xd2, 0xff, 0xa7, 0xcc, 0xd2, 0xff, 0x60, 0x92, 0xb6, 0xff, 0x49, 0x7d, 0xb8, 0xff, 0x7f, 0xa4, 0xcf, 0xff, 0xe9, 0xeb, 0xed, 0xff, 0xff, 0xff, 0xff, 0xff, 
  0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xcb, 0xad, 0x73, 0xff, 0x97, 0x70, 0x1f, 0xff, 0xbb, 0x8a, 0x21, 0xff, 0xd0, 0x90, 0x0f, 0xff, 0x9d, 0xbd, 0xbd, 0xff, 0x92, 0xc3, 0xdc, 0xff, 0x95, 0xbf, 0xce, 0xff, 0x95, 0xbe, 0xcd, 0xff, 0x91, 0xbc, 0xcc, 0xff, 0x8c, 0xbb, 0xc9, 0xff, 0xdb, 0xe5, 0xe3, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
  0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xc0, 0x8a, 0x15, 0xff, 0xc0, 0x83, 0x05, 0xff, 0xa0, 0xaf, 0x9b, 0xff, 0x92, 0xc2, 0xda, 0xff, 0x92, 0xbc, 0xcc, 0xff, 0x8d, 0xb9, 0xc9, 0xff, 0x8c, 0xb9, 0xc9, 0xff, 0xb8, 0xd4, 0xde, 0xff, 0xe3, 0xe9, 0xeb, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
  0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xd8, 0xae, 0x5b, 0xff, 0x95, 0xbd, 0xcd, 0xff, 0x85, 0xb5, 0xc8, 0xff, 0xa7, 0xca, 0xd6, 0xff, 0xda, 0xe8, 0xee, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
  0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 

    #else
    #error "pic_netTopDown0small image :invalid color depth (check LV_COLOR_DEPTH in lv_conf.h)"
    #endif
    };


const lv_img_t pic_netTopDown0small = {
  .header.w = 16,			/*Image width in pixel count*/	
  .header.h = 16,			/*Image height in pixel count*/
  .header.alpha_byte = 0,		/*No alpha byte*/
  .header.chroma_keyed = 0,	/*No chroma keying*/
  .header.format = LV_IMG_FORMAT_INTERNAL_RAW,	/*It's a variable compiled into the code*/
  .pixel_map = pic_netTopDown0small_pixel_map	/*Pointer the array of image pixels.*/
};

