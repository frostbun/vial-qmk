// Copyright 2022 Manh Nguyen (@frostbun)
// SPDX-License-Identifier: GPL-2.0-or-later

#define LEFT_LED B0
#define RIGHT_LED D5

void keyboard_pre_init_user(void) {
    setPinOutput(LEFT_LED);
    setPinOutput(RIGHT_LED);
}

layer_state_t layer_state_set_user(layer_state_t state) {
    switch (get_highest_layer(state)) {
        case 0:
            writePin(LEFT_LED, 1);
            writePin(RIGHT_LED, 1);
            break;
        case 1:
            writePin(LEFT_LED, 1);
            writePin(RIGHT_LED, 0);
            break;
        case 2:
            writePin(LEFT_LED, 0);
            writePin(RIGHT_LED, 1);
            break;
        case 3:
            writePin(LEFT_LED, 0);
            writePin(RIGHT_LED, 0);
            break;
    }
    return state;
}
