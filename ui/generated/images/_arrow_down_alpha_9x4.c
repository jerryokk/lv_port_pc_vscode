#if defined(LV_LVGL_H_INCLUDE_SIMPLE)
#include "lvgl.h"
#else
#include "lvgl/lvgl.h"
#endif


#ifndef LV_ATTRIBUTE_MEM_ALIGN
#define LV_ATTRIBUTE_MEM_ALIGN
#endif

#ifndef LV_ATTRIBUTE_IMG__ARROW_DOWN_ALPHA_9X4
#define LV_ATTRIBUTE_IMG__ARROW_DOWN_ALPHA_9X4
#endif

const LV_ATTRIBUTE_MEM_ALIGN LV_ATTRIBUTE_LARGE_CONST LV_ATTRIBUTE_IMG__ARROW_DOWN_ALPHA_9X4 uint8_t _arrow_down_alpha_9x4_map[] = {
#if LV_COLOR_DEPTH == 1 || LV_COLOR_DEPTH == 8
  /*Pixel format: Alpha 8 bit, Red: 3 bit, Green: 3 bit, Blue: 2 bit*/
  0xff, 0xa3, 0xff, 0x44, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0x3a, 0xff, 0xa6, 
  0xff, 0x15, 0xff, 0xc7, 0xff, 0x6d, 0xff, 0x02, 0x00, 0x00, 0xff, 0x01, 0xff, 0x61, 0xff, 0xca, 0xff, 0x16, 
  0x00, 0x00, 0xff, 0x06, 0xff, 0x80, 0xff, 0xb7, 0xff, 0x0f, 0xff, 0xa5, 0xff, 0x81, 0xff, 0x07, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0xff, 0x04, 0xff, 0x58, 0xff, 0xc9, 0xff, 0x5a, 0xff, 0x04, 0x00, 0x00, 0x00, 0x00, 
#endif
#if LV_COLOR_DEPTH == 16 && LV_COLOR_16_SWAP == 0
  /*Pixel format: Alpha 8 bit, Red: 5 bit, Green: 6 bit, Blue: 5 bit*/
  0xff, 0xff, 0xa3, 0xff, 0xff, 0x44, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0xff, 0x3a, 0xff, 0xff, 0xa6, 
  0xff, 0xff, 0x15, 0xff, 0xff, 0xc7, 0xff, 0xff, 0x6d, 0xff, 0xff, 0x02, 0x00, 0x00, 0x00, 0xff, 0xff, 0x01, 0xff, 0xff, 0x61, 0xff, 0xff, 0xca, 0xff, 0xff, 0x16, 
  0x00, 0x00, 0x00, 0xff, 0xff, 0x06, 0xff, 0xff, 0x80, 0xff, 0xff, 0xb7, 0xff, 0xff, 0x0f, 0xff, 0xff, 0xa5, 0xff, 0xff, 0x81, 0xff, 0xff, 0x07, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0xff, 0x04, 0xff, 0xff, 0x58, 0xff, 0xff, 0xc9, 0xff, 0xff, 0x5a, 0xff, 0xff, 0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
#endif
#if LV_COLOR_DEPTH == 16 && LV_COLOR_16_SWAP != 0
  /*Pixel format: Alpha 8 bit, Red: 5 bit, Green: 6 bit, Blue: 5 bit  BUT the 2  color bytes are swapped*/
  0xff, 0xff, 0xa3, 0xff, 0xff, 0x44, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0xff, 0x3a, 0xff, 0xff, 0xa6, 
  0xff, 0xff, 0x15, 0xff, 0xff, 0xc7, 0xff, 0xff, 0x6d, 0xff, 0xff, 0x02, 0x00, 0x00, 0x00, 0xff, 0xff, 0x01, 0xff, 0xff, 0x61, 0xff, 0xff, 0xca, 0xff, 0xff, 0x16, 
  0x00, 0x00, 0x00, 0xff, 0xff, 0x06, 0xff, 0xff, 0x80, 0xff, 0xff, 0xb7, 0xff, 0xff, 0x0f, 0xff, 0xff, 0xa5, 0xff, 0xff, 0x81, 0xff, 0xff, 0x07, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0xff, 0x04, 0xff, 0xff, 0x58, 0xff, 0xff, 0xc9, 0xff, 0xff, 0x5a, 0xff, 0xff, 0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
#endif
#if LV_COLOR_DEPTH == 32
  /*Pixel format: Alpha 8 bit, Red: 8 bit, Green: 8 bit, Blue: 8 bit*/
  0xff, 0xff, 0xff, 0xa3, 0xff, 0xff, 0xff, 0x44, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0x3a, 0xff, 0xff, 0xff, 0xa6, 
  0xff, 0xff, 0xff, 0x15, 0xff, 0xff, 0xff, 0xc7, 0xff, 0xff, 0xff, 0x6d, 0xff, 0xff, 0xff, 0x02, 0x00, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0x01, 0xff, 0xff, 0xff, 0x61, 0xff, 0xff, 0xff, 0xca, 0xff, 0xff, 0xff, 0x16, 
  0x00, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0x06, 0xff, 0xff, 0xff, 0x80, 0xff, 0xff, 0xff, 0xb7, 0xff, 0xff, 0xff, 0x0f, 0xff, 0xff, 0xff, 0xa5, 0xff, 0xff, 0xff, 0x81, 0xff, 0xff, 0xff, 0x07, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0x04, 0xff, 0xff, 0xff, 0x58, 0xff, 0xff, 0xff, 0xc9, 0xff, 0xff, 0xff, 0x5a, 0xff, 0xff, 0xff, 0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
#endif
};

const lv_img_dsc_t _arrow_down_alpha_9x4 = {
  .header.cf = LV_IMG_CF_TRUE_COLOR_ALPHA,
  .header.always_zero = 0,
  .header.reserved = 0,
  .header.w = 9,
  .header.h = 4,
  .data_size = 36 * LV_IMG_PX_SIZE_ALPHA_BYTE,
  .data = _arrow_down_alpha_9x4_map,
};