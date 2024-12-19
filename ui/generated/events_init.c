/*
* Copyright 2024 NXP
* NXP Proprietary. This software is owned or controlled by NXP and may only be used strictly in
* accordance with the applicable license terms. By expressly accepting such terms or by downloading, installing,
* activating and/or otherwise using the software, you are agreeing that you have read, and that you agree to
* comply with and are bound by, such license terms.  If you do not agree to be bound by the applicable license
* terms, then you may not retain, install, activate or otherwise use the software.
*/

#include "events_init.h"
#include <stdio.h>
#include "lvgl.h"

#if LV_USE_GUIDER_SIMULATOR && LV_USE_FREEMASTER
#include "freemaster_client.h"
#endif



#include "ui_Aircon.h"


static void ui_Aircon_event_handler (lv_event_t *e)
{
    lv_event_code_t code = lv_event_get_code(e);
    switch (code) {
    case LV_EVENT_SCREEN_LOADED:
    {
        lv_obj_clear_flag(guider_ui.ui_Aircon_Cont, LV_OBJ_FLAG_SCROLLABLE);
        ui_aircon_set_fan_speed(100);
        ui_aircon_star_cool();
        break;
    }
    default:
        break;
    }
}

static void ui_Aircon_Btn_TempUp_event_handler (lv_event_t *e)
{
    lv_event_code_t code = lv_event_get_code(e);
    switch (code) {
    case LV_EVENT_RELEASED:
    {
        ui_aircon_update_temp (0, kAIRCON_TempUp);
        break;
    }
    default:
        break;
    }
}

static void ui_Aircon_Btn_TempDown_event_handler (lv_event_t *e)
{
    lv_event_code_t code = lv_event_get_code(e);
    switch (code) {
    case LV_EVENT_RELEASED:
    {
        ui_aircon_update_temp (0, kAIRCON_TempDown);
        break;
    }
    default:
        break;
    }
}

static void ui_Aircon_Roller_Mode_event_handler (lv_event_t *e)
{
    lv_event_code_t code = lv_event_get_code(e);
    switch (code) {
    case LV_EVENT_VALUE_CHANGED:
    {
        lv_obj_t * obj = lv_event_get_target(e);

        switch (lv_roller_get_selected(obj)) {
        case (kAIRCON_ModeFan):
        {
            lv_label_set_text(guider_ui.ui_Aircon_Label_On, "OFF");
            lv_img_set_src(guider_ui.ui_Aircon_Img_Comp, &_icn_fan_low_alpha_11x10);
            lv_obj_fade_out(guider_ui.ui_Aircon_Img_Cool, FADE_ANIM_TIME, 0);
            break;
        }
        case (kAIRCON_ModeDry):
        {
            lv_label_set_text(guider_ui.ui_Aircon_Label_On, "ON");
            lv_img_set_src(guider_ui.ui_Aircon_Img_Comp, &_icn_dry_alpha_10x11);
            lv_obj_fade_in(guider_ui.ui_Aircon_Img_Cool, FADE_ANIM_TIME, 0);
            break;
        }
        case (kAIRCON_ModeCool):
        {
            lv_label_set_text(guider_ui.ui_Aircon_Label_On, "ON");
            lv_img_set_src(guider_ui.ui_Aircon_Img_Comp, &_icn_cool_alpha_9x10);
            lv_obj_fade_in(guider_ui.ui_Aircon_Img_Cool, FADE_ANIM_TIME, 0);
            break;
        }
        default:
            break;
        }
        break;
    }
    default:
        break;
    }
}

static void ui_Aircon_Btn_Swing_event_handler (lv_event_t *e)
{
    lv_event_code_t code = lv_event_get_code(e);
    switch (code) {
    case LV_EVENT_RELEASED:
    {
        lv_obj_t * obj = lv_event_get_target(e);

        if (lv_obj_has_state(obj, LV_STATE_CHECKED) == kAIRCON_SwingOff) {
            ui_aircon_swing_anim_close();
        } else if (lv_obj_has_state(obj, LV_STATE_CHECKED) == kAIRCON_SwingOn) {
            ui_aircon_swing_anim_start(0);
        }
        break;
    }
    default:
        break;
    }
}

