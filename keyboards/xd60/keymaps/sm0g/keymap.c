#include QMK_KEYBOARD_H
#include "action_layer.h"

// Define Layers
#define _BL 0
#define _FL 1
#define _GM 2
#define _GF 3

enum {
  TD_F1 = 0,
  TD_F2,
  TD_F3,
  TD_F4,
  TD_F5,
  TD_F6,
  TD_F7,
  TD_F8,
  TD_F9,
  TD_F10,
  TD_F11,
  TD_F12,
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

  // _BL: Base Layer
[_BL] = LAYOUT_all(
      KC_ESC,  TD(TD_F1),    TD(TD_F2),    TD(TD_F3),    TD(TD_F4),   TD(TD_F5),   TD(TD_F6),   TD(TD_F7),   TD(TD_F8),   TD(TD_F9),    TD(TD_F10),    TD(TD_F11),  TD(TD_F12),  KC_BSLS,  KC_GRV,    \
      KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,   KC_T,   KC_Y,   KC_U,   KC_I,   KC_O,    KC_P,    KC_LBRC,  KC_RBRC,           KC_BSPC,   \
      CTL_T(KC_ESC), KC_A,    KC_S,    KC_D,    KC_F,   KC_G,   KC_H,   KC_J,   KC_K,   KC_L,    KC_SCLN, KC_QUOT,  KC_NO,             KC_ENT,    \
      KC_LSPO, KC_NO,   KC_Z,    KC_X,    KC_C,   KC_V,   KC_B,   KC_N,   KC_M,   KC_COMM, KC_DOT,  KC_SLSH,  KC_NO, KC_RSPC,  MO(_FL),      \
      KC_CAPS, KC_LGUI, KC_LALT,                          KC_SPC,                          F(0),    KC_RALT,  KC_NO, KC_RGUI,    KC_RCTL),

  // _FL: Function Layer
[_FL] = LAYOUT_all(
      _______,   KC_F1,   KC_F2,   KC_F3,   KC_F4,  KC_F5,   KC_F6,   KC_F7,   KC_F8,  KC_F9,  KC_F10, KC_F11,   KC_F12,  KC_F13,   _______,    \
      RGB_MOD,   RGB_VAI,   RGB_HUI,   RGB_VAI,  KC_NO,  KC_NO,   KC_CALC, KC_PGUP, KC_NO, KC_PGUP,    KC_UP,  KC_PGDN,    KC_NO,             KC_DEL,    \
      KC_CAPS,   RGB_VAD, RGB_HUD, RGB_VAD,KC_NO,  KC_NO,   KC_HOME, KC_PGDN, KC_NO,  KC_NO,   KC_LEFT,  KC_RIGHT,  KC_NO,             KC_ENT,    \
      _______, KC_NO,   KC_NO,   KC_DEL,  BL_STEP,KC_NO,   KC_NO,   KC_VOLD, KC_VOLU,KC_MUTE, KC_NO,  KC_DOWN,  KC_RSFT, KC_NO,    _______,      \
      RGB_MODE_RAINBOW, _______, _______,                           KC_SPC,                            F(0),   KC_RALT,  KC_NO, KC_RGUI,    KC_RCTL),

};


// Tapdance definitions. Tap Dance F Keys.
qk_tap_dance_action_t tap_dance_actions[] = {
  [TD_F1] = ACTION_TAP_DANCE_DOUBLE(KC_1, KC_F1),
  [TD_F2] = ACTION_TAP_DANCE_DOUBLE(KC_2, KC_F2),
  [TD_F3] = ACTION_TAP_DANCE_DOUBLE(KC_3, KC_F3),
  [TD_F4] = ACTION_TAP_DANCE_DOUBLE(KC_4, KC_F4),
  [TD_F5] = ACTION_TAP_DANCE_DOUBLE(KC_5, KC_F5),
  [TD_F6] = ACTION_TAP_DANCE_DOUBLE(KC_6, KC_F6),
  [TD_F7] = ACTION_TAP_DANCE_DOUBLE(KC_7, KC_F7),
  [TD_F8] = ACTION_TAP_DANCE_DOUBLE(KC_8, KC_F8),
  [TD_F9] = ACTION_TAP_DANCE_DOUBLE(KC_9, KC_F9),
  [TD_F10] = ACTION_TAP_DANCE_DOUBLE(KC_0, KC_F10),
  [TD_F11] = ACTION_TAP_DANCE_DOUBLE(KC_MINS, KC_F11),
  [TD_F12] = ACTION_TAP_DANCE_DOUBLE(KC_EQL, KC_F12),
};
