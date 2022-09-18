// Copyright 2022 Manh Nguyen (@frostbun)
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

#include "config_common.h"

/* USB Device descriptor parameter */
#define VENDOR_ID       0x4642      // FB - frostbun
#define PRODUCT_ID      0x5042      // PB - PhoBoard
#define DEVICE_VER      0x0001
#define MANUFACTURER    frostbun
#define PRODUCT         PhoBoard

/* key matrix size */
#define MATRIX_ROWS 8
#define MATRIX_COLS 8

/* Keyboard Matrix Assignments */
#define MATRIX_ROW_PINS { F4, F7, F6, F5, B5, D3, D2, D4 }
#define MATRIX_COL_PINS { B6, B2, B3, B1, C6, B4, E6, D7 }

/* COL2ROW, ROW2COL */
#define DIODE_DIRECTION COL2ROW

/* Debounce reduces chatter (unintended double-presses) - set 0 if debouncing is not needed */
#define DEBOUNCE 5
