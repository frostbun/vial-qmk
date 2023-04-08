// Copyright 2022 Manh Nguyen (@frostbun)
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H
#include "oled.c"

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT_alice_split_bs(
        XXXXXXX,    KC_GRV,     KC_1,       KC_2,       KC_3,       KC_4,       KC_5,       KC_6,       KC_7,       KC_8,       KC_9,       KC_0,       KC_MINS,    KC_EQL,     KC_BSLS,    KC_DEL,
        XXXXXXX,    KC_TAB,     KC_Q,       KC_W,       KC_E,       KC_R,       KC_T,                   KC_Y,       KC_U,       KC_I,       KC_O,       KC_P,       KC_LBRC,    KC_RBRC,    KC_BSPC,
        XXXXXXX,    KC_ESC,     KC_A,       KC_S,       KC_D,       KC_F,       KC_G,                   KC_H,       KC_J,       KC_K,       KC_L,       KC_SCLN,    KC_QUOT,    KC_ENT,
        XXXXXXX,    KC_LSFT,    KC_Z,       KC_X,       KC_C,       KC_V,       KC_B,                   KC_B,       KC_N,       KC_M,       KC_COMM,    KC_DOT,     KC_SLSH,    KC_RSFT,    TG(1),
                    KC_LCTL,                KC_LALT,        KC_SPC,         KC_LGUI,                    LT(1, KC_SPC),      KC_RALT,                                            KC_RCTL
    ),
    [1] = LAYOUT_alice_split_bs(
        QK_BOOT,    _______,    KC_F1,      KC_F2,      KC_F3,      KC_F4,      KC_F5,      KC_F6,      KC_F7,      KC_F8,      KC_F9,      KC_F10,     KC_F11,     KC_F12,     _______,    KC_INS,
        EE_CLR,     _______,    _______,    _______,    _______,    _______,    _______,                KC_HOME,    KC_PGDN,    KC_PGUP,    KC_END,     KC_PSCR,    KC_MPRV,    KC_MNXT,    KC_MPLY,
        XXXXXXX,    KC_CAPS,    _______,    _______,    _______,    _______,    _______,                KC_LEFT,    KC_DOWN,    KC_UP,      KC_RGHT,    KC_VOLD,    KC_VOLU,    KC_MUTE,
        XXXXXXX,    _______,    _______,    _______,    _______,    _______,    _______,                _______,    _______,    _______,    _______,    _______,    _______,    _______,    _______,
                    _______,                _______,        _______,        _______,                    _______,            _______,                                            _______
    )
};
