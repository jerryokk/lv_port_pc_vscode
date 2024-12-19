/*
* Copyright 2023 NXP
* NXP Proprietary. This software is owned or controlled by NXP and may only be used strictly in
* accordance with the applicable license terms. By expressly accepting such terms or by downloading, installing,
* activating and/or otherwise using the software, you are agreeing that you have read, and that you agree to
* comply with and are bound by, such license terms.  If you do not agree to be bound by the applicable license
* terms, then you may not retain, install, activate or otherwise use the software.
*/

#ifndef UI_ANIMATIONS_H_
#define UI_ANIMATIONS_H_

#include "gui_guider.h"


/*******************************************************************************
 * Definitions
 ******************************************************************************/
#define DARK_PANEL_ANIM_TIME	500
#define FADE_ANIM_TIME			300
#define SCREEN_TRANSITION_TIME	600

/*******************************************************************************
 * Prototypes
 ******************************************************************************/

lv_anim_t * _ui_start_img_seq_anim(lv_obj_t * obj, const lv_img_dsc_t * imgs[], uint32_t img_cnt, uint32_t period_time, bool backward);

#endif /* UI_ANIMATIONS_H_ */
