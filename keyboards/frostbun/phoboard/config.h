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
#define MATRIX_ROW_PINS { D3, D2, D4, C6, D7, E6, B4, B5 }
#define MATRIX_COL_PINS { F4, F5, F6, F7, B1, B3, B2, B6 }

/* COL2ROW, ROW2COL */
#define DIODE_DIRECTION COL2ROW

/* Debounce reduces chatter (unintended double-presses) - set 0 if debouncing is not needed */
#define DEBOUNCE 5
