// Copyright 2022 Manh Nguyen (@frostbun)
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H
#include "led.c"

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT_macaron_pad(
        KC_BSPC,    KC_P9,      KC_P8,      KC_P7,
        KC_PMNS,    KC_P6,      KC_P5,      KC_P4,
        KC_PPLS,    KC_P3,      KC_P2,      KC_P1,
        OSL(3),     KC_PDOT,    KC_P0,      LT(1, KC_EQL)
    ),
    [1] = LAYOUT_macaron_pad(
        KC_DEL,     KC_BTN4,    KC_HOME,    KC_BTN5,
        KC_PSLS,    KC_PGUP,    KC_UP,      KC_PGDN,
        KC_PAST,    KC_LEFT,    KC_DOWN,    KC_RGHT,
        _______,    KC_CALC,    KC_END,     LT(2, KC_PSCR)
    ),
    [2] = LAYOUT_macaron_pad(
        KC_ESC,     KC_VOLU,    KC_MUTE,    KC_VOLD,
        KC_TAB,     KC_MPRV,    KC_MPLY,    KC_MNXT,
        XXXXXXX,    XXXXXXX,    XXXXXXX,    XXXXXXX,
        _______,    KC_SPC,     KC_ENT,     LT(3, KC_NUM)
    ),
    [3] = LAYOUT_macaron_pad(
        TO(3),  XXXXXXX,    XXXXXXX,    XXXXXXX,
        TO(2),  XXXXXXX,    XXXXXXX,    XXXXXXX,
        TO(1),  XXXXXXX,    XXXXXXX,    XXXXXXX,
        TO(0),  XXXXXXX,    XXXXXXX,    XXXXXXX
    ),
};
