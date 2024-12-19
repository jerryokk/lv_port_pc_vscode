/*
* Copyright 2023 NXP
* NXP Proprietary. This software is owned or controlled by NXP and may only be used strictly in
* accordance with the applicable license terms. By expressly accepting such terms or by downloading, installing,
* activating and/or otherwise using the software, you are agreeing that you have read, and that you agree to
* comply with and are bound by, such license terms.  If you do not agree to be bound by the applicable license
* terms, then you may not retain, install, activate or otherwise use the software.
*/

#ifndef UI_AIRCON_H_
#define UI_AIRCON_H_

#include "gui_guider.h"
#include "ui_Animations.h"


/*******************************************************************************
 * Definitions
 ******************************************************************************/
#define FADE_ANIM_TIME			300
#define AIRCON_TEMP_MIN         16
#define AIRCON_TEMP_MAX         32
#define AIRCON_TIMERHOUR_MIN    0
#define AIRCON_TIMERHOUR_MAX    24

typedef enum
{
	kAIRCON_TempDown,
	kAIRCON_TempUp,
} AIRCON_Temp_T;

typedef enum
{
	kAIRCON_TimerDown,
	kAIRCON_TimerUp,
} AIRCON_Timer_T;

typedef enum
{
	kAIRCON_SwingOff,
	kAIRCON_SwingOn,
} AIRCON_Swing_State_T;

typedef enum
{
	kAIRCON_FanLow,
	kAIRCON_FanMedium,
	kAIRCON_FanHigh
} AIRCON_Fan_Speed_T;

typedef enum
{
	kAIRCON_ModeCool,
	kAIRCON_ModeDry,
	kAIRCON_ModeFan
} AIRCON_Mode_T;

typedef enum
{
    kVIT_IncreaseTemp = 1,
	kVIT_DecreaseTemp,
	kVIT_SetTemp19,
	kVIT_SetFanToHigh,
	kVIT_SetFanToMedium,
	kVIT_SetFanToLow,
	kVIT_SwingOn,
	kVIT_SwingOff,
	kVIT_SetModeCool,
	kVIT_SetModeDry,
	kVIT_SetModeFan,
	kVIT_SetTimer4
} VIT_Aircon_Commands_T;
/*******************************************************************************
 * Prototypes
 ******************************************************************************/

void ui_aircon_update_temp (uint32_t temp, AIRCON_Temp_T state);

void ui_aircon_update_timer (uint32_t hour, AIRCON_Timer_T state);

void ui_aircon_star_cool(void);

void ui_aircon_set_fan_speed(uint32_t frame_time);

void ui_aircon_swing_anim_start(uint32_t delay);

void ui_aircon_swing_anim_close(void);
#endif /* UI_AIRCON_H_ */
