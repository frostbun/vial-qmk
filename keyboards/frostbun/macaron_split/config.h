// Copyright 2022 Manh Nguyen (@frostbun)
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

#include "config_common.h"

/* USB Device descriptor parameter */
#define VENDOR_ID       0x4642      // FB - frostbun
#define PRODUCT_ID      0x4D53      // MS - Macaron Split
#define DEVICE_VER      0x0001
#define MANUFACTURER    frostbun
#define PRODUCT         Macaron Split

/* Key matrix size */
// Rows are doubled-up
#define MATRIX_ROWS 8
#define MATRIX_COLS 4

/* Keyboard Matrix Assignments */
// Wiring of each half
#define MATRIX_ROW_PINS { D7, E6, B4, B5 }
#define MATRIX_COL_PINS { B6, B2, B3, B1 }

/* COL2ROW, ROW2COL */
#define DIODE_DIRECTION COL2ROW

/* Communication between sides */
#define SOFT_SERIAL_PIN D2
#define EE_HANDS

/* Debounce reduces chatter (unintended double-presses) - set 0 if debouncing is not needed */
#define DEBOUNCE 5
