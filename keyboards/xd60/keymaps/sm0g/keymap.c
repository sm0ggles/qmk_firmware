#include QMK_KEYBOARD_H
#include "action_layer.h"

// Define Layers
#define _BL 0
#define _FL 1
#define _GM 2
#define _GF 3

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

// Tapdance declarations
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

  // _BL: Base Layer
[_BL] = LAYOUT_all(
      KC_ESC,  TD(TD_F1),    TD(TD_F2),    TD(TD_F3),    TD(TD_F4),   TD(TD_F5),   TD(TD_F6),   TD(TD_F7),   TD(TD_F8),   TD(TD_F9),    TD(TD_F10),    TD(TD_F11),  TD(TD_F12),  KC_BSLS,  KC_GRV,    \
      KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,   KC_T,   KC_Y,   KC_U,   KC_I,   KC_O,    KC_P,    KC_LBRC,  KC_RBRC,           KC_BSPC,   \
      CTL_T(KC_ESC), KC_A,    KC_S,    KC_D,    KC_F,   KC_G,   KC_H,   KC_J,   KC_K,   KC_L,    KC_SCLN, KC_QUOT,  KC_NO,             KC_ENT,    \
      KC_LSPO, KC_NO,   KC_Z,    KC_X,    KC_C,   KC_V,   KC_B,   KC_N,   KC_M,   KC_COMM, KC_DOT,  KC_SLSH,  KC_NO, KC_RSPC,  MO(_FL),      \
      KC_CAPS, KC_LGUI, KC_LALT,                          KC_SPC,                          F(0),    KC_RALT,  KC_NO, KC_RGUI,    KC_RCTL),

  // _FL: Function Layer
[_FL] = LAYOUT_all(
      _______,   KC_F1,   KC_F2,   KC_F3,   KC_F4,  KC_F5,   KC_F6,   KC_F7,   KC_F8,  KC_F9,  KC_F10, KC_F11,   KC_F12,  KC_F13,   TG(_GL),    \
      _______,   KC_NO,   KC_UP,   KC_END,  KC_NO,  KC_NO,   KC_CALC, KC_PGUP, KC_NO, KC_PGUP,    KC_UP,  KC_UPDN,    KC_NO,             KC_DEL,    \
      KC_CAPS,   KC_LEFT, KC_DOWN, KC_RIGHT,KC_NO,  KC_NO,   KC_HOME, KC_PGDN, KC_NO,  KC_NO,   KC_LEFT,  KC_RIGHT,  KC_NO,             KC_ENT,    \
      _______, KC_NO,   KC_NO,   KC_DEL,  BL_STEP,KC_NO,   KC_NO,   KC_VOLD, KC_VOLU,KC_MUTE, KC_NO,  KC_DOWN,  KC_RSFT, KC_NO,    _______,      \
      _______, _______, _______,                           KC_SPC,                            F(0),   KC_RALT,  KC_NO, KC_RGUI,    KC_RCTL),

};

// Custom Actions
const uint16_t PROGMEM fn_actions[] = {
    [0] = ACTION_LAYER_MOMENTARY(1),  // to Fn overlay
};

// Macros
const macro_t *action_get_macro(keyrecord_t *record, uint8_t id, uint8_t opt) {

  // MACRODOWN only works in this function
  switch(id) {
    case 0:
      if (record->event.pressed) { register_code(KC_RSFT); }
      else { unregister_code(KC_RSFT); }
      break;
  }

  return MACRO_NONE;
};

// Loop
void matrix_scan_user(void) {
  // Empty
};

