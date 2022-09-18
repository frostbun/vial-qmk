// Copyright 2022 Manh Nguyen (@frostbun)
// SPDX-License-Identifier: GPL-2.0-or-later

#ifdef OLED_ENABLE

static void render_anim(void) {

}

bool oled_task_user(void) {
    render_anim();
    return false;
}

#endif
