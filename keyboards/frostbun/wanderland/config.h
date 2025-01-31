/*
Copyright 2021 KiwiKey

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#pragma once

#include "config_common.h"

/* USB Device descriptor parameter */
#define VENDOR_ID    0x4B57    // KW - KiwiKey
#define PRODUCT_ID   0x574C    // WL - Wanderland
#define DEVICE_VER   0x0001
#define MANUFACTURER KiwiKey
#define PRODUCT      Wanderland

/* Key matrix size */
#define MATRIX_ROWS 6
#define MATRIX_COLS 13

/* Keyboard Matrix Assignments */
#define MATRIX_ROW_PINS { F4, F1, E6, E2, C7, D4 }
#define MATRIX_COL_PINS { F5, F6, B4, D7, D6, D5, D2, D3, B0, F0, B1, B2, B3 }

/* COL2ROW, ROW2COL */
#define DIODE_DIRECTION COL2ROW

/* Debounce reduces chatter (unintended double-presses) - set 0 if debouncing is not needed */
#define DEBOUNCE 5

/* RGB Underglow */
#define RGB_DI_PIN F7
#define RGBLED_NUM 18
#define RGBLIGHT_DEFAULT_HUE 0
#define RGBLIGHT_DEFAULT_SAT 255
#define RGBLIGHT_DEFAULT_VAL 0
// #define RGBLIGHT_HUE_STEP 8
// #define RGBLIGHT_SAT_STEP 8
// #define RGBLIGHT_VAL_STEP 8
// #define RGBLIGHT_LIMIT_VAL 255 /* The maximum brightness level */
#define RGBLIGHT_SLEEP /* If defined, the RGB lighting will be switched off when the host goes to sleep */
