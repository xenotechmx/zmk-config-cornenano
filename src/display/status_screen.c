/*
 * Copyright (c) 2026
 *
 * SPDX-License-Identifier: MIT
 */

#include <lvgl.h>
#include <zmk/display/status_screen.h>

#ifdef CONFIG_ZMK_SPLIT_ROLE_CENTRAL
#define CUSTOM_STATUS_TEXT "Zahit"
#else
#define CUSTOM_STATUS_TEXT "Rios"
#endif

lv_obj_t *zmk_display_status_screen(void) {
    lv_obj_t *screen = lv_obj_create(NULL, NULL);
    lv_obj_t *label = lv_label_create(screen, NULL);

    lv_label_set_text(label, CUSTOM_STATUS_TEXT);
    lv_obj_align(label, NULL, LV_ALIGN_CENTER, 0, 0);

    return screen;
}
