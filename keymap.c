#include QMK_KEYBOARD_H
#include "version.h"
#include "keymap_us_international.h"

#include "features/achordion.h"

enum layer_names {
    _BL,
    _FL,
    _CL,
    _ML,
    _COLE,
};

#define KC_VOL_DN   KC_KB_VOLUME_DOWN
#define KC_VOL_UP   KC_KB_VOLUME_UP
#define KC_BR_DOWN  KC_BRIGHTNESS_DOWN
#define KC_BR_UP    KC_BRIGHTNESS_UP
#define xxxxxxxx    XXXXXXX

#include "features/custom_shift_keys.h"

const custom_shift_key_t custom_shift_keys[] = {
  {LCTL_T(KC_D), LSFT(KC_D)}, // Shift d is D
  {LALT_T(KC_F), LSFT(KC_F)}, // Shift f is F
  {RALT_T(KC_J), LSFT(KC_J)}, // Shift j is J
  {RCTL_T(KC_K), LSFT(KC_K)}, // Shift k is K
  {LT(_FL, KC_S), LSFT(KC_S)},
  {LT(_FL, KC_L), LSFT(KC_L)},
};
uint8_t NUM_CUSTOM_SHIFT_KEYS =
    sizeof(custom_shift_keys) / sizeof(custom_shift_key_t);

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [_BL] = LAYOUT_moonlander(
    xxxxxxxx,       xxxxxxxx,       xxxxxxxx,       xxxxxxxx,       xxxxxxxx,       xxxxxxxx,       xxxxxxxx,                xxxxxxxx,       xxxxxxxx,       xxxxxxxx,       xxxxxxxx,       xxxxxxxx,       xxxxxxxx,       xxxxxxxx,
    TG(_ML),        KC_Q,           KC_W,           KC_E,           KC_R,           KC_T,           xxxxxxxx,                xxxxxxxx,       KC_Y,           KC_U,           KC_I,           KC_O,           KC_P,           KC_GRAVE,
    KC_TAB,         KC_A,           LT(_FL, KC_S),  LCTL_T(KC_D),   LALT_T(KC_F),   KC_G,           xxxxxxxx,                xxxxxxxx,       KC_H,           RALT_T(KC_J),   RCTL_T(KC_K),   LT(_FL, KC_L),  KC_SEMICOLON,   KC_QUOTE,
    KC_ESCAPE,      KC_Z,           KC_X,           KC_C,           KC_V,           KC_B,                                                    KC_N,           KC_M,           KC_COMMA,       KC_DOT,         KC_SLASH,       KC_ENTER,
    xxxxxxxx,       xxxxxxxx,       xxxxxxxx,       KC_LGUI,        KC_LEFT_SHIFT,                  xxxxxxxx,                xxxxxxxx,                       TT(_CL),        KC_MINUS,       xxxxxxxx,       xxxxxxxx,       xxxxxxxx,
                                                                                    KC_BSPC,            KC_NO,KC_NO,   KC_NO,KC_NO,          KC_SPACE
  ),

  [_FL] = LAYOUT_moonlander(
    xxxxxxxx,       xxxxxxxx,       xxxxxxxx,       xxxxxxxx,       xxxxxxxx,       xxxxxxxx,       xxxxxxxx,                xxxxxxxx,       xxxxxxxx,       xxxxxxxx,       xxxxxxxx,       xxxxxxxx,       xxxxxxxx,       xxxxxxxx,
    KC_PSCR,        KC_EXLM,        KC_AT,          KC_UP,          KC_LCBR,        KC_RCBR,        xxxxxxxx,                xxxxxxxx,       KC_PGUP,        KC_7,           KC_8,           KC_9,           KC_ASTR,        KC_PERC,
    KC_INSERT,      KC_HASH,        KC_LEFT,        KC_DOWN,        KC_RIGHT,       KC_DLR,         xxxxxxxx,                xxxxxxxx,       KC_PGDN,        KC_4,           KC_5,           KC_6,           KC_KP_PLUS,     KC_CIRC,
    _______,        KC_LBRC,        KC_RBRC,        KC_LPRN,        KC_RPRN,        KC_AMPR,                                                 KC_0,           KC_1,           KC_2,           KC_3,           KC_BACKSLASH,   KC_EQUAL,
    xxxxxxxx,       xxxxxxxx,       xxxxxxxx,       _______,        _______,                        xxxxxxxx,                xxxxxxxx,                       _______,        KC_DOT,         xxxxxxxx,       xxxxxxxx,       xxxxxxxx,
                                                                                    _______,            KC_NO,KC_NO,   KC_NO,KC_NO,          _______
  ),

  [_CL] = LAYOUT_moonlander(
    xxxxxxxx,       xxxxxxxx,       xxxxxxxx,       xxxxxxxx,       xxxxxxxx,       xxxxxxxx,       xxxxxxxx,                xxxxxxxx,       xxxxxxxx,       xxxxxxxx,       xxxxxxxx,       xxxxxxxx,       xxxxxxxx,       xxxxxxxx,
    _______,        xxxxxxxx,       KC_HOME,        KC_UP,          KC_END,         KC_PGUP,        _______,                 _______,        KC_UP,          KC_F7,          KC_F8,          KC_F9,          KC_F10,         xxxxxxxx,
    _______,        KC_DELETE,      KC_LEFT,        KC_DOWN,        KC_RIGHT,       KC_PGDN,      _______,                   _______,        KC_DOWN,        KC_F4,          KC_F5,          KC_F6,          KC_F11,         xxxxxxxx,
    _______,        KC_VOL_DN,      KC_VOL_UP,      KC_BR_DOWN,     KC_BR_UP,       QK_BOOT,                                                 xxxxxxxx,       KC_F1,          KC_F2,          KC_F3,          KC_F12,         KC_ENTER,
    xxxxxxxx,       xxxxxxxx,       xxxxxxxx,       _______,        _______,                        xxxxxxxx,                xxxxxxxx,                       TO(_BL),        xxxxxxxx,       xxxxxxxx,       xxxxxxxx,       xxxxxxxx,
                                                                                    _______,            KC_NO,KC_NO,   KC_NO,KC_NO,          _______
  ),

  [_ML] = LAYOUT_moonlander(
    xxxxxxxx,       xxxxxxxx,       xxxxxxxx,       xxxxxxxx,       xxxxxxxx,       xxxxxxxx,       xxxxxxxx,                xxxxxxxx,       xxxxxxxx,       xxxxxxxx,       xxxxxxxx,       xxxxxxxx,       xxxxxxxx,       xxxxxxxx,
    xxxxxxxx,       RGB_TOG,        xxxxxxxx,       RGB_HUI,        RGB_SAI,        RGB_VAI,        xxxxxxxx,                xxxxxxxx,       KC_MS_WH_UP,    KC_MS_BTN1,     KC_MS_UP,       KC_MS_BTN2,     xxxxxxxx,       xxxxxxxx,
    xxxxxxxx,       LED_LEVEL,      RGB_MOD,        RGB_HUD,        RGB_SAD,        RGB_VAD,        xxxxxxxx,                xxxxxxxx,       KC_MS_WH_DOWN,  KC_MS_LEFT,     KC_MS_DOWN,     KC_MS_RIGHT,    xxxxxxxx,       KC_NO,
    xxxxxxxx,       xxxxxxxx,       RGB_SPD,        RGB_SPI,        xxxxxxxx,       xxxxxxxx,                                                KC_MS_BTN3,     xxxxxxxx,       xxxxxxxx,       xxxxxxxx,       xxxxxxxx,       _______,
    xxxxxxxx,       xxxxxxxx,       xxxxxxxx,       _______,        _______,                        xxxxxxxx,                xxxxxxxx,                       TO(_BL),        xxxxxxxx,       xxxxxxxx,       xxxxxxxx,       xxxxxxxx,
                                                                                    _______,            KC_NO,KC_NO,   KC_NO,KC_NO,          _______
  ),
};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  if (!process_custom_shift_keys(keycode, record)) { return false; }
  if (!process_achordion(keycode, record)) { return false; }
  return true;
}

bool achordion_chord(uint16_t tap_hold_keycode,  keyrecord_t* tap_hold_record,
                     uint16_t other_keycode,     keyrecord_t* other_record) {
  // Exceptionally consider the following chords as tap.
  switch (tap_hold_keycode) {
    case LALT_T(KC_F):  // alt + space
      if (other_keycode == KC_SPACE) { return false; }
      break;
  }

  // Otherwise, follow the opposite hands rule.
  return achordion_opposite_hands(tap_hold_record, other_record);
}

void matrix_scan_user(void) {
  achordion_task();
}
