// Copyright 2023 Severin Meyer (@sevmeyer)
// SPDX-License-Identifier: GPL-2.0-or-later



#include QMK_KEYBOARD_H
#include "KEYMAP_DANISH.H"

#define tapping_term 200
//venstre
#define GUI_G MT(MOD_LGUI,KC_G)//LGUI_T(KC_G)
#define SFT_F LSFT_T(KC_F)
#define ALTd RALT_T(KC_D)
#define CTRLs LCTL_T(KC_S)
//hoejre
#define GUI_H RGUI_T(KC_H)
#define SFT_J RSFT_T(KC_J)
#define ALT_K RALT_T(KC_K)
#define CTRL_L RCTL_T(KC_L)

#define fn_spc LT(MO(1), KC_SPC)
#define fn_bspc LT(MO(1), KC_BSPC)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT(
        KC_ESC,  KC_1,    KC_2,      KC_3,    KC_4,    KC_5,       KC_6,    KC_7,    KC_8,      KC_9,    KC_0,    DK_PLUS, DK_ACUT,
        KC_TAB,  DK_Q,    KC_W,      KC_E,    KC_R,    KC_T,       KC_Y,    KC_U,    KC_I,      KC_O,    KC_P,    DK_ARNG, DK_DIAE,
        TG(2),   KC_A,    CTRLs,     ALTd,   SFT_F,   GUI_G,       GUI_H,   SFT_J,   ALT_K,     CTRL_L,  DK_AE,   DK_OSTR,  KC_BSLS,
        KC_LSFT, KC_NUBS, KC_Z,      KC_X,    KC_C,    KC_V,       KC_B,    KC_N,    KC_M,      KC_COMM, KC_DOT,  DK_MINS, KC_UP,  
        KC_RALT, XXXXXXX, KC_LGUI,   KC_LALT, fn_spc,  KC_ESC,     KC_DEL,  fn_bspc, KC_RALT,   KC_DEL,  KC_LEFT, KC_DOWN, KC_RIGHT
    ),                                                            
    [1] = LAYOUT(                                                 
        KC_GRV,  KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,       KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11, KC_F12,
        XXXXXXX, XXXXXXX, KC_HOME, KC_UP  , KC_END, XXXXXXX,     XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
        _______, XXXXXXX, KC_LEFT, KC_DOWN, KC_RIGHT, KC_MSTP,     KC_LGUI, KC_ENT, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
        _______, XXXXXXX, KC_MRWD, KC_CALC, KC_MFFD, KC_MUTE,     KC_NUM,  KC_P0,   KC_PDOT, KC_PENT, KC_PAST, KC_PGUP, _______,
        _______, XXXXXXX, _______, _______, _______, _______,     _______, _______, _______, KC_INS,  KC_HOME, KC_PGDN, KC_END
    ),
	[2] = LAYOUT(
        KC_ESC,  KC_1,    KC_2,      KC_3,    KC_4,    KC_5,       KC_6,    KC_7,    KC_8,     KC_9,    KC_0,    DK_PLUS, DK_ACUT,
        KC_TAB,  DK_Q,    KC_W,      KC_E,    KC_R,    KC_T,       KC_Y,    KC_U,    KC_I,     KC_O,    KC_P,    DK_ARNG, DK_DIAE,
        TG(2),   KC_A,    KC_S,      KC_D,    KC_F,    KC_G,       KC_H,    KC_J,    KC_K,     KC_L,    DK_AE,   DK_OSTR, KC_BSLS,
        KC_LSFT, KC_NUBS, KC_Z,      KC_X,    KC_C,    KC_V,       KC_B,    KC_N,    KC_M,     KC_COMM, KC_DOT,  DK_UP,   KC_UP,
        KC_LCTL, XXXXXXX, KC_LGUI,   KC_LALT, KC_SPC,  KC_ENT,     KC_ENT,  fn_bspc, KC_RALT,  KC_DEL,  KC_LEFT, KC_DOWN, KC_RIGHT
    )
};


#if defined(ENCODER_MAP_ENABLE)
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][NUM_DIRECTIONS] = {
    [0] = { ENCODER_CCW_CW(KC_VOLD, KC_VOLU) },
    [1] = { ENCODER_CCW_CW(_______, _______) }
};
#endif
