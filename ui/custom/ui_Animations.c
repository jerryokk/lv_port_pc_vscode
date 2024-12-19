/*
* Copyright 2023 NXP
* NXP Proprietary. This software is owned or controlled by NXP and may only be used strictly in
* accordance with the applicable license terms. By expressly accepting such terms or by downloading, installing,
* activating and/or otherwise using the software, you are agreeing that you have read, and that you agree to
* comply with and are bound by, such license terms.  If you do not agree to be bound by the applicable license
* terms, then you may not retain, install, activate or otherwise use the software.
*/

#include "ui_Animations.h"
/*******************************************************************************
 * Definitions
 ******************************************************************************/

/*******************************************************************************
 * Prototypes
 ******************************************************************************/
static void img_seq_anim_cb(void * var, int32_t v);

/*******************************************************************************
 * Variables
 ******************************************************************************/

/*******************************************************************************
 * Function
 ******************************************************************************/
lv_anim_t * _ui_start_img_seq_anim(lv_obj_t * obj, const lv_img_dsc_t * imgs[], uint32_t img_cnt, uint32_t period_time, bool backward)
{
	obj->user_data = imgs;
	lv_anim_t a;
	lv_anim_init(&a);
	if(backward)  lv_anim_set_values(&a, img_cnt - 1, 0);
	else lv_anim_set_values(&a, 0, img_cnt - 1);
	lv_anim_set_exec_cb(&a, img_seq_anim_cb);
	lv_anim_set_var(&a, obj);
	lv_anim_set_user_data(&a, obj);
	lv_anim_set_time(&a, img_cnt * period_time);
	return lv_anim_start(&a);

}

/*******************************************************************************
 * Static function
 ******************************************************************************/
static void img_seq_anim_cb(void * var, int32_t v)
{
	lv_obj_t * obj = var;
	lv_img_dsc_t ** imgs = obj->user_data;
	lv_img_set_src(obj, imgs[v]);
}

