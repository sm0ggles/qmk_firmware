#include QMK_KEYBOARD_H

// Rename Layers for Readability
#define _BL 0
#define _FL 1
#define _GM 2
#define _GF 3
#define _NU 4

// Tap dance declarations (These must go above the keymaps)
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
// ESC to NUM
#define ESC_NU LT(_NU, KC_ESC)


const uint16_t keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [_BL] = LAYOUT( \
        ESC_NU, TD(TD_F1), TD(TD_F2), TD(TD_F3), TD(TD_F4), TD(TD_F5), TD(TD_F6), TD(TD_F7), TD(TD_F8), TD(TD_F9), TD(TD_F10), TD(TD_F11), TD(TD_F12), KC_BSLS,KC_GRV,KC_INS, \
        KC_TAB,  KC_Q,   KC_W,   KC_E,   KC_R,   KC_T,   KC_Y,   KC_U,   KC_I,   KC_O,   KC_P,   KC_LBRC,KC_RBRC,   KC_BSPC,  KC_DEL, \
        CTL_T(KC_ESC),   KC_A,   KC_S,   KC_D,   KC_F,   KC_G,   KC_H,   KC_J,   KC_K,   KC_L,   KC_SCLN,KC_QUOT,KC_NUHS,  KC_ENT,    KC_PGUP,\
        KC_LSPO, KC_NO,KC_Z,   KC_X,   KC_C,   KC_V,   KC_B,   KC_N,   KC_M,   KC_COMM,KC_DOT, KC_SLSH,    KC_RSPC, KC_UP,  KC_PGDN,\
        KC_CAPS, KC_LGUI,KC_LALT,                        KC_SPC,                 KC_RALT,MO(_FL),KC_NO,       KC_LEFT,KC_DOWN,KC_RGHT \
    ),

	[_FL] = LAYOUT( \
        _______, KC_F1,  KC_F2,  KC_F3,  KC_F4,  KC_F5,  KC_F6,  KC_F7,  KC_F8,  KC_F9,  KC_F10, KC_F11, KC_F12, _______,TG(_GM),KC_NLCK,\
        _______,KC_BTN1,KC_MS_U,KC_BTN2,_______,_______,_______,_______,_______, _______,_______,_______,_______,_______,        _______,\
        KC_CAPS,KC_MS_L,KC_MS_D,KC_MS_R, _______,_______,_______,_______,_______,_______,_______,_______,_______,_______,        KC_HOME,\
        _______,KC_ACL1,KC_ACL2,BL_DEC,BL_TOGG,BL_INC,BL_BRTG,KC_VOLD,KC_VOLU,KC_MUTE,_______,_______,_______,        _______,KC_END,\
        _______,_______,_______,                        _______,                _______,_______,_______,        KC_MPRV,KC_MPLY,KC_MNXT  \
    ),

    [_GM] = LAYOUT( \
        KC_ESC, KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9, KC_0, KC_MINS, KC_EQL, KC_BSLS, KC_GRV,KC_INS, \
        KC_TAB,  KC_Q,   KC_W,   KC_E,   KC_R,   KC_T,   KC_Y,   KC_U,   KC_I,   KC_O,   KC_P,   KC_LBRC,KC_RBRC,   KC_BSPC,  KC_DEL, \
        KC_LCTL,   KC_A,   KC_S,   KC_D,   KC_F,   KC_G,   KC_H,   KC_J,   KC_K,   KC_L,   KC_SCLN,KC_QUOT,KC_NUHS,  KC_ENT,    KC_PGUP,\
        KC_LSFT, KC_NO,KC_Z,   KC_X,   KC_C,   KC_V,   KC_B,   KC_N,   KC_M,   KC_COMM,KC_DOT, KC_SLSH,    KC_RSFT, KC_UP,  KC_PGDN,\
        KC_CAPS, KC_LGUI,KC_LALT,                        KC_SPC,                 KC_RALT,MO(_GF),KC_NO,       KC_LEFT,KC_DOWN,KC_RGHT \
    ),

	[_GF] = LAYOUT( \
        _______, KC_F1,  KC_F2,  KC_F3,  KC_F4,  KC_F5,  KC_F6,  KC_F7,  KC_F8,  KC_F9,  KC_F10, KC_F11, KC_F12, _______,TG(_GM),_______,\
        _______,_______,_______,_______,_______,_______,_______,_______,_______, _______,_______,_______,_______,_______,        _______,\
        KC_CAPS,_______,_______,_______, _______,_______,_______,_______,_______,_______,_______,_______,_______,_______,        KC_HOME,\
        _______,_______,_______,BL_DEC,BL_TOGG,BL_INC,BL_BRTG,KC_VOLD,KC_VOLU,KC_MUTE,_______,_______,_______,        _______,KC_END,\
        _______,_______,_______,                        _______,                _______,_______,_______,        KC_MPRV,KC_MPLY,KC_MNXT  \
    ),

    [_NU] = LAYOUT( \
        XXXXXXX, XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX, XXXXXXX,  XXXXXXX,  XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,XXXXXXX,XXXXXXX,\
        XXXXXXX,XXXXXXX,XXXXXXX,XXXXXXX,XXXXXXX,XXXXXXX,XXXXXXX,KC_P7,KC_P8,KC_P9,XXXXXXX,XXXXXXX,XXXXXXX,XXXXXXX,        XXXXXXX,\
        XXXXXXX,XXXXXXX,XXXXXXX,XXXXXXX, XXXXXXX,XXXXXXX,XXXXXXX,KC_P4,KC_P5,KC_P6,XXXXXXX,XXXXXXX,XXXXXXX,XXXXXXX,        KC_HOME,\
        XXXXXXX,XXXXXXX,XXXXXXX,XXXXXXX,XXXXXXX,XXXXXXX,XXXXXXX,XXXXXXX,KC_P1,KC_P2,KC_P3,XXXXXXX,XXXXXXX,        XXXXXXX,KC_END,\
        XXXXXXX,XXXXXXX,XXXXXXX,                        KC_P0,                XXXXXXX,XXXXXXX,XXXXXXX,        KC_MPRV,KC_MPLY,KC_MNXT  \
    ),



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
