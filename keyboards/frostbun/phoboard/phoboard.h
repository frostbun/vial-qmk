// Copyright 2022 Manh Nguyen (@frostbun)
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

#include "quantum.h"

#define LAYOUT_phoboard( \
    K00, K01, K02, K03, K04, K05, K06, K07, K50, K51, K52, K53, K54, K55, K56, \
    K10,   K11, K12, K13, K14, K15, K16, K17, K61, K62, K63, K64, K65,   K66, \
    K20,    K21, K22, K23, K24, K25, K26, K27, K60, K72, K73, K74,      K67, \
    K30,      K31, K32, K33, K34, K35, K36, K37, K70, K71, K75,    K76, K77, \
    K40,    K41,        K42,        K43,        K44,        K45,        K46 \
) { \
    { K00, K01, K02, K03, K04, K05, K06, K07 }, \
    { K10, K11, K12, K13, K14, K15, K16, K17 }, \
    { K20, K21, K22, K23, K24, K25, K26, K27 }, \
    { K30, K31, K32, K33, K34, K35, K36, K37 }, \
    { K40, K41, K42, K43, K44, K45, K46, KC_NO }, \
    { K50, K51, K52, K53, K54, K55, K56, KC_NO }, \
    { K60, K61, K62, K63, K64, K65, K66, K67 }, \
    { K70, K71, K72, K73, K74, K75, K76, K77 } \
}
