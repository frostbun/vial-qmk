// Copyright 2022 Manh Nguyen (@frostbun)
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

#include "quantum.h"

#define LAYOUT_macaron_split( \
    L00, L01, L02, L03, R00, R01, R02, R03, \
    L10, L11, L12, L13, R10, R11, R12, R13, \
    L20, L21, L22, L23, R20, R21, R22, R23, \
    L30, L31, L32, L33, R30, R31, R32, R33 \
) { \
    { L00, L01, L02, L03 }, \
    { L10, L11, L12, L13 }, \
    { L20, L21, L22, L23 }, \
    { L30, L31, L32, L33 }, \
    { R00, R01, R02, R03 }, \
    { R10, R11, R12, R13 }, \
    { R20, R21, R22, R23 }, \
    { R30, R31, R32, R33 } \
}
