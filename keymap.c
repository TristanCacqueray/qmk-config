#include QMK_KEYBOARD_H
#include "version.h"
#include "keymap_us_international.h"

#include "features/achordion.h"

#define KC_MAC_UNDO LGUI(KC_Z)
#define KC_MAC_CUT LGUI(KC_X)
#define KC_MAC_COPY LGUI(KC_C)
#define KC_MAC_PASTE LGUI(KC_V)
#define KC_PC_UNDO LCTL(KC_Z)
#define KC_PC_CUT LCTL(KC_X)
#define KC_PC_COPY LCTL(KC_C)
#define KC_PC_PASTE LCTL(KC_V)
#define ES_LESS_MAC KC_GRAVE
#define ES_GRTR_MAC LSFT(KC_GRAVE)
#define ES_BSLS_MAC ALGR(KC_6)
#define NO_PIPE_ALT KC_GRAVE
#define NO_BSLS_ALT KC_EQUAL
#define LSA_T(kc) MT(MOD_LSFT | MOD_LALT, kc)
#define BP_NDSH_MAC ALGR(KC_8)
#define SE_SECT_MAC ALGR(KC_6)
#define MOON_LED_LEVEL LED_LEVEL

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

#include "features/custom_shift_keys.h"

const custom_shift_key_t custom_shift_keys[] = {
  {LCTL_T(KC_D), LSFT(KC_D)}, // Shift d is D
  {LALT_T(KC_F), LSFT(KC_F)}, // Shift f is F
  {RALT_T(KC_J), LSFT(KC_J)}, // Shift j is J
  {RCTL_T(KC_K), LSFT(KC_K)}, // Shift k is K
  {LT(_FL, KC_V), LSFT(KC_V)},
  {LT(_FL, KC_M), LSFT(KC_M)},
};
uint8_t NUM_CUSTOM_SHIFT_KEYS =
    sizeof(custom_shift_keys) / sizeof(custom_shift_key_t);

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [_BL] = LAYOUT_moonlander(
    KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                   KC_NO,     KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,
    TG(_ML),        KC_Q,           KC_W,           KC_E,           KC_R,           KC_T,           KC_NO,                   KC_NO,     KC_Y,           KC_U,           KC_I,           KC_O,           KC_P,           KC_GRAVE,
    KC_TAB,         KC_A,           KC_S,           LCTL_T(KC_D),   LALT_T(KC_F),   KC_G,           KC_NO,                   KC_NO,     KC_H,           RALT_T(KC_J),   RCTL_T(KC_K),   KC_L,           KC_SEMICOLON,   KC_QUOTE,
    KC_ESCAPE,      KC_Z,           KC_X,           KC_C,           LT(_FL, KC_V),  KC_B,                                               KC_N,           LT(_FL, KC_M),  KC_COMMA,       KC_DOT,         KC_SLASH,       KC_ENTER,
    KC_NO,          KC_NO,          KC_NO,          KC_LGUI,        KC_LEFT_SHIFT,                  TG(_COLE),               KC_NO,                    TT(_CL),        KC_MINUS,        KC_NO,          KC_NO,          KC_NO,
                                                                                    KC_BACKSPACE,       KC_NO,KC_NO,KC_NO,KC_NO,        KC_SPACE
  ),
  [_FL] = LAYOUT_moonlander(
    _______,        _______,        _______,        _______,        _______,        _______,        _______,                 _______, _______, _______, _______, _______, _______, _______,
    KC_PSCR,        KC_EXLM,        KC_AT,          KC_UP,          KC_LCBR,        KC_RCBR,        _______,                 _______, KC_PGUP,        KC_7,           KC_8,           KC_9,           KC_ASTR,           KC_PERC,
    KC_INSERT,      KC_HASH,        KC_LEFT,        KC_DOWN,        KC_RIGHT,       KC_DLR,         _______,                 _______, KC_PGDN,        KC_4,           KC_5,           KC_6,           KC_KP_PLUS,        KC_CIRC,
    _______,        KC_LBRC,        KC_RBRC,        KC_LPRN,        KC_RPRN,        KC_AMPR,                                             KC_0,        KC_1,           KC_2,           KC_3,           KC_BACKSLASH,      KC_EQUAL,
    _______,        _______,        _______,        _______,        _______,        _______,                                          _______,        _______,        KC_DOT,         _______,        _______,           _______,
    _______,        _______, _______,                 _______, _______, _______
  ),
  [_CL] = LAYOUT_moonlander(
    _______,        _______, _______, _______, _______, _______, _______,                                 _______, _______, _______, _______, _______, _______, _______,
    _______,        KC_NO,          KC_HOME,        KC_UP,          KC_END,         KC_PGUP,        _______,                 _______, KC_UP,          KC_F7,          KC_F8,          KC_F9,          KC_F10,         _______,
    _______,        KC_DELETE,      KC_LEFT,        KC_DOWN,        KC_RIGHT,       KC_PGDN,      _______,                   _______, KC_DOWN,        KC_F4,          KC_F5,          KC_F6,          KC_F11,         _______,
    _______,        KC_VOL_DN,      KC_VOL_UP,      KC_BR_DOWN,     KC_BR_UP,       QK_BOOT,                                          KC_NO,          KC_F1,          KC_F2,          KC_F3,          KC_F12,         _______,
    _______,        _______, _______, _______, _______, _______,                                                                             _______, TO(0),          KC_NO,          KC_NO,          _______, _______,
    _______,        _______, _______,                 _______, _______, _______
  ),
  [_ML] = LAYOUT_moonlander(
    _______, _______, _______, _______, _______, _______, _______,                                 _______, _______, _______, _______, _______, _______, _______,
    _______, RGB_TOG,        KC_NO,        RGB_HUI,        RGB_SAI,        RGB_VAI,        _______,                                 _______, KC_MS_WH_UP,    KC_MS_BTN1,     KC_MS_UP,       KC_MS_BTN2,     KC_NO,          _______,
    _______, MOON_LED_LEVEL, RGB_MOD,        RGB_HUD,        RGB_SAD,        RGB_VAD,        _______,                                                                 _______, KC_MS_WH_DOWN,  KC_MS_LEFT,     KC_MS_DOWN,     KC_MS_RIGHT,    KC_NO,          KC_NO,
    _______, KC_NO,          RGB_SPD,        RGB_SPI,        KC_NO,          KC_NO,                                          KC_MS_BTN3,     KC_NO,          KC_NO,          KC_NO,          KC_NO,          _______,
    _______, _______, _______, _______, _______, _______,                                                                                                 _______, TO(0),          KC_NO,          KC_NO,          _______, _______,
    _______, _______, _______,                 _______, _______, _______
  ),
  [_COLE] = LAYOUT_moonlander(
    _______, _______, _______, _______, _______, _______, _______,                                 _______, _______, _______, _______, _______, _______, _______,
    _______, KC_Q,           KC_W,           KC_F,           KC_P,           KC_B,           _______,                                 _______, KC_J,           KC_L,           KC_U,           KC_Y,           KC_SEMICOLON,      _______,
    _______, KC_A,           KC_R,           KC_S,           KC_T,           KC_G,           _______,                                                                 _______, KC_M,           KC_N,           KC_E,           KC_I,           KC_O,           _______,
    _______, KC_Z,           KC_X,           KC_C,           KC_D,           KC_V,                                           KC_K,           KC_H,           KC_COMMA,       KC_DOT,         KC_SLASH,       _______,
    _______, _______, _______, _______, _______, _______,                                                                                                 _______, _______, _______, _______, _______, _______,
    _______, _______, _______,                 _______, _______, _______
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
