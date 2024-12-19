/*
* Copyright 2024 NXP
* NXP Proprietary. This software is owned or controlled by NXP and may only be used strictly in
* accordance with the applicable license terms. By expressly accepting such terms or by downloading, installing,
* activating and/or otherwise using the software, you are agreeing that you have read, and that you agree to
* comply with and are bound by, such license terms.  If you do not agree to be bound by the applicable license
* terms, then you may not retain, install, activate or otherwise use the software.
*/

#ifndef GUI_GUIDER_H
#define GUI_GUIDER_H
#ifdef __cplusplus
extern "C" {
#endif

#include "lvgl.h"

typedef struct
{
  
	lv_obj_t *ui_Aircon;
	bool ui_Aircon_del;
	lv_obj_t *ui_Aircon_icn_fan_low;
	lv_obj_t *ui_Aircon_icn_dry;
	lv_obj_t *ui_Aircon_icn_fan_high;
	lv_obj_t *ui_Aircon_icn_fan;
	lv_obj_t *ui_Aircon_icn_cool;
	lv_obj_t *ui_Aircon_aircon_cool;
	lv_obj_t *ui_Aircon_aircon_fan;
	lv_obj_t *ui_Aircon_aircon_swing;
	lv_obj_t *ui_Aircon_Img_Bg;
	lv_obj_t *ui_Aircon_Img_Lable_Bg;
	lv_obj_t *ui_Aircon_Label_Air;
	lv_obj_t *ui_Aircon_Img_Swing;
	lv_obj_t *ui_Aircon_Cont;
	lv_obj_t *ui_Aircon_line;
	lv_obj_t *ui_Aircon_Label_Temp;
	lv_obj_t *ui_Aircon_Btn_TempUp;
	lv_obj_t *ui_Aircon_Btn_TempUp_label;
	lv_obj_t *ui_Aircon_Label_SetTemp;
	lv_obj_t *ui_Aircon_Label_Cen;
	lv_obj_t *ui_Aircon_Btn_TempDown;
	lv_obj_t *ui_Aircon_Btn_TempDown_label;
	lv_obj_t *ui_Aircon_Img_TemUp;
	lv_obj_t *ui_Aircon_Img_TempDown;
	lv_obj_t *ui_Aircon_Roller_Mode;
	lv_obj_t *ui_Aircon_Btn_Swing;
	lv_obj_t *ui_Aircon_Btn_Swing_label;
	lv_obj_t *ui_Aircon_Label_Swing;
	lv_obj_t *ui_Aircon_line_1;
	lv_obj_t *ui_Aircon_line_2;
	lv_obj_t *ui_Aircon_line_3;
	lv_obj_t *ui_Aircon_line_4;
	lv_obj_t *ui_Aircon_line_5;
	lv_obj_t *ui_Aircon_Label_Timer;
	lv_obj_t *ui_Aircon_Label_Mode;
	lv_obj_t *ui_Aircon_Label_Fan;
	lv_obj_t *ui_Aircon_Slider_Fan;
	lv_obj_t *ui_Aircon_Label_Low;
	lv_obj_t *ui_Aircon_Label_Medium;
	lv_obj_t *ui_Aircon_Label_High;
	lv_obj_t *ui_Aircon_Label_Comp;
	lv_obj_t *ui_Aircon_Label_On;
	lv_obj_t *ui_Aircon_Img_Comp;
	lv_obj_t *ui_Aircon_Label_FanSt;
	lv_obj_t *ui_Aircon_Label_FanState;
	lv_obj_t *ui_Aircon_Img_FanSt;
	lv_obj_t *ui_Aircon_Btn_TimerUp;
	lv_obj_t *ui_Aircon_Btn_TimerUp_label;
	lv_obj_t *ui_Aircon_Img_TimerUp;
	lv_obj_t *ui_Aircon_Btn_TimerDown;
	lv_obj_t *ui_Aircon_Btn_TimerDown_label;
	lv_obj_t *ui_Aircon_Img_TimerDown;
	lv_obj_t *ui_Aircon_Label_TimerHour;
	lv_obj_t *ui_Aircon_Label_TimerPoints;
	lv_obj_t *ui_Aircon_Label_TimerMin;
	lv_obj_t *ui_Aircon_Img_Fan;
	lv_obj_t *ui_Aircon_Img_Cool;
}lv_ui;

typedef void (*ui_setup_scr_t)(lv_ui * ui);

void ui_init_style(lv_style_t * style);

void ui_load_scr_animation(lv_ui *ui, lv_obj_t ** new_scr, bool new_scr_del, bool * old_scr_del, ui_setup_scr_t setup_scr,
                           lv_scr_load_anim_t anim_type, uint32_t time, uint32_t delay, bool is_clean, bool auto_del);

void ui_animation(void * var, int32_t duration, int32_t delay, int32_t start_value, int32_t end_value, lv_anim_path_cb_t path_cb,
                       uint16_t repeat_cnt, uint32_t repeat_delay, uint32_t playback_time, uint32_t playback_delay,
                       lv_anim_exec_xcb_t exec_cb, lv_anim_start_cb_t start_cb, lv_anim_ready_cb_t ready_cb, lv_anim_deleted_cb_t deleted_cb);


void init_scr_del_flag(lv_ui *ui);

void setup_ui(lv_ui *ui);


extern lv_ui guider_ui;


void setup_scr_ui_Aircon(lv_ui *ui);
LV_IMG_DECLARE(_icn_fan_low_alpha_11x10);
LV_IMG_DECLARE(_icn_dry_alpha_10x11);
LV_IMG_DECLARE(_icn_fan_high_alpha_11x10);
LV_IMG_DECLARE(_icn_fan_alpha_10x11);
LV_IMG_DECLARE(_icn_cool_alpha_9x10);
#include "extra/widgets/animimg/lv_animimg.h"
LV_IMG_DECLARE(ui_Aircon_aircon_coolaircon_cool_00);
LV_IMG_DECLARE(ui_Aircon_aircon_coolaircon_cool_01);
LV_IMG_DECLARE(ui_Aircon_aircon_coolaircon_cool_02);
LV_IMG_DECLARE(ui_Aircon_aircon_coolaircon_cool_03);
LV_IMG_DECLARE(ui_Aircon_aircon_coolaircon_cool_04);
LV_IMG_DECLARE(ui_Aircon_aircon_coolaircon_cool_05);
#include "extra/widgets/animimg/lv_animimg.h"
LV_IMG_DECLARE(ui_Aircon_aircon_fanaircon_fan_00);
LV_IMG_DECLARE(ui_Aircon_aircon_fanaircon_fan_01);
LV_IMG_DECLARE(ui_Aircon_aircon_fanaircon_fan_02);
LV_IMG_DECLARE(ui_Aircon_aircon_fanaircon_fan_03);
LV_IMG_DECLARE(ui_Aircon_aircon_fanaircon_fan_04);
LV_IMG_DECLARE(ui_Aircon_aircon_fanaircon_fan_05);
#include "extra/widgets/animimg/lv_animimg.h"
LV_IMG_DECLARE(ui_Aircon_aircon_swingaircon_swing_00);
LV_IMG_DECLARE(ui_Aircon_aircon_swingaircon_swing_01);
LV_IMG_DECLARE(ui_Aircon_aircon_swingaircon_swing_02);
LV_IMG_DECLARE(ui_Aircon_aircon_swingaircon_swing_03);
LV_IMG_DECLARE(ui_Aircon_aircon_swingaircon_swing_04);
LV_IMG_DECLARE(ui_Aircon_aircon_swingaircon_swing_05);
LV_IMG_DECLARE(ui_Aircon_aircon_swingaircon_swing_06);
LV_IMG_DECLARE(ui_Aircon_aircon_swingaircon_swing_07);
LV_IMG_DECLARE(ui_Aircon_aircon_swingaircon_swing_08);
LV_IMG_DECLARE(ui_Aircon_aircon_swingaircon_swing_09);
LV_IMG_DECLARE(ui_Aircon_aircon_swingaircon_swing_10);
LV_IMG_DECLARE(ui_Aircon_aircon_swingaircon_swing_11);
LV_IMG_DECLARE(ui_Aircon_aircon_swingaircon_swing_12);
LV_IMG_DECLARE(ui_Aircon_aircon_swingaircon_swing_13);
LV_IMG_DECLARE(ui_Aircon_aircon_swingaircon_swing_14);
LV_IMG_DECLARE(_aircon_bg_alpha_480x272);
LV_IMG_DECLARE(_title_bg_alpha_298x48);
LV_IMG_DECLARE(_aircon_swing_1_alpha_237x41);
LV_IMG_DECLARE(_arrow_up_alpha_9x4);
LV_IMG_DECLARE(_arrow_down_alpha_9x4);
LV_IMG_DECLARE(_icn_cool_alpha_10x10);
LV_IMG_DECLARE(_icn_fan_low_alpha_10x9);
LV_IMG_DECLARE(_arrow_up_alpha_9x4);
LV_IMG_DECLARE(_arrow_down_alpha_9x4);
LV_IMG_DECLARE(_aircon_fan_1_alpha_36x36);
LV_IMG_DECLARE(_aircon_cool_1_alpha_33x37);

LV_FONT_DECLARE(lv_font_Antonio_Regular_11)
LV_FONT_DECLARE(lv_font_SourceHanSerifSC_Regular_11)
LV_FONT_DECLARE(lv_font_Antonio_Regular_34)
LV_FONT_DECLARE(lv_font_Alatsi_Regular_11)
LV_FONT_DECLARE(lv_font_Antonio_Regular_22)


#ifdef __cplusplus
}
#endif
#endif
