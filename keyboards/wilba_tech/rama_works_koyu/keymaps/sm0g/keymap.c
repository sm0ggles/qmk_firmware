#include QMK_KEYBOARD_H

// Rename Layers for Readability
# define _BL 0
# define _FL 1
# define _GM 2
# define _GF 3
# define _NU 4

// ESC to NUM
# define ESC_NU LT(_NU, KC_ESC)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

	// Default layer
	[_BL] = LAYOUT_all(
		ESC_NU,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS, KC_EQL,  KC_BSLS, KC_GRV,  KC_INS,
		KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_LBRC, KC_RBRC, KC_BSPC,          KC_DEL,
		CTL_T(KC_ESC), KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT, KC_ENT,                    KC_PGUP,
		KC_LSPO, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_RSPC,                   KC_UP,   KC_PGDN,
		KC_CAPS,   KC_LGUI, KC_LALT,                            KC_SPC,                                      MO(_FL),            KC_LEFT, KC_DOWN, KC_RGHT),

	// Fn1 Layer
	[_FL] = LAYOUT_all(
		_______,  KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,  _______,  TG(_GM),  KC_NLCK,
		_______, EF_DEC, EF_INC, H1_DEC, H1_INC, H2_DEC, H2_INC, _______, _______, _______, _______, _______, BR_DEC, BR_INC,          _______,
		RGB_TOG, _______, _______, S1_DEC, S1_INC, S2_DEC, S2_INC, _______, _______, _______, _______, ES_DEC, ES_INC,                   KC_HOME,
		_______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,                   _______, KC_END,
		_______, _______, _______,                            _______,                                     _______,          KC_MPRV, KC_MPLY, KC_MNXT),

	// Game Layer
	[_GM] = LAYOUT_all(
		KC_ESC,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS, KC_EQL,  KC_BSLS, KC_GRV,  KC_INS,
		KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_LBRC, KC_RBRC, KC_BSPC,          KC_DEL,
		KC_LCTL, KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT, KC_ENT,                    KC_PGUP,
		KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_RSFT,                   KC_UP,   KC_PGDN,
		KC_CAPS,   KC_NO, KC_LALT,                            KC_SPC,                                      MO(_GF),            KC_LEFT, KC_DOWN, KC_RGHT),


	// Fn3 Layer
	[_GF] = LAYOUT_all(
		_______,  KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,  _______,  TG(_GM),  KC_NLCK,
		_______, EF_DEC, EF_INC, H1_DEC, H1_INC, H2_DEC, H2_INC, _______, _______, _______, _______, _______, BR_DEC, BR_INC,          _______,
		RGB_TOG, _______, _______, S1_DEC, S1_INC, S2_DEC, S2_INC, _______, _______, _______, _______, ES_DEC, ES_INC,                   KC_HOME,
		_______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,                   _______, KC_END,
		_______, _______, _______,                            _______,                                     _______,          KC_MPRV, KC_MPLY, KC_MNXT),


	// NumPad Layer
	[_NU] = LAYOUT_all(
		XXXXXXX,  XXXXXXX,   XXXXXXX,   XXXXXXX,   XXXXXXX,   XXXXXXX,   XXXXXXX,   XXXXXXX,   XXXXXXX,   XXXXXXX,   XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,
		XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, KC_P7, KC_P8, KC_P9, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,          XXXXXXX,
		XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, KC_P4, KC_P5, KC_P6, XXXXXXX, XXXXXXX, XXXXXXX,                   XXXXXXX,
		XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, KC_P1, KC_P2, KC_P3, XXXXXXX, XXXXXXX,                   XXXXXXX, XXXXXXX,
		XXXXXXX, XXXXXXX, XXXXXXX,                            KC_P0,                                     XXXXXXX,          XXXXXXX, XXXXXXX, XXXXXXX),


};
