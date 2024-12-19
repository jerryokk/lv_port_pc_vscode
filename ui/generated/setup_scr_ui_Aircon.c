/*
* Copyright 2024 NXP
* NXP Proprietary. This software is owned or controlled by NXP and may only be used strictly in
* accordance with the applicable license terms. By expressly accepting such terms or by downloading, installing,
* activating and/or otherwise using the software, you are agreeing that you have read, and that you agree to
* comply with and are bound by, such license terms.  If you do not agree to be bound by the applicable license
* terms, then you may not retain, install, activate or otherwise use the software.
*/

#include "lvgl.h"
#include <stdio.h>
#include "gui_guider.h"
#include "events_init.h"
#include "widgets_init.h"
#include "custom.h"



void setup_scr_ui_Aircon(lv_ui *ui)
{
    //Write codes ui_Aircon
    ui->ui_Aircon = lv_obj_create(NULL);
    lv_obj_set_size(ui->ui_Aircon, 480, 272);
    lv_obj_set_scrollbar_mode(ui->ui_Aircon, LV_SCROLLBAR_MODE_OFF);

    //Write style for ui_Aircon, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->ui_Aircon, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes ui_Aircon_icn_fan_low
    ui->ui_Aircon_icn_fan_low = lv_img_create(ui->ui_Aircon);
    lv_obj_add_flag(ui->ui_Aircon_icn_fan_low, LV_OBJ_FLAG_CLICKABLE);
    lv_img_set_src(ui->ui_Aircon_icn_fan_low, &_icn_fan_low_alpha_11x10);
    lv_img_set_pivot(ui->ui_Aircon_icn_fan_low, 50,50);
    lv_img_set_angle(ui->ui_Aircon_icn_fan_low, -30);
    lv_obj_set_pos(ui->ui_Aircon_icn_fan_low, 115, 55);
    lv_obj_set_size(ui->ui_Aircon_icn_fan_low, 11, 10);
    lv_obj_add_flag(ui->ui_Aircon_icn_fan_low, LV_OBJ_FLAG_HIDDEN);

    //Write style for ui_Aircon_icn_fan_low, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_img_recolor_opa(ui->ui_Aircon_icn_fan_low, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_img_opa(ui->ui_Aircon_icn_fan_low, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->ui_Aircon_icn_fan_low, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_clip_corner(ui->ui_Aircon_icn_fan_low, true, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes ui_Aircon_icn_dry
    ui->ui_Aircon_icn_dry = lv_img_create(ui->ui_Aircon);
    lv_obj_add_flag(ui->ui_Aircon_icn_dry, LV_OBJ_FLAG_CLICKABLE);
    lv_img_set_src(ui->ui_Aircon_icn_dry, &_icn_dry_alpha_10x11);
    lv_img_set_pivot(ui->ui_Aircon_icn_dry, 50,50);
    lv_img_set_angle(ui->ui_Aircon_icn_dry, -30);
    lv_obj_set_pos(ui->ui_Aircon_icn_dry, 76, 27);
    lv_obj_set_size(ui->ui_Aircon_icn_dry, 10, 11);
    lv_obj_add_flag(ui->ui_Aircon_icn_dry, LV_OBJ_FLAG_HIDDEN);

    //Write style for ui_Aircon_icn_dry, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_img_recolor_opa(ui->ui_Aircon_icn_dry, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_img_opa(ui->ui_Aircon_icn_dry, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->ui_Aircon_icn_dry, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_clip_corner(ui->ui_Aircon_icn_dry, true, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes ui_Aircon_icn_fan_high
    ui->ui_Aircon_icn_fan_high = lv_img_create(ui->ui_Aircon);
    lv_obj_add_flag(ui->ui_Aircon_icn_fan_high, LV_OBJ_FLAG_CLICKABLE);
    lv_img_set_src(ui->ui_Aircon_icn_fan_high, &_icn_fan_high_alpha_11x10);
    lv_img_set_pivot(ui->ui_Aircon_icn_fan_high, 50,50);
    lv_img_set_angle(ui->ui_Aircon_icn_fan_high, -30);
    lv_obj_set_pos(ui->ui_Aircon_icn_fan_high, 50, 19);
    lv_obj_set_size(ui->ui_Aircon_icn_fan_high, 11, 10);
    lv_obj_add_flag(ui->ui_Aircon_icn_fan_high, LV_OBJ_FLAG_HIDDEN);

    //Write style for ui_Aircon_icn_fan_high, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_img_recolor_opa(ui->ui_Aircon_icn_fan_high, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_img_opa(ui->ui_Aircon_icn_fan_high, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->ui_Aircon_icn_fan_high, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_clip_corner(ui->ui_Aircon_icn_fan_high, true, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes ui_Aircon_icn_fan
    ui->ui_Aircon_icn_fan = lv_img_create(ui->ui_Aircon);
    lv_obj_add_flag(ui->ui_Aircon_icn_fan, LV_OBJ_FLAG_CLICKABLE);
    lv_img_set_src(ui->ui_Aircon_icn_fan, &_icn_fan_alpha_10x11);
    lv_img_set_pivot(ui->ui_Aircon_icn_fan, 50,50);
    lv_img_set_angle(ui->ui_Aircon_icn_fan, 0);
    lv_obj_set_pos(ui->ui_Aircon_icn_fan, 50, 19);
    lv_obj_set_size(ui->ui_Aircon_icn_fan, 10, 11);
    lv_obj_add_flag(ui->ui_Aircon_icn_fan, LV_OBJ_FLAG_HIDDEN);

    //Write style for ui_Aircon_icn_fan, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_img_recolor_opa(ui->ui_Aircon_icn_fan, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_img_opa(ui->ui_Aircon_icn_fan, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->ui_Aircon_icn_fan, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_clip_corner(ui->ui_Aircon_icn_fan, true, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes ui_Aircon_icn_cool
    ui->ui_Aircon_icn_cool = lv_img_create(ui->ui_Aircon);
    lv_obj_add_flag(ui->ui_Aircon_icn_cool, LV_OBJ_FLAG_CLICKABLE);
    lv_img_set_src(ui->ui_Aircon_icn_cool, &_icn_cool_alpha_9x10);
    lv_img_set_pivot(ui->ui_Aircon_icn_cool, 50,50);
    lv_img_set_angle(ui->ui_Aircon_icn_cool, 260);
    lv_obj_set_pos(ui->ui_Aircon_icn_cool, 50, 19);
    lv_obj_set_size(ui->ui_Aircon_icn_cool, 9, 10);
    lv_obj_add_flag(ui->ui_Aircon_icn_cool, LV_OBJ_FLAG_HIDDEN);

    //Write style for ui_Aircon_icn_cool, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_img_recolor_opa(ui->ui_Aircon_icn_cool, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_img_opa(ui->ui_Aircon_icn_cool, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->ui_Aircon_icn_cool, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_clip_corner(ui->ui_Aircon_icn_cool, true, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes ui_Aircon_aircon_cool
    ui->ui_Aircon_aircon_cool = lv_animimg_create(ui->ui_Aircon);
    lv_animimg_set_src(ui->ui_Aircon_aircon_cool, (const void **) ui_Aircon_aircon_cool_imgs, 6, false);
    lv_animimg_set_duration(ui->ui_Aircon_aircon_cool, 30*6);
    lv_animimg_set_repeat_count(ui->ui_Aircon_aircon_cool, 3000);
    lv_img_set_src(ui->ui_Aircon_aircon_cool, ui_Aircon_aircon_cool_imgs[0]);
    lv_obj_set_pos(ui->ui_Aircon_aircon_cool, 27, 7);
    lv_obj_set_size(ui->ui_Aircon_aircon_cool, 34, 38);
    lv_obj_add_flag(ui->ui_Aircon_aircon_cool, LV_OBJ_FLAG_HIDDEN);

    //Write codes ui_Aircon_aircon_fan
    ui->ui_Aircon_aircon_fan = lv_animimg_create(ui->ui_Aircon);
    lv_animimg_set_src(ui->ui_Aircon_aircon_fan, (const void **) ui_Aircon_aircon_fan_imgs, 6, false);
    lv_animimg_set_duration(ui->ui_Aircon_aircon_fan, 30*6);
    lv_animimg_set_repeat_count(ui->ui_Aircon_aircon_fan, 3000);
    lv_img_set_src(ui->ui_Aircon_aircon_fan, ui_Aircon_aircon_fan_imgs[0]);
    lv_obj_set_pos(ui->ui_Aircon_aircon_fan, 93, 8);
    lv_obj_set_size(ui->ui_Aircon_aircon_fan, 36, 37);
    lv_obj_add_flag(ui->ui_Aircon_aircon_fan, LV_OBJ_FLAG_HIDDEN);

    //Write codes ui_Aircon_aircon_swing
    ui->ui_Aircon_aircon_swing = lv_animimg_create(ui->ui_Aircon);
    lv_animimg_set_src(ui->ui_Aircon_aircon_swing, (const void **) ui_Aircon_aircon_swing_imgs, 15, false);
    lv_animimg_set_duration(ui->ui_Aircon_aircon_swing, 30*15);
    lv_animimg_set_repeat_count(ui->ui_Aircon_aircon_swing, 3000);
    lv_img_set_src(ui->ui_Aircon_aircon_swing, ui_Aircon_aircon_swing_imgs[0]);
    lv_obj_set_pos(ui->ui_Aircon_aircon_swing, 172, 16);
    lv_obj_set_size(ui->ui_Aircon_aircon_swing, 237, 42);
    lv_obj_add_flag(ui->ui_Aircon_aircon_swing, LV_OBJ_FLAG_HIDDEN);

    //Write codes ui_Aircon_Img_Bg
    ui->ui_Aircon_Img_Bg = lv_img_create(ui->ui_Aircon);
    lv_obj_add_flag(ui->ui_Aircon_Img_Bg, LV_OBJ_FLAG_CLICKABLE);
    lv_img_set_src(ui->ui_Aircon_Img_Bg, &_aircon_bg_alpha_480x272);
    lv_img_set_pivot(ui->ui_Aircon_Img_Bg, 50,50);
    lv_img_set_angle(ui->ui_Aircon_Img_Bg, 0);
    lv_obj_set_pos(ui->ui_Aircon_Img_Bg, 0, 0);
    lv_obj_set_size(ui->ui_Aircon_Img_Bg, 480, 272);

    //Write style for ui_Aircon_Img_Bg, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_img_recolor_opa(ui->ui_Aircon_Img_Bg, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_img_opa(ui->ui_Aircon_Img_Bg, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->ui_Aircon_Img_Bg, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_clip_corner(ui->ui_Aircon_Img_Bg, true, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes ui_Aircon_Img_Lable_Bg
    ui->ui_Aircon_Img_Lable_Bg = lv_img_create(ui->ui_Aircon);
    lv_obj_add_flag(ui->ui_Aircon_Img_Lable_Bg, LV_OBJ_FLAG_CLICKABLE);
    lv_img_set_src(ui->ui_Aircon_Img_Lable_Bg, &_title_bg_alpha_298x48);
    lv_img_set_pivot(ui->ui_Aircon_Img_Lable_Bg, 50,50);
    lv_img_set_angle(ui->ui_Aircon_Img_Lable_Bg, 0);
    lv_obj_set_pos(ui->ui_Aircon_Img_Lable_Bg, 0, 222);
    lv_obj_set_size(ui->ui_Aircon_Img_Lable_Bg, 298, 48);

    //Write style for ui_Aircon_Img_Lable_Bg, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_img_recolor_opa(ui->ui_Aircon_Img_Lable_Bg, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_img_opa(ui->ui_Aircon_Img_Lable_Bg, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->ui_Aircon_Img_Lable_Bg, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_clip_corner(ui->ui_Aircon_Img_Lable_Bg, true, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes ui_Aircon_Label_Air
    ui->ui_Aircon_Label_Air = lv_label_create(ui->ui_Aircon);
    lv_label_set_text(ui->ui_Aircon_Label_Air, "Air Conditioner");
    lv_label_set_long_mode(ui->ui_Aircon_Label_Air, LV_LABEL_LONG_WRAP);
    lv_obj_set_pos(ui->ui_Aircon_Label_Air, 145, 233);
    lv_obj_set_size(ui->ui_Aircon_Label_Air, 153, 26);

    //Write style for ui_Aircon_Label_Air, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->ui_Aircon_Label_Air, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->ui_Aircon_Label_Air, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->ui_Aircon_Label_Air, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->ui_Aircon_Label_Air, &lv_font_Antonio_Regular_11, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->ui_Aircon_Label_Air, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->ui_Aircon_Label_Air, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->ui_Aircon_Label_Air, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->ui_Aircon_Label_Air, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->ui_Aircon_Label_Air, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->ui_Aircon_Label_Air, 8, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->ui_Aircon_Label_Air, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->ui_Aircon_Label_Air, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->ui_Aircon_Label_Air, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->ui_Aircon_Label_Air, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes ui_Aircon_Img_Swing
    ui->ui_Aircon_Img_Swing = lv_img_create(ui->ui_Aircon);
    lv_obj_add_flag(ui->ui_Aircon_Img_Swing, LV_OBJ_FLAG_CLICKABLE);
    lv_img_set_src(ui->ui_Aircon_Img_Swing, &_aircon_swing_1_alpha_237x41);
    lv_img_set_pivot(ui->ui_Aircon_Img_Swing, 50,50);
    lv_img_set_angle(ui->ui_Aircon_Img_Swing, 0);
    lv_obj_set_pos(ui->ui_Aircon_Img_Swing, 43, 144);
    lv_obj_set_size(ui->ui_Aircon_Img_Swing, 237, 41);

    //Write style for ui_Aircon_Img_Swing, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_img_recolor_opa(ui->ui_Aircon_Img_Swing, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_img_opa(ui->ui_Aircon_Img_Swing, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->ui_Aircon_Img_Swing, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_clip_corner(ui->ui_Aircon_Img_Swing, true, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes ui_Aircon_Cont
    ui->ui_Aircon_Cont = lv_obj_create(ui->ui_Aircon);
    lv_obj_set_pos(ui->ui_Aircon_Cont, 311, 7);
    lv_obj_set_size(ui->ui_Aircon_Cont, 169, 259);
    lv_obj_set_scrollbar_mode(ui->ui_Aircon_Cont, LV_SCROLLBAR_MODE_OFF);

    //Write style for ui_Aircon_Cont, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->ui_Aircon_Cont, 1, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui->ui_Aircon_Cont, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui->ui_Aircon_Cont, lv_color_hex(0x4A4C4A), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui->ui_Aircon_Cont, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->ui_Aircon_Cont, 20, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->ui_Aircon_Cont, 250, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->ui_Aircon_Cont, lv_color_hex(0x242424), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->ui_Aircon_Cont, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->ui_Aircon_Cont, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->ui_Aircon_Cont, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->ui_Aircon_Cont, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->ui_Aircon_Cont, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->ui_Aircon_Cont, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes ui_Aircon_line
    ui->ui_Aircon_line = lv_line_create(ui->ui_Aircon_Cont);
    static lv_point_t ui_Aircon_line[] = {{0, 0},{152, 0},};
    lv_line_set_points(ui->ui_Aircon_line, ui_Aircon_line, 2);
    lv_obj_set_pos(ui->ui_Aircon_line, 6, 3);
    lv_obj_set_size(ui->ui_Aircon_line, 152, 2);

    //Write style for ui_Aircon_line, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_line_width(ui->ui_Aircon_line, 9, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_color(ui->ui_Aircon_line, lv_color_hex(0x52DAFF), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_opa(ui->ui_Aircon_line, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_rounded(ui->ui_Aircon_line, true, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes ui_Aircon_Label_Temp
    ui->ui_Aircon_Label_Temp = lv_label_create(ui->ui_Aircon_Cont);
    lv_label_set_text(ui->ui_Aircon_Label_Temp, "25");
    lv_label_set_long_mode(ui->ui_Aircon_Label_Temp, LV_LABEL_LONG_WRAP);
    lv_obj_set_pos(ui->ui_Aircon_Label_Temp, 3, 20);
    lv_obj_set_size(ui->ui_Aircon_Label_Temp, 57, 49);

    //Write style for ui_Aircon_Label_Temp, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->ui_Aircon_Label_Temp, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->ui_Aircon_Label_Temp, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->ui_Aircon_Label_Temp, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->ui_Aircon_Label_Temp, &lv_font_Antonio_Regular_34, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->ui_Aircon_Label_Temp, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->ui_Aircon_Label_Temp, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->ui_Aircon_Label_Temp, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->ui_Aircon_Label_Temp, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->ui_Aircon_Label_Temp, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->ui_Aircon_Label_Temp, 8, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->ui_Aircon_Label_Temp, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->ui_Aircon_Label_Temp, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->ui_Aircon_Label_Temp, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->ui_Aircon_Label_Temp, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes ui_Aircon_Btn_TempUp
    ui->ui_Aircon_Btn_TempUp = lv_btn_create(ui->ui_Aircon_Cont);
    ui->ui_Aircon_Btn_TempUp_label = lv_label_create(ui->ui_Aircon_Btn_TempUp);
    lv_label_set_text(ui->ui_Aircon_Btn_TempUp_label, "");
    lv_label_set_long_mode(ui->ui_Aircon_Btn_TempUp_label, LV_LABEL_LONG_WRAP);
    lv_obj_align(ui->ui_Aircon_Btn_TempUp_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->ui_Aircon_Btn_TempUp, 0, LV_STATE_DEFAULT);
    lv_obj_set_width(ui->ui_Aircon_Btn_TempUp_label, LV_PCT(100));
    lv_obj_set_pos(ui->ui_Aircon_Btn_TempUp, 84, 32);
    lv_obj_set_size(ui->ui_Aircon_Btn_TempUp, 23, 23);

    //Write style for ui_Aircon_Btn_TempUp, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->ui_Aircon_Btn_TempUp, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->ui_Aircon_Btn_TempUp, lv_color_hex(0x29BAE6), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->ui_Aircon_Btn_TempUp, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->ui_Aircon_Btn_TempUp, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->ui_Aircon_Btn_TempUp, 10, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->ui_Aircon_Btn_TempUp, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->ui_Aircon_Btn_TempUp, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->ui_Aircon_Btn_TempUp, &lv_font_SourceHanSerifSC_Regular_11, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->ui_Aircon_Btn_TempUp, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->ui_Aircon_Btn_TempUp, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style for ui_Aircon_Btn_TempUp, Part: LV_PART_MAIN, State: LV_STATE_PRESSED.
    lv_obj_set_style_bg_opa(ui->ui_Aircon_Btn_TempUp, 255, LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_bg_color(ui->ui_Aircon_Btn_TempUp, lv_color_hex(0x18C220), LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_bg_grad_dir(ui->ui_Aircon_Btn_TempUp, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_border_width(ui->ui_Aircon_Btn_TempUp, 0, LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_radius(ui->ui_Aircon_Btn_TempUp, 10, LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_shadow_width(ui->ui_Aircon_Btn_TempUp, 0, LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_text_color(ui->ui_Aircon_Btn_TempUp, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_text_font(ui->ui_Aircon_Btn_TempUp, &lv_font_SourceHanSerifSC_Regular_11, LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_text_opa(ui->ui_Aircon_Btn_TempUp, 255, LV_PART_MAIN|LV_STATE_PRESSED);

    //Write codes ui_Aircon_Label_SetTemp
    ui->ui_Aircon_Label_SetTemp = lv_label_create(ui->ui_Aircon_Cont);
    lv_label_set_text(ui->ui_Aircon_Label_SetTemp, "SET TEMPERATURE");
    lv_label_set_long_mode(ui->ui_Aircon_Label_SetTemp, LV_LABEL_LONG_WRAP);
    lv_obj_set_pos(ui->ui_Aircon_Label_SetTemp, 32, 6);
    lv_obj_set_size(ui->ui_Aircon_Label_SetTemp, 107, 31);

    //Write style for ui_Aircon_Label_SetTemp, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->ui_Aircon_Label_SetTemp, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->ui_Aircon_Label_SetTemp, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->ui_Aircon_Label_SetTemp, lv_color_hex(0x52DAFF), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->ui_Aircon_Label_SetTemp, &lv_font_Antonio_Regular_11, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->ui_Aircon_Label_SetTemp, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->ui_Aircon_Label_SetTemp, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->ui_Aircon_Label_SetTemp, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->ui_Aircon_Label_SetTemp, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->ui_Aircon_Label_SetTemp, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->ui_Aircon_Label_SetTemp, 8, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->ui_Aircon_Label_SetTemp, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->ui_Aircon_Label_SetTemp, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->ui_Aircon_Label_SetTemp, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->ui_Aircon_Label_SetTemp, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes ui_Aircon_Label_Cen
    ui->ui_Aircon_Label_Cen = lv_label_create(ui->ui_Aircon_Cont);
    lv_label_set_text(ui->ui_Aircon_Label_Cen, "ºC");
    lv_label_set_long_mode(ui->ui_Aircon_Label_Cen, LV_LABEL_LONG_WRAP);
    lv_obj_set_pos(ui->ui_Aircon_Label_Cen, 45, 22);
    lv_obj_set_size(ui->ui_Aircon_Label_Cen, 27, 19);

    //Write style for ui_Aircon_Label_Cen, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->ui_Aircon_Label_Cen, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->ui_Aircon_Label_Cen, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->ui_Aircon_Label_Cen, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->ui_Aircon_Label_Cen, &lv_font_Alatsi_Regular_11, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->ui_Aircon_Label_Cen, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->ui_Aircon_Label_Cen, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->ui_Aircon_Label_Cen, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->ui_Aircon_Label_Cen, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->ui_Aircon_Label_Cen, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->ui_Aircon_Label_Cen, 8, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->ui_Aircon_Label_Cen, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->ui_Aircon_Label_Cen, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->ui_Aircon_Label_Cen, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->ui_Aircon_Label_Cen, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes ui_Aircon_Btn_TempDown
    ui->ui_Aircon_Btn_TempDown = lv_btn_create(ui->ui_Aircon_Cont);
    ui->ui_Aircon_Btn_TempDown_label = lv_label_create(ui->ui_Aircon_Btn_TempDown);
    lv_label_set_text(ui->ui_Aircon_Btn_TempDown_label, "");
    lv_label_set_long_mode(ui->ui_Aircon_Btn_TempDown_label, LV_LABEL_LONG_WRAP);
    lv_obj_align(ui->ui_Aircon_Btn_TempDown_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->ui_Aircon_Btn_TempDown, 0, LV_STATE_DEFAULT);
    lv_obj_set_width(ui->ui_Aircon_Btn_TempDown_label, LV_PCT(100));
    lv_obj_set_pos(ui->ui_Aircon_Btn_TempDown, 120, 32);
    lv_obj_set_size(ui->ui_Aircon_Btn_TempDown, 23, 23);

    //Write style for ui_Aircon_Btn_TempDown, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->ui_Aircon_Btn_TempDown, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->ui_Aircon_Btn_TempDown, lv_color_hex(0x29BAE6), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->ui_Aircon_Btn_TempDown, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->ui_Aircon_Btn_TempDown, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->ui_Aircon_Btn_TempDown, 10, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->ui_Aircon_Btn_TempDown, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->ui_Aircon_Btn_TempDown, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->ui_Aircon_Btn_TempDown, &lv_font_SourceHanSerifSC_Regular_11, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->ui_Aircon_Btn_TempDown, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->ui_Aircon_Btn_TempDown, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style for ui_Aircon_Btn_TempDown, Part: LV_PART_MAIN, State: LV_STATE_PRESSED.
    lv_obj_set_style_bg_opa(ui->ui_Aircon_Btn_TempDown, 255, LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_bg_color(ui->ui_Aircon_Btn_TempDown, lv_color_hex(0x18C220), LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_bg_grad_dir(ui->ui_Aircon_Btn_TempDown, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_border_width(ui->ui_Aircon_Btn_TempDown, 0, LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_radius(ui->ui_Aircon_Btn_TempDown, 10, LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_shadow_width(ui->ui_Aircon_Btn_TempDown, 0, LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_text_color(ui->ui_Aircon_Btn_TempDown, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_text_font(ui->ui_Aircon_Btn_TempDown, &lv_font_SourceHanSerifSC_Regular_11, LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_text_opa(ui->ui_Aircon_Btn_TempDown, 255, LV_PART_MAIN|LV_STATE_PRESSED);

    //Write codes ui_Aircon_Img_TemUp
    ui->ui_Aircon_Img_TemUp = lv_img_create(ui->ui_Aircon_Cont);
    lv_obj_add_flag(ui->ui_Aircon_Img_TemUp, LV_OBJ_FLAG_CLICKABLE);
    lv_img_set_src(ui->ui_Aircon_Img_TemUp, &_arrow_up_alpha_9x4);
    lv_img_set_pivot(ui->ui_Aircon_Img_TemUp, 50,50);
    lv_img_set_angle(ui->ui_Aircon_Img_TemUp, 0);
    lv_obj_set_pos(ui->ui_Aircon_Img_TemUp, 91, 41);
    lv_obj_set_size(ui->ui_Aircon_Img_TemUp, 9, 4);

    //Write style for ui_Aircon_Img_TemUp, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_img_recolor_opa(ui->ui_Aircon_Img_TemUp, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_img_opa(ui->ui_Aircon_Img_TemUp, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->ui_Aircon_Img_TemUp, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_clip_corner(ui->ui_Aircon_Img_TemUp, true, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes ui_Aircon_Img_TempDown
    ui->ui_Aircon_Img_TempDown = lv_img_create(ui->ui_Aircon_Cont);
    lv_obj_add_flag(ui->ui_Aircon_Img_TempDown, LV_OBJ_FLAG_CLICKABLE);
    lv_img_set_src(ui->ui_Aircon_Img_TempDown, &_arrow_down_alpha_9x4);
    lv_img_set_pivot(ui->ui_Aircon_Img_TempDown, 50,50);
    lv_img_set_angle(ui->ui_Aircon_Img_TempDown, 0);
    lv_obj_set_pos(ui->ui_Aircon_Img_TempDown, 127, 41);
    lv_obj_set_size(ui->ui_Aircon_Img_TempDown, 9, 4);

    //Write style for ui_Aircon_Img_TempDown, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_img_recolor_opa(ui->ui_Aircon_Img_TempDown, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_img_opa(ui->ui_Aircon_Img_TempDown, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->ui_Aircon_Img_TempDown, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_clip_corner(ui->ui_Aircon_Img_TempDown, true, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes ui_Aircon_Roller_Mode
    ui->ui_Aircon_Roller_Mode = lv_roller_create(ui->ui_Aircon_Cont);
    lv_roller_set_options(ui->ui_Aircon_Roller_Mode, "COOL\nDRY\nFAN", LV_ROLLER_MODE_INFINITE);
    lv_obj_set_pos(ui->ui_Aircon_Roller_Mode, 3, 136);
    lv_obj_set_width(ui->ui_Aircon_Roller_Mode, 57);

    //Write style for ui_Aircon_Roller_Mode, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_radius(ui->ui_Aircon_Roller_Mode, 5, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->ui_Aircon_Roller_Mode, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->ui_Aircon_Roller_Mode, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->ui_Aircon_Roller_Mode, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->ui_Aircon_Roller_Mode, lv_color_hex(0x9D9D9D), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->ui_Aircon_Roller_Mode, &lv_font_Antonio_Regular_11, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->ui_Aircon_Roller_Mode, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->ui_Aircon_Roller_Mode, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->ui_Aircon_Roller_Mode, 4, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui->ui_Aircon_Roller_Mode, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui->ui_Aircon_Roller_Mode, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui->ui_Aircon_Roller_Mode, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->ui_Aircon_Roller_Mode, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->ui_Aircon_Roller_Mode, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->ui_Aircon_Roller_Mode, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    lv_roller_set_visible_row_count(ui->ui_Aircon_Roller_Mode, 3);
    //Write codes ui_Aircon_Btn_Swing
    ui->ui_Aircon_Btn_Swing = lv_btn_create(ui->ui_Aircon_Cont);
    lv_obj_add_flag(ui->ui_Aircon_Btn_Swing, LV_OBJ_FLAG_CHECKABLE);
    ui->ui_Aircon_Btn_Swing_label = lv_label_create(ui->ui_Aircon_Btn_Swing);
    lv_label_set_text(ui->ui_Aircon_Btn_Swing_label, "ON");
    lv_label_set_long_mode(ui->ui_Aircon_Btn_Swing_label, LV_LABEL_LONG_WRAP);
    lv_obj_align(ui->ui_Aircon_Btn_Swing_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->ui_Aircon_Btn_Swing, 0, LV_STATE_DEFAULT);
    lv_obj_set_width(ui->ui_Aircon_Btn_Swing_label, LV_PCT(100));
    lv_obj_set_pos(ui->ui_Aircon_Btn_Swing, 43, 233);
    lv_obj_set_size(ui->ui_Aircon_Btn_Swing, 22, 14);

    //Write style for ui_Aircon_Btn_Swing, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->ui_Aircon_Btn_Swing, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->ui_Aircon_Btn_Swing, lv_color_hex(0x6A6A6A), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->ui_Aircon_Btn_Swing, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->ui_Aircon_Btn_Swing, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->ui_Aircon_Btn_Swing, 10, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->ui_Aircon_Btn_Swing, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->ui_Aircon_Btn_Swing, lv_color_hex(0x9D9D9D), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->ui_Aircon_Btn_Swing, &lv_font_Antonio_Regular_11, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->ui_Aircon_Btn_Swing, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->ui_Aircon_Btn_Swing, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style for ui_Aircon_Btn_Swing, Part: LV_PART_MAIN, State: LV_STATE_PRESSED.
    lv_obj_set_style_bg_opa(ui->ui_Aircon_Btn_Swing, 255, LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_bg_color(ui->ui_Aircon_Btn_Swing, lv_color_hex(0x29BAE6), LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_bg_grad_dir(ui->ui_Aircon_Btn_Swing, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_border_width(ui->ui_Aircon_Btn_Swing, 0, LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_radius(ui->ui_Aircon_Btn_Swing, 10, LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_shadow_width(ui->ui_Aircon_Btn_Swing, 0, LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_text_color(ui->ui_Aircon_Btn_Swing, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_text_font(ui->ui_Aircon_Btn_Swing, &lv_font_Antonio_Regular_11, LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_text_opa(ui->ui_Aircon_Btn_Swing, 255, LV_PART_MAIN|LV_STATE_PRESSED);

    //Write style for ui_Aircon_Btn_Swing, Part: LV_PART_MAIN, State: LV_STATE_CHECKED.
    lv_obj_set_style_bg_opa(ui->ui_Aircon_Btn_Swing, 255, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_bg_color(ui->ui_Aircon_Btn_Swing, lv_color_hex(0x29BAE6), LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_bg_grad_dir(ui->ui_Aircon_Btn_Swing, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_border_width(ui->ui_Aircon_Btn_Swing, 0, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_radius(ui->ui_Aircon_Btn_Swing, 10, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_shadow_width(ui->ui_Aircon_Btn_Swing, 0, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_text_color(ui->ui_Aircon_Btn_Swing, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_text_font(ui->ui_Aircon_Btn_Swing, &lv_font_Antonio_Regular_11, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_text_opa(ui->ui_Aircon_Btn_Swing, 255, LV_PART_MAIN|LV_STATE_CHECKED);

    //Write codes ui_Aircon_Label_Swing
    ui->ui_Aircon_Label_Swing = lv_label_create(ui->ui_Aircon_Cont);
    lv_label_set_text(ui->ui_Aircon_Label_Swing, "SWING");
    lv_label_set_long_mode(ui->ui_Aircon_Label_Swing, LV_LABEL_LONG_WRAP);
    lv_obj_set_pos(ui->ui_Aircon_Label_Swing, 4, 226);
    lv_obj_set_size(ui->ui_Aircon_Label_Swing, 41, 22);

    //Write style for ui_Aircon_Label_Swing, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->ui_Aircon_Label_Swing, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->ui_Aircon_Label_Swing, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->ui_Aircon_Label_Swing, lv_color_hex(0x52DAFF), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->ui_Aircon_Label_Swing, &lv_font_Antonio_Regular_11, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->ui_Aircon_Label_Swing, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->ui_Aircon_Label_Swing, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->ui_Aircon_Label_Swing, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->ui_Aircon_Label_Swing, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->ui_Aircon_Label_Swing, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->ui_Aircon_Label_Swing, 8, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->ui_Aircon_Label_Swing, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->ui_Aircon_Label_Swing, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->ui_Aircon_Label_Swing, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->ui_Aircon_Label_Swing, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes ui_Aircon_line_1
    ui->ui_Aircon_line_1 = lv_line_create(ui->ui_Aircon_Cont);
    static lv_point_t ui_Aircon_line_1[] = {{0, 0},{360, 0},};
    lv_line_set_points(ui->ui_Aircon_line_1, ui_Aircon_line_1, 2);
    lv_obj_set_pos(ui->ui_Aircon_line_1, 7, 74);
    lv_obj_set_size(ui->ui_Aircon_line_1, 150, 1);

    //Write style for ui_Aircon_line_1, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_line_width(ui->ui_Aircon_line_1, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_color(ui->ui_Aircon_line_1, lv_color_hex(0x656461), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_opa(ui->ui_Aircon_line_1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes ui_Aircon_line_2
    ui->ui_Aircon_line_2 = lv_line_create(ui->ui_Aircon_Cont);
    static lv_point_t ui_Aircon_line_2[] = {{0, 0},{360, 0},};
    lv_line_set_points(ui->ui_Aircon_line_2, ui_Aircon_line_2, 2);
    lv_obj_set_pos(ui->ui_Aircon_line_2, 7, 134);
    lv_obj_set_size(ui->ui_Aircon_line_2, 150, 3);

    //Write style for ui_Aircon_line_2, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_line_width(ui->ui_Aircon_line_2, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_color(ui->ui_Aircon_line_2, lv_color_hex(0x656461), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_opa(ui->ui_Aircon_line_2, 255, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes ui_Aircon_line_3
    ui->ui_Aircon_line_3 = lv_line_create(ui->ui_Aircon_Cont);
    static lv_point_t ui_Aircon_line_3[] = {{0, 0},{360, 0},};
    lv_line_set_points(ui->ui_Aircon_line_3, ui_Aircon_line_3, 2);
    lv_obj_set_pos(ui->ui_Aircon_line_3, 7, 221);
    lv_obj_set_size(ui->ui_Aircon_line_3, 150, 1);

    //Write style for ui_Aircon_line_3, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_line_width(ui->ui_Aircon_line_3, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_color(ui->ui_Aircon_line_3, lv_color_hex(0x656461), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_opa(ui->ui_Aircon_line_3, 255, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes ui_Aircon_line_4
    ui->ui_Aircon_line_4 = lv_line_create(ui->ui_Aircon_Cont);
    static lv_point_t ui_Aircon_line_4[] = {{0, 0},{0, 100},};
    lv_line_set_points(ui->ui_Aircon_line_4, ui_Aircon_line_4, 2);
    lv_obj_set_pos(ui->ui_Aircon_line_4, 79, 160);
    lv_obj_set_size(ui->ui_Aircon_line_4, 11, 49);

    //Write style for ui_Aircon_line_4, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_line_width(ui->ui_Aircon_line_4, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_color(ui->ui_Aircon_line_4, lv_color_hex(0x656461), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_opa(ui->ui_Aircon_line_4, 255, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes ui_Aircon_line_5
    ui->ui_Aircon_line_5 = lv_line_create(ui->ui_Aircon_Cont);
    static lv_point_t ui_Aircon_line_5[] = {{0, 0},{0, 50},};
    lv_line_set_points(ui->ui_Aircon_line_5, ui_Aircon_line_5, 2);
    lv_obj_set_pos(ui->ui_Aircon_line_5, 70, 227);
    lv_obj_set_size(ui->ui_Aircon_line_5, 0, 24);

    //Write style for ui_Aircon_line_5, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_line_width(ui->ui_Aircon_line_5, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_color(ui->ui_Aircon_line_5, lv_color_hex(0x656461), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_opa(ui->ui_Aircon_line_5, 255, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes ui_Aircon_Label_Timer
    ui->ui_Aircon_Label_Timer = lv_label_create(ui->ui_Aircon_Cont);
    lv_label_set_text(ui->ui_Aircon_Label_Timer, "SET TIMER");
    lv_label_set_long_mode(ui->ui_Aircon_Label_Timer, LV_LABEL_LONG_WRAP);
    lv_obj_set_pos(ui->ui_Aircon_Label_Timer, 44, 72);
    lv_obj_set_size(ui->ui_Aircon_Label_Timer, 78, 21);

    //Write style for ui_Aircon_Label_Timer, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->ui_Aircon_Label_Timer, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->ui_Aircon_Label_Timer, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->ui_Aircon_Label_Timer, lv_color_hex(0x52DAFF), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->ui_Aircon_Label_Timer, &lv_font_Antonio_Regular_11, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->ui_Aircon_Label_Timer, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->ui_Aircon_Label_Timer, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->ui_Aircon_Label_Timer, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->ui_Aircon_Label_Timer, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->ui_Aircon_Label_Timer, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->ui_Aircon_Label_Timer, 8, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->ui_Aircon_Label_Timer, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->ui_Aircon_Label_Timer, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->ui_Aircon_Label_Timer, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->ui_Aircon_Label_Timer, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes ui_Aircon_Label_Mode
    ui->ui_Aircon_Label_Mode = lv_label_create(ui->ui_Aircon_Cont);
    lv_label_set_text(ui->ui_Aircon_Label_Mode, "SELECT MODE");
    lv_label_set_long_mode(ui->ui_Aircon_Label_Mode, LV_LABEL_LONG_WRAP);
    lv_obj_set_pos(ui->ui_Aircon_Label_Mode, 42, 133);
    lv_obj_set_size(ui->ui_Aircon_Label_Mode, 82, 24);

    //Write style for ui_Aircon_Label_Mode, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->ui_Aircon_Label_Mode, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->ui_Aircon_Label_Mode, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->ui_Aircon_Label_Mode, lv_color_hex(0x52DAFF), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->ui_Aircon_Label_Mode, &lv_font_Antonio_Regular_11, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->ui_Aircon_Label_Mode, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->ui_Aircon_Label_Mode, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->ui_Aircon_Label_Mode, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->ui_Aircon_Label_Mode, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->ui_Aircon_Label_Mode, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->ui_Aircon_Label_Mode, 8, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->ui_Aircon_Label_Mode, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->ui_Aircon_Label_Mode, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->ui_Aircon_Label_Mode, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->ui_Aircon_Label_Mode, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes ui_Aircon_Label_Fan
    ui->ui_Aircon_Label_Fan = lv_label_create(ui->ui_Aircon_Cont);
    lv_label_set_text(ui->ui_Aircon_Label_Fan, "FAN");
    lv_label_set_long_mode(ui->ui_Aircon_Label_Fan, LV_LABEL_LONG_WRAP);
    lv_obj_set_pos(ui->ui_Aircon_Label_Fan, 72, 221);
    lv_obj_set_size(ui->ui_Aircon_Label_Fan, 22, 24);

    //Write style for ui_Aircon_Label_Fan, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->ui_Aircon_Label_Fan, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->ui_Aircon_Label_Fan, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->ui_Aircon_Label_Fan, lv_color_hex(0x52DAFF), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->ui_Aircon_Label_Fan, &lv_font_Antonio_Regular_11, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->ui_Aircon_Label_Fan, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->ui_Aircon_Label_Fan, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->ui_Aircon_Label_Fan, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->ui_Aircon_Label_Fan, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->ui_Aircon_Label_Fan, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->ui_Aircon_Label_Fan, 8, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->ui_Aircon_Label_Fan, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->ui_Aircon_Label_Fan, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->ui_Aircon_Label_Fan, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->ui_Aircon_Label_Fan, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes ui_Aircon_Slider_Fan
    ui->ui_Aircon_Slider_Fan = lv_slider_create(ui->ui_Aircon_Cont);
    lv_slider_set_range(ui->ui_Aircon_Slider_Fan, 0, 2);
    lv_slider_set_mode(ui->ui_Aircon_Slider_Fan, LV_SLIDER_MODE_NORMAL);
    lv_slider_set_value(ui->ui_Aircon_Slider_Fan, 1, LV_ANIM_OFF);
    lv_obj_set_pos(ui->ui_Aircon_Slider_Fan, 96, 233);
    lv_obj_set_size(ui->ui_Aircon_Slider_Fan, 63, 2);

    //Write style for ui_Aircon_Slider_Fan, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->ui_Aircon_Slider_Fan, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->ui_Aircon_Slider_Fan, lv_color_hex(0x6A6A6A), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->ui_Aircon_Slider_Fan, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->ui_Aircon_Slider_Fan, 50, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_outline_width(ui->ui_Aircon_Slider_Fan, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->ui_Aircon_Slider_Fan, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style for ui_Aircon_Slider_Fan, Part: LV_PART_INDICATOR, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->ui_Aircon_Slider_Fan, 255, LV_PART_INDICATOR|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->ui_Aircon_Slider_Fan, lv_color_hex(0x29BAE6), LV_PART_INDICATOR|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->ui_Aircon_Slider_Fan, LV_GRAD_DIR_NONE, LV_PART_INDICATOR|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->ui_Aircon_Slider_Fan, 50, LV_PART_INDICATOR|LV_STATE_DEFAULT);

    //Write style for ui_Aircon_Slider_Fan, Part: LV_PART_KNOB, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->ui_Aircon_Slider_Fan, 255, LV_PART_KNOB|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->ui_Aircon_Slider_Fan, lv_color_hex(0xffffff), LV_PART_KNOB|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->ui_Aircon_Slider_Fan, LV_GRAD_DIR_NONE, LV_PART_KNOB|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->ui_Aircon_Slider_Fan, 50, LV_PART_KNOB|LV_STATE_DEFAULT);

    //Write codes ui_Aircon_Label_Low
    ui->ui_Aircon_Label_Low = lv_label_create(ui->ui_Aircon_Cont);
    lv_label_set_text(ui->ui_Aircon_Label_Low, "•\nL");
    lv_label_set_long_mode(ui->ui_Aircon_Label_Low, LV_LABEL_LONG_WRAP);
    lv_obj_set_pos(ui->ui_Aircon_Label_Low, 84, 224);
    lv_obj_set_size(ui->ui_Aircon_Label_Low, 24, 35);

    //Write style for ui_Aircon_Label_Low, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->ui_Aircon_Label_Low, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->ui_Aircon_Label_Low, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->ui_Aircon_Label_Low, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->ui_Aircon_Label_Low, &lv_font_Antonio_Regular_11, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->ui_Aircon_Label_Low, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->ui_Aircon_Label_Low, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->ui_Aircon_Label_Low, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->ui_Aircon_Label_Low, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->ui_Aircon_Label_Low, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->ui_Aircon_Label_Low, 8, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->ui_Aircon_Label_Low, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->ui_Aircon_Label_Low, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->ui_Aircon_Label_Low, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->ui_Aircon_Label_Low, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes ui_Aircon_Label_Medium
    ui->ui_Aircon_Label_Medium = lv_label_create(ui->ui_Aircon_Cont);
    lv_label_set_text(ui->ui_Aircon_Label_Medium, "•\nM");
    lv_label_set_long_mode(ui->ui_Aircon_Label_Medium, LV_LABEL_LONG_WRAP);
    lv_obj_set_pos(ui->ui_Aircon_Label_Medium, 102, 224);
    lv_obj_set_size(ui->ui_Aircon_Label_Medium, 51, 35);

    //Write style for ui_Aircon_Label_Medium, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->ui_Aircon_Label_Medium, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->ui_Aircon_Label_Medium, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->ui_Aircon_Label_Medium, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->ui_Aircon_Label_Medium, &lv_font_Antonio_Regular_11, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->ui_Aircon_Label_Medium, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->ui_Aircon_Label_Medium, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->ui_Aircon_Label_Medium, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->ui_Aircon_Label_Medium, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->ui_Aircon_Label_Medium, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->ui_Aircon_Label_Medium, 8, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->ui_Aircon_Label_Medium, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->ui_Aircon_Label_Medium, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->ui_Aircon_Label_Medium, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->ui_Aircon_Label_Medium, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes ui_Aircon_Label_High
    ui->ui_Aircon_Label_High = lv_label_create(ui->ui_Aircon_Cont);
    lv_label_set_text(ui->ui_Aircon_Label_High, "•\nH");
    lv_label_set_long_mode(ui->ui_Aircon_Label_High, LV_LABEL_LONG_WRAP);
    lv_obj_set_pos(ui->ui_Aircon_Label_High, 144, 224);
    lv_obj_set_size(ui->ui_Aircon_Label_High, 30, 31);

    //Write style for ui_Aircon_Label_High, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->ui_Aircon_Label_High, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->ui_Aircon_Label_High, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->ui_Aircon_Label_High, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->ui_Aircon_Label_High, &lv_font_Antonio_Regular_11, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->ui_Aircon_Label_High, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->ui_Aircon_Label_High, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->ui_Aircon_Label_High, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->ui_Aircon_Label_High, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->ui_Aircon_Label_High, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->ui_Aircon_Label_High, 8, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->ui_Aircon_Label_High, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->ui_Aircon_Label_High, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->ui_Aircon_Label_High, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->ui_Aircon_Label_High, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes ui_Aircon_Label_Comp
    ui->ui_Aircon_Label_Comp = lv_label_create(ui->ui_Aircon_Cont);
    lv_label_set_text(ui->ui_Aircon_Label_Comp, "COMP");
    lv_label_set_long_mode(ui->ui_Aircon_Label_Comp, LV_LABEL_LONG_WRAP);
    lv_obj_set_pos(ui->ui_Aircon_Label_Comp, 113, 149);
    lv_obj_set_size(ui->ui_Aircon_Label_Comp, 37, 20);

    //Write style for ui_Aircon_Label_Comp, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->ui_Aircon_Label_Comp, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->ui_Aircon_Label_Comp, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->ui_Aircon_Label_Comp, lv_color_hex(0x52DAFF), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->ui_Aircon_Label_Comp, &lv_font_Antonio_Regular_11, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->ui_Aircon_Label_Comp, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->ui_Aircon_Label_Comp, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->ui_Aircon_Label_Comp, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->ui_Aircon_Label_Comp, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->ui_Aircon_Label_Comp, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->ui_Aircon_Label_Comp, 8, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->ui_Aircon_Label_Comp, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->ui_Aircon_Label_Comp, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->ui_Aircon_Label_Comp, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->ui_Aircon_Label_Comp, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes ui_Aircon_Label_On
    ui->ui_Aircon_Label_On = lv_label_create(ui->ui_Aircon_Cont);
    lv_label_set_text(ui->ui_Aircon_Label_On, "ON");
    lv_label_set_long_mode(ui->ui_Aircon_Label_On, LV_LABEL_LONG_WRAP);
    lv_obj_set_pos(ui->ui_Aircon_Label_On, 117, 160);
    lv_obj_set_size(ui->ui_Aircon_Label_On, 24, 21);

    //Write style for ui_Aircon_Label_On, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->ui_Aircon_Label_On, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->ui_Aircon_Label_On, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->ui_Aircon_Label_On, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->ui_Aircon_Label_On, &lv_font_Antonio_Regular_11, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->ui_Aircon_Label_On, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->ui_Aircon_Label_On, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->ui_Aircon_Label_On, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->ui_Aircon_Label_On, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->ui_Aircon_Label_On, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->ui_Aircon_Label_On, 8, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->ui_Aircon_Label_On, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->ui_Aircon_Label_On, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->ui_Aircon_Label_On, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->ui_Aircon_Label_On, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes ui_Aircon_Img_Comp
    ui->ui_Aircon_Img_Comp = lv_img_create(ui->ui_Aircon_Cont);
    lv_obj_add_flag(ui->ui_Aircon_Img_Comp, LV_OBJ_FLAG_CLICKABLE);
    lv_img_set_src(ui->ui_Aircon_Img_Comp, &_icn_cool_alpha_10x10);
    lv_img_set_pivot(ui->ui_Aircon_Img_Comp, 50,50);
    lv_img_set_angle(ui->ui_Aircon_Img_Comp, 0);
    lv_obj_set_pos(ui->ui_Aircon_Img_Comp, 88, 164);
    lv_obj_set_size(ui->ui_Aircon_Img_Comp, 10, 10);

    //Write style for ui_Aircon_Img_Comp, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_img_recolor_opa(ui->ui_Aircon_Img_Comp, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_img_opa(ui->ui_Aircon_Img_Comp, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->ui_Aircon_Img_Comp, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_clip_corner(ui->ui_Aircon_Img_Comp, true, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes ui_Aircon_Label_FanSt
    ui->ui_Aircon_Label_FanSt = lv_label_create(ui->ui_Aircon_Cont);
    lv_label_set_text(ui->ui_Aircon_Label_FanSt, "FAN");
    lv_label_set_long_mode(ui->ui_Aircon_Label_FanSt, LV_LABEL_LONG_WRAP);
    lv_obj_set_pos(ui->ui_Aircon_Label_FanSt, 112, 183);
    lv_obj_set_size(ui->ui_Aircon_Label_FanSt, 36, 20);

    //Write style for ui_Aircon_Label_FanSt, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->ui_Aircon_Label_FanSt, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->ui_Aircon_Label_FanSt, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->ui_Aircon_Label_FanSt, lv_color_hex(0x52DAFF), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->ui_Aircon_Label_FanSt, &lv_font_Antonio_Regular_11, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->ui_Aircon_Label_FanSt, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->ui_Aircon_Label_FanSt, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->ui_Aircon_Label_FanSt, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->ui_Aircon_Label_FanSt, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->ui_Aircon_Label_FanSt, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->ui_Aircon_Label_FanSt, 8, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->ui_Aircon_Label_FanSt, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->ui_Aircon_Label_FanSt, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->ui_Aircon_Label_FanSt, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->ui_Aircon_Label_FanSt, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes ui_Aircon_Label_FanState
    ui->ui_Aircon_Label_FanState = lv_label_create(ui->ui_Aircon_Cont);
    lv_label_set_text(ui->ui_Aircon_Label_FanState, "LOW");
    lv_label_set_long_mode(ui->ui_Aircon_Label_FanState, LV_LABEL_LONG_WRAP);
    lv_obj_set_pos(ui->ui_Aircon_Label_FanState, 104, 196);
    lv_obj_set_size(ui->ui_Aircon_Label_FanState, 54, 23);

    //Write style for ui_Aircon_Label_FanState, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->ui_Aircon_Label_FanState, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->ui_Aircon_Label_FanState, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->ui_Aircon_Label_FanState, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->ui_Aircon_Label_FanState, &lv_font_Antonio_Regular_11, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->ui_Aircon_Label_FanState, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->ui_Aircon_Label_FanState, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->ui_Aircon_Label_FanState, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->ui_Aircon_Label_FanState, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->ui_Aircon_Label_FanState, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->ui_Aircon_Label_FanState, 8, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->ui_Aircon_Label_FanState, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->ui_Aircon_Label_FanState, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->ui_Aircon_Label_FanState, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->ui_Aircon_Label_FanState, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes ui_Aircon_Img_FanSt
    ui->ui_Aircon_Img_FanSt = lv_img_create(ui->ui_Aircon_Cont);
    lv_obj_add_flag(ui->ui_Aircon_Img_FanSt, LV_OBJ_FLAG_CLICKABLE);
    lv_img_set_src(ui->ui_Aircon_Img_FanSt, &_icn_fan_low_alpha_10x9);
    lv_img_set_pivot(ui->ui_Aircon_Img_FanSt, 50,50);
    lv_img_set_angle(ui->ui_Aircon_Img_FanSt, 0);
    lv_obj_set_pos(ui->ui_Aircon_Img_FanSt, 88, 193);
    lv_obj_set_size(ui->ui_Aircon_Img_FanSt, 10, 9);

    //Write style for ui_Aircon_Img_FanSt, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_img_recolor_opa(ui->ui_Aircon_Img_FanSt, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_img_opa(ui->ui_Aircon_Img_FanSt, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->ui_Aircon_Img_FanSt, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_clip_corner(ui->ui_Aircon_Img_FanSt, true, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes ui_Aircon_Btn_TimerUp
    ui->ui_Aircon_Btn_TimerUp = lv_btn_create(ui->ui_Aircon_Cont);
    ui->ui_Aircon_Btn_TimerUp_label = lv_label_create(ui->ui_Aircon_Btn_TimerUp);
    lv_label_set_text(ui->ui_Aircon_Btn_TimerUp_label, "");
    lv_label_set_long_mode(ui->ui_Aircon_Btn_TimerUp_label, LV_LABEL_LONG_WRAP);
    lv_obj_align(ui->ui_Aircon_Btn_TimerUp_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->ui_Aircon_Btn_TimerUp, 0, LV_STATE_DEFAULT);
    lv_obj_set_width(ui->ui_Aircon_Btn_TimerUp_label, LV_PCT(100));
    lv_obj_set_pos(ui->ui_Aircon_Btn_TimerUp, 84, 100);
    lv_obj_set_size(ui->ui_Aircon_Btn_TimerUp, 23, 23);

    //Write style for ui_Aircon_Btn_TimerUp, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->ui_Aircon_Btn_TimerUp, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->ui_Aircon_Btn_TimerUp, lv_color_hex(0x29BAE6), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->ui_Aircon_Btn_TimerUp, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->ui_Aircon_Btn_TimerUp, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->ui_Aircon_Btn_TimerUp, 10, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->ui_Aircon_Btn_TimerUp, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->ui_Aircon_Btn_TimerUp, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->ui_Aircon_Btn_TimerUp, &lv_font_SourceHanSerifSC_Regular_11, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->ui_Aircon_Btn_TimerUp, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->ui_Aircon_Btn_TimerUp, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style for ui_Aircon_Btn_TimerUp, Part: LV_PART_MAIN, State: LV_STATE_PRESSED.
    lv_obj_set_style_bg_opa(ui->ui_Aircon_Btn_TimerUp, 255, LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_bg_color(ui->ui_Aircon_Btn_TimerUp, lv_color_hex(0x18C220), LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_bg_grad_dir(ui->ui_Aircon_Btn_TimerUp, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_border_width(ui->ui_Aircon_Btn_TimerUp, 0, LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_radius(ui->ui_Aircon_Btn_TimerUp, 10, LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_shadow_width(ui->ui_Aircon_Btn_TimerUp, 0, LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_text_color(ui->ui_Aircon_Btn_TimerUp, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_text_font(ui->ui_Aircon_Btn_TimerUp, &lv_font_SourceHanSerifSC_Regular_11, LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_text_opa(ui->ui_Aircon_Btn_TimerUp, 255, LV_PART_MAIN|LV_STATE_PRESSED);

    //Write codes ui_Aircon_Img_TimerUp
    ui->ui_Aircon_Img_TimerUp = lv_img_create(ui->ui_Aircon_Cont);
    lv_obj_add_flag(ui->ui_Aircon_Img_TimerUp, LV_OBJ_FLAG_CLICKABLE);
    lv_img_set_src(ui->ui_Aircon_Img_TimerUp, &_arrow_up_alpha_9x4);
    lv_img_set_pivot(ui->ui_Aircon_Img_TimerUp, 50,50);
    lv_img_set_angle(ui->ui_Aircon_Img_TimerUp, 0);
    lv_obj_set_pos(ui->ui_Aircon_Img_TimerUp, 91, 109);
    lv_obj_set_size(ui->ui_Aircon_Img_TimerUp, 9, 4);

    //Write style for ui_Aircon_Img_TimerUp, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_img_recolor_opa(ui->ui_Aircon_Img_TimerUp, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_img_opa(ui->ui_Aircon_Img_TimerUp, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->ui_Aircon_Img_TimerUp, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_clip_corner(ui->ui_Aircon_Img_TimerUp, true, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes ui_Aircon_Btn_TimerDown
    ui->ui_Aircon_Btn_TimerDown = lv_btn_create(ui->ui_Aircon_Cont);
    ui->ui_Aircon_Btn_TimerDown_label = lv_label_create(ui->ui_Aircon_Btn_TimerDown);
    lv_label_set_text(ui->ui_Aircon_Btn_TimerDown_label, "");
    lv_label_set_long_mode(ui->ui_Aircon_Btn_TimerDown_label, LV_LABEL_LONG_WRAP);
    lv_obj_align(ui->ui_Aircon_Btn_TimerDown_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->ui_Aircon_Btn_TimerDown, 0, LV_STATE_DEFAULT);
    lv_obj_set_width(ui->ui_Aircon_Btn_TimerDown_label, LV_PCT(100));
    lv_obj_set_pos(ui->ui_Aircon_Btn_TimerDown, 120, 100);
    lv_obj_set_size(ui->ui_Aircon_Btn_TimerDown, 23, 23);

    //Write style for ui_Aircon_Btn_TimerDown, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->ui_Aircon_Btn_TimerDown, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->ui_Aircon_Btn_TimerDown, lv_color_hex(0x29BAE6), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->ui_Aircon_Btn_TimerDown, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->ui_Aircon_Btn_TimerDown, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->ui_Aircon_Btn_TimerDown, 10, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->ui_Aircon_Btn_TimerDown, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->ui_Aircon_Btn_TimerDown, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->ui_Aircon_Btn_TimerDown, &lv_font_SourceHanSerifSC_Regular_11, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->ui_Aircon_Btn_TimerDown, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->ui_Aircon_Btn_TimerDown, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style for ui_Aircon_Btn_TimerDown, Part: LV_PART_MAIN, State: LV_STATE_PRESSED.
    lv_obj_set_style_bg_opa(ui->ui_Aircon_Btn_TimerDown, 255, LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_bg_color(ui->ui_Aircon_Btn_TimerDown, lv_color_hex(0x18C220), LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_bg_grad_dir(ui->ui_Aircon_Btn_TimerDown, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_border_width(ui->ui_Aircon_Btn_TimerDown, 0, LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_radius(ui->ui_Aircon_Btn_TimerDown, 10, LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_shadow_width(ui->ui_Aircon_Btn_TimerDown, 0, LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_text_color(ui->ui_Aircon_Btn_TimerDown, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_text_font(ui->ui_Aircon_Btn_TimerDown, &lv_font_SourceHanSerifSC_Regular_11, LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_text_opa(ui->ui_Aircon_Btn_TimerDown, 255, LV_PART_MAIN|LV_STATE_PRESSED);

    //Write codes ui_Aircon_Img_TimerDown
    ui->ui_Aircon_Img_TimerDown = lv_img_create(ui->ui_Aircon_Cont);
    lv_obj_add_flag(ui->ui_Aircon_Img_TimerDown, LV_OBJ_FLAG_CLICKABLE);
    lv_img_set_src(ui->ui_Aircon_Img_TimerDown, &_arrow_down_alpha_9x4);
    lv_img_set_pivot(ui->ui_Aircon_Img_TimerDown, 50,50);
    lv_img_set_angle(ui->ui_Aircon_Img_TimerDown, 0);
    lv_obj_set_pos(ui->ui_Aircon_Img_TimerDown, 127, 109);
    lv_obj_set_size(ui->ui_Aircon_Img_TimerDown, 9, 4);

    //Write style for ui_Aircon_Img_TimerDown, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_img_recolor_opa(ui->ui_Aircon_Img_TimerDown, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_img_opa(ui->ui_Aircon_Img_TimerDown, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->ui_Aircon_Img_TimerDown, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_clip_corner(ui->ui_Aircon_Img_TimerDown, true, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes ui_Aircon_Label_TimerHour
    ui->ui_Aircon_Label_TimerHour = lv_label_create(ui->ui_Aircon_Cont);
    lv_label_set_text(ui->ui_Aircon_Label_TimerHour, "01");
    lv_label_set_long_mode(ui->ui_Aircon_Label_TimerHour, LV_LABEL_LONG_WRAP);
    lv_obj_set_pos(ui->ui_Aircon_Label_TimerHour, 4, 88);
    lv_obj_set_size(ui->ui_Aircon_Label_TimerHour, 31, 37);

    //Write style for ui_Aircon_Label_TimerHour, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->ui_Aircon_Label_TimerHour, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->ui_Aircon_Label_TimerHour, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->ui_Aircon_Label_TimerHour, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->ui_Aircon_Label_TimerHour, &lv_font_Antonio_Regular_22, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->ui_Aircon_Label_TimerHour, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->ui_Aircon_Label_TimerHour, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->ui_Aircon_Label_TimerHour, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->ui_Aircon_Label_TimerHour, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->ui_Aircon_Label_TimerHour, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->ui_Aircon_Label_TimerHour, 8, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->ui_Aircon_Label_TimerHour, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->ui_Aircon_Label_TimerHour, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->ui_Aircon_Label_TimerHour, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->ui_Aircon_Label_TimerHour, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes ui_Aircon_Label_TimerPoints
    ui->ui_Aircon_Label_TimerPoints = lv_label_create(ui->ui_Aircon_Cont);
    lv_label_set_text(ui->ui_Aircon_Label_TimerPoints, ":");
    lv_label_set_long_mode(ui->ui_Aircon_Label_TimerPoints, LV_LABEL_LONG_WRAP);
    lv_obj_set_pos(ui->ui_Aircon_Label_TimerPoints, 34, 87);
    lv_obj_set_size(ui->ui_Aircon_Label_TimerPoints, 7, 37);

    //Write style for ui_Aircon_Label_TimerPoints, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->ui_Aircon_Label_TimerPoints, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->ui_Aircon_Label_TimerPoints, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->ui_Aircon_Label_TimerPoints, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->ui_Aircon_Label_TimerPoints, &lv_font_Antonio_Regular_22, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->ui_Aircon_Label_TimerPoints, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->ui_Aircon_Label_TimerPoints, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->ui_Aircon_Label_TimerPoints, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->ui_Aircon_Label_TimerPoints, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->ui_Aircon_Label_TimerPoints, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->ui_Aircon_Label_TimerPoints, 8, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->ui_Aircon_Label_TimerPoints, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->ui_Aircon_Label_TimerPoints, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->ui_Aircon_Label_TimerPoints, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->ui_Aircon_Label_TimerPoints, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes ui_Aircon_Label_TimerMin
    ui->ui_Aircon_Label_TimerMin = lv_label_create(ui->ui_Aircon_Cont);
    lv_label_set_text(ui->ui_Aircon_Label_TimerMin, "15");
    lv_label_set_long_mode(ui->ui_Aircon_Label_TimerMin, LV_LABEL_LONG_WRAP);
    lv_obj_set_pos(ui->ui_Aircon_Label_TimerMin, 42, 88);
    lv_obj_set_size(ui->ui_Aircon_Label_TimerMin, 31, 37);

    //Write style for ui_Aircon_Label_TimerMin, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->ui_Aircon_Label_TimerMin, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->ui_Aircon_Label_TimerMin, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->ui_Aircon_Label_TimerMin, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->ui_Aircon_Label_TimerMin, &lv_font_Antonio_Regular_22, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->ui_Aircon_Label_TimerMin, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->ui_Aircon_Label_TimerMin, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->ui_Aircon_Label_TimerMin, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->ui_Aircon_Label_TimerMin, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->ui_Aircon_Label_TimerMin, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->ui_Aircon_Label_TimerMin, 8, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->ui_Aircon_Label_TimerMin, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->ui_Aircon_Label_TimerMin, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->ui_Aircon_Label_TimerMin, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->ui_Aircon_Label_TimerMin, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes ui_Aircon_Img_Fan
    ui->ui_Aircon_Img_Fan = lv_img_create(ui->ui_Aircon);
    lv_obj_add_flag(ui->ui_Aircon_Img_Fan, LV_OBJ_FLAG_CLICKABLE);
    lv_img_set_src(ui->ui_Aircon_Img_Fan, &_aircon_fan_1_alpha_36x36);
    lv_img_set_pivot(ui->ui_Aircon_Img_Fan, 50,50);
    lv_img_set_angle(ui->ui_Aircon_Img_Fan, 0);
    lv_obj_set_pos(ui->ui_Aircon_Img_Fan, 243, 80);
    lv_obj_set_size(ui->ui_Aircon_Img_Fan, 36, 36);

    //Write style for ui_Aircon_Img_Fan, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_img_recolor_opa(ui->ui_Aircon_Img_Fan, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_img_opa(ui->ui_Aircon_Img_Fan, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->ui_Aircon_Img_Fan, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_clip_corner(ui->ui_Aircon_Img_Fan, true, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes ui_Aircon_Img_Cool
    ui->ui_Aircon_Img_Cool = lv_img_create(ui->ui_Aircon);
    lv_obj_add_flag(ui->ui_Aircon_Img_Cool, LV_OBJ_FLAG_CLICKABLE);
    lv_img_set_src(ui->ui_Aircon_Img_Cool, &_aircon_cool_1_alpha_33x37);
    lv_img_set_pivot(ui->ui_Aircon_Img_Cool, 50,50);
    lv_img_set_angle(ui->ui_Aircon_Img_Cool, 0);
    lv_obj_set_pos(ui->ui_Aircon_Img_Cool, 208, 79);
    lv_obj_set_size(ui->ui_Aircon_Img_Cool, 33, 37);

    //Write style for ui_Aircon_Img_Cool, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_img_recolor_opa(ui->ui_Aircon_Img_Cool, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_img_opa(ui->ui_Aircon_Img_Cool, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->ui_Aircon_Img_Cool, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_clip_corner(ui->ui_Aircon_Img_Cool, true, LV_PART_MAIN|LV_STATE_DEFAULT);

    //The custom code of ui_Aircon.
    lv_img_set_src(guider_ui.ui_Aircon_Img_FanSt, &_icn_fan_low_alpha_11x10);

    //Update current screen layout.
    lv_obj_update_layout(ui->ui_Aircon);

    //Init events for screen.
    events_init_ui_Aircon(ui);
}
