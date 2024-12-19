/*
* Copyright 2023 NXP
* NXP Proprietary. This software is owned or controlled by NXP and may only be used strictly in
* accordance with the applicable license terms. By expressly accepting such terms or by downloading, installing,
* activating and/or otherwise using the software, you are agreeing that you have read, and that you agree to
* comply with and are bound by, such license terms.  If you do not agree to be bound by the applicable license
* terms, then you may not retain, install, activate or otherwise use the software.
*/

#include <ui_Aircon.h>
#include "gui_guider.h"
/*******************************************************************************
 * Definitions
 ******************************************************************************/

/*******************************************************************************
 * Prototypes
 ******************************************************************************/
void ui_aircon_swing_anim_start(uint32_t delay);
void ui_aircon_set_fan_speed(uint32_t frame_time);
void ui_aircon_swing_anim_close(void);

/*******************************************************************************
 * Variables
 ******************************************************************************/
uint32_t AirconTemp = 25;
uint32_t TimerHour = 1;
int32_t TimerMin = 15;

extern const lv_img_dsc_t* ui_Aircon_aircon_cool_imgs[6];
extern const lv_img_dsc_t* ui_Aircon_aircon_fan_imgs[6];
extern const lv_img_dsc_t* ui_Aircon_aircon_swing_imgs[15];


/*******************************************************************************
 * Function
 ******************************************************************************/

void ui_aircon_update_temp (uint32_t temp, AIRCON_Temp_T state)
{
	if(temp)
	{
		AirconTemp = temp;
	}
	else
	{
		switch (state)
		{
		case kAIRCON_TempDown:
			AirconTemp--;
			if(AirconTemp < AIRCON_TEMP_MIN)
			{
				AirconTemp = AIRCON_TEMP_MIN;
			}
			break;
		case kAIRCON_TempUp:
			AirconTemp++;
			if(AirconTemp > AIRCON_TEMP_MAX)
			{
				AirconTemp = AIRCON_TEMP_MAX;
			}
			break;
		}
	}
	lv_label_set_text_fmt(guider_ui.ui_Aircon_Label_Temp, "%02"LV_PRIu32, AirconTemp);

}

void ui_aircon_update_timer (uint32_t hour,  AIRCON_Timer_T state)
{
	if(hour)
	{
		TimerHour = hour;
	}
	else
	{
		switch (state)
		{
		case kAIRCON_TimerDown:
			if(TimerHour <= AIRCON_TIMERHOUR_MIN)
			{
				TimerMin = 0;
			} else {
				TimerMin-=15;
			}
			break;
		case kAIRCON_TimerUp:
			if(TimerHour >= AIRCON_TIMERHOUR_MAX)
			{
				TimerMin = 0;
			} else {
				TimerMin+=15;
			}
			break;
		}
	}

	if(TimerMin < 0)
	{
		TimerMin = 45;
		TimerHour--;
		if(TimerHour < AIRCON_TIMERHOUR_MIN)
		{
			TimerHour = AIRCON_TIMERHOUR_MIN;
		}
	}
	else if (TimerMin == 60)
	{
		TimerMin = 0;
		TimerHour++;
		if(TimerHour > AIRCON_TIMERHOUR_MAX)
		{
			TimerHour = AIRCON_TIMERHOUR_MAX;
		}
	}

	lv_label_set_text_fmt(guider_ui.ui_Aircon_Label_TimerHour, "%02"LV_PRIu32, TimerHour);
	lv_label_set_text_fmt(guider_ui.ui_Aircon_Label_TimerMin, "%02"LV_PRId32, TimerMin);
}

void ui_aircon_star_cool(void)
{
	lv_anim_t * a;
	a = _ui_start_img_seq_anim(guider_ui.ui_Aircon_Img_Cool, ui_Aircon_aircon_cool_imgs, sizeof(ui_Aircon_aircon_cool_imgs) / sizeof(ui_Aircon_aircon_cool_imgs[0]), 100, false);
	a->repeat_cnt = LV_ANIM_REPEAT_INFINITE;
}

/*******************************************************************************
 * Static function
 ******************************************************************************/

void ui_aircon_swing_anim_start(uint32_t delay)
{
	lv_anim_t * a = NULL;

	if(delay == 0) {
		uint32_t dim = sizeof(ui_Aircon_aircon_swing_imgs) / sizeof(ui_Aircon_aircon_swing_imgs[0]);
		uint32_t i;
		for(i = 0; i < dim; i++) {
			if(lv_img_get_src(guider_ui.ui_Aircon_Img_Swing) == ui_Aircon_aircon_swing_imgs[i]) {
				break;
			}
		}
		if(i == dim) i = 0;
		a = _ui_start_img_seq_anim(guider_ui.ui_Aircon_Img_Swing, ui_Aircon_aircon_swing_imgs, sizeof(ui_Aircon_aircon_swing_imgs) / sizeof(ui_Aircon_aircon_swing_imgs[0]), 90, false);
		a->current_value = i;
		a->act_time = i * 90;
		a->repeat_delay = 240;
		a->playback_delay = 240;
		lv_img_set_src(guider_ui.ui_Aircon_Img_Swing, ui_Aircon_aircon_swing_imgs[i]);
	} else {
		a = _ui_start_img_seq_anim(guider_ui.ui_Aircon_Img_Swing, ui_Aircon_aircon_swing_imgs, sizeof(ui_Aircon_aircon_swing_imgs) / sizeof(ui_Aircon_aircon_swing_imgs[0]), 90, false);
		a->act_time = -delay;
		a->repeat_delay = 240;
		a->playback_delay = 240;
	}

	a->playback_time = a->time;
	a->repeat_cnt = LV_ANIM_REPEAT_INFINITE;
}

void ui_aircon_set_fan_speed(uint32_t frame_time)
{
	lv_anim_t * a;
	a = _ui_start_img_seq_anim(guider_ui.ui_Aircon_Img_Fan, ui_Aircon_aircon_fan_imgs, sizeof(ui_Aircon_aircon_fan_imgs) / sizeof(ui_Aircon_aircon_fan_imgs[0]), frame_time, false);
	a->repeat_cnt = LV_ANIM_REPEAT_INFINITE;
}

void ui_aircon_swing_anim_close(void)
{
	uint32_t i;
	for(i = 0; i < sizeof(ui_Aircon_aircon_swing_imgs) / sizeof(ui_Aircon_aircon_swing_imgs[0]); i++) {
		if(lv_img_get_src(guider_ui.ui_Aircon_Img_Swing) == ui_Aircon_aircon_swing_imgs[i]) {
			i++;
			_ui_start_img_seq_anim(guider_ui.ui_Aircon_Img_Swing, ui_Aircon_aircon_swing_imgs, i, 30, true);
			break;
		}
	}
}