static void ui_Aircon_Slider_Fan_event_handler (lv_event_t *e)
{
    lv_event_code_t code = lv_event_get_code(e);
    switch (code) {
    case LV_EVENT_VALUE_CHANGED:
    {
        lv_obj_t * obj = lv_event_get_target(e);
        uint32_t frame_time = 100;

        switch (lv_slider_get_value(obj)) {
        case (kAIRCON_FanHigh):
        {
            lv_label_set_text(guider_ui.ui_Aircon_Label_FanState, "HIGH");
            frame_time = 75;
            lv_img_set_src(guider_ui.ui_Aircon_Img_FanSt, &_icn_fan_low_alpha_11x10);
            break;
        }
        case (kAIRCON_FanMedium):
        {
            lv_label_set_text(guider_ui.ui_Aircon_Label_FanState, "MEDIUM");
            frame_time = 100;
            lv_img_set_src(guider_ui.ui_Aircon_Img_FanSt, &_icn_fan_low_alpha_11x10);
            break;
        }
        case (kAIRCON_FanLow):
        {
            lv_label_set_text(guider_ui.ui_Aircon_Label_FanState, "LOW");
            frame_time = 125;
            lv_img_set_src(guider_ui.ui_Aircon_Img_FanSt, &_icn_fan_low_alpha_11x10);
            break;
        }
        default:
            break;
        }
        break;
    }
    default:
        break;
    }
}

static void ui_Aircon_Btn_TimerUp_event_handler (lv_event_t *e)
{
    lv_event_code_t code = lv_event_get_code(e);
    switch (code) {
    case LV_EVENT_RELEASED:
    {
        ui_aircon_update_timer(0,kAIRCON_TimerUp);
        break;
    }
    default:
        break;
    }
}

static void ui_Aircon_Btn_TimerDown_event_handler (lv_event_t *e)
{
    lv_event_code_t code = lv_event_get_code(e);
    switch (code) {
    case LV_EVENT_RELEASED:
    {
        ui_aircon_update_timer(0,kAIRCON_TimerDown);
        break;
    }
    default:
        break;
    }
}

void events_init_ui_Aircon (lv_ui *ui)
{
    lv_obj_add_event_cb(ui->ui_Aircon, ui_Aircon_event_handler, LV_EVENT_ALL, ui);
    lv_obj_add_event_cb(ui->ui_Aircon_Btn_TempUp, ui_Aircon_Btn_TempUp_event_handler, LV_EVENT_ALL, ui);
    lv_obj_add_event_cb(ui->ui_Aircon_Btn_TempDown, ui_Aircon_Btn_TempDown_event_handler, LV_EVENT_ALL, ui);
    lv_obj_add_event_cb(ui->ui_Aircon_Roller_Mode, ui_Aircon_Roller_Mode_event_handler, LV_EVENT_ALL, ui);
    lv_obj_add_event_cb(ui->ui_Aircon_Btn_Swing, ui_Aircon_Btn_Swing_event_handler, LV_EVENT_ALL, ui);
    lv_obj_add_event_cb(ui->ui_Aircon_Slider_Fan, ui_Aircon_Slider_Fan_event_handler, LV_EVENT_ALL, ui);
    lv_obj_add_event_cb(ui->ui_Aircon_Btn_TimerUp, ui_Aircon_Btn_TimerUp_event_handler, LV_EVENT_ALL, ui);
    lv_obj_add_event_cb(ui->ui_Aircon_Btn_TimerDown, ui_Aircon_Btn_TimerDown_event_handler, LV_EVENT_ALL, ui);
}


void events_init(lv_ui *ui)
{

}
