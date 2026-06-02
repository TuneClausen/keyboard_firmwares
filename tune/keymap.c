/* Copyright 2020 gtips
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 * Dette er Tunes keymap til Reviung41
 */
#include QMK_KEYBOARD_H
#include "KEYMAP_DANISH.H"

#define TAPPING_TERM 200
//venstre
#define GUI_G MT(MOD_LGUI,KC_G)//LGUI_T(KC_G)
#define SFT_F LSFT_T(KC_F)
#define ALT_D RALT_T(KC_D)
#define CTRL_S LCTL_T(KC_S)
//hoejre
#define GUI_H RGUI_T(KC_H)
#define SFT_J RSFT_T(KC_J)
#define ALT_K RALT_T(KC_K)
#define CTRL_L RCTL_T(KC_L)

#define FN_SPC LT(MO(_1), KC_SPC)
#define FN_BSPC LT(MO(_1), KC_BSPC)

enum layer_names {
    _BASE,
    _1,
    _LOWER, // no layout defined - ADJUST is directly on thumb, tri-layer logic is inactive
    _RAISE,
    _ADJUST
};

#define LOWER  MO(_LOWER)
#define RAISE  MO(_RAISE)
#define ADJUST MO(_ADJUST)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  // Old base layer (no home row mods, no Danish chars):
  // [_BASE] = LAYOUT(
  //   KC_TAB,   KC_Q,     KC_W,     KC_E,     KC_R,      KC_T,               KC_Y,     KC_U,     KC_I,     KC_O,     KC_P,     KC_BSPC,
  //   KC_LCTL,  KC_A,     KC_S,     KC_D,     KC_F,      KC_G,               KC_H,     KC_J,     KC_K,     KC_L,     KC_SCLN,  KC_QUOT,
  //   KC_LSFT,  KC_Z,     KC_X,     KC_C,     KC_V,      KC_B,               KC_N,     KC_M,     KC_COMM,  KC_DOT,   KC_SLSH,  RSFT_T(KC_ENT),
  //                                           KC_LALT,   LOWER,    KC_SPC,   RAISE,    KC_RGUI
  // ),

  [_BASE] = LAYOUT(
    KC_TAB,   KC_Q,     KC_W,     KC_E,     KC_R,      KC_T,               KC_Y,     KC_U,     KC_I,     KC_O,     KC_P,     DK_ARNG,
    KC_QUOT,   KC_A,     CTRL_S,   ALT_D,    SFT_F,     GUI_G,              GUI_H,    SFT_J,    ALT_K,    CTRL_L,   DK_AE,    DK_OSTR,
    KC_LSFT,  KC_NUBS,  KC_Z,     KC_X,     KC_C,      KC_V,               KC_B,     KC_N,     KC_M,     KC_COMM,  KC_DOT,   DK_MINS,
                                            LOWER,   FN_SPC,    ADJUST,   FN_BSPC,    RAISE
  ),
  
  [_1] = LAYOUT(
    _______,  KC_AT,    KC_HOME,  KC_UP,    KC_END,    XXXXXXX,            KC_CIRC,  KC_AMPR,  KC_ASTR,  KC_LPRN,  KC_RPRN,  KC_DEL,
    _______,  KC_PLUS,  KC_LEFT,  KC_DOWN,  KC_RGHT,   XXXXXXX,            KC_LEFT,  KC_ENT,   KC_UP,    KC_RGHT,  KC_GRV,   KC_TILD,
    _______,  KC_ESC,   XXXXXXX,  XXXXXXX,  XXXXXXX,  KC_DQUO,            KC_HOME,  KC_END,   KC_PGUP,  KC_PGDN,  KC_PSCR,  XXXXXXX,
                                            _______,   _______,  KC_ENT,   _______,  _______
  ),
  
  [_RAISE] = LAYOUT(
    _______,  KC_1,     KC_2,     KC_3,     KC_4,      KC_5,               KC_6,     KC_7,     KC_8,     KC_9,     KC_0,     KC_DEL,
    _______,  DK_EXLM,  DK_DQUO,  DK_HASH,  DK_CURR,   DK_PERC,            DK_AMPR,  DK_SLSH,  DK_LPRN,  DK_RPRN,  DK_EQL,   _______,
    KC_F1,    KC_F2,    KC_F3,    KC_F4,    KC_F5,     KC_F6,              KC_F7,    KC_F8,    KC_F9,    KC_F10,   KC_F11,   KC_F12,
                                            _______,   _______,  KC_BSPC,  _______,  _______
  ),
  
  [_ADJUST] = LAYOUT(
    XXXXXXX,  XXXXXXX,  KC_MPRV,  KC_VOLU,  KC_MNXT,  XXXXXXX,            UG_TOGG,  UG_NEXT,  UG_HUEU,  UG_SATU,  UG_VALU,  XXXXXXX,
    XXXXXXX,  KC_MPLY,  KC_MSTP,  KC_VOLD,  KC_MUTE,  XXXXXXX,            XXXXXXX,  UG_PREV,  UG_HUED,  UG_SATD,  UG_VALD,  XXXXXXX,
    XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,            XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,
                                            _______,   _______,  XXXXXXX,  _______,  _______
  ),
};

// tri-layer disabled - _ADJUST is directly accessible via thumb key
// layer_state_t layer_state_set_user(layer_state_t state) {
//   return update_tri_layer_state(state, _LOWER, _RAISE, _ADJUST);
// }

