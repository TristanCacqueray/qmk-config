#include QMK_KEYBOARD_H
#include "version.h"
#include "keymap_us_international.h"

#include "features/achordion.h"

enum layer {
    _BL,
    _FL,
    _CL,
    _ML,
    _SETTINGS,
    _UNICODE,
    _EMACS,
};

enum custom_keycodes {
  M_LAMBDA = SAFE_RANGE,
  M_ECUTE,
  M_EGRAV,
  M_ECIRC,
  M_ETREMA,
  M_AGRAV,
  M_ACIRC,
  M_ICIRC,
  M_ITREMA,
  M_UCUTE,
  M_UTREMA,
  M_OCIRC,

  M_CEDIL,
  M_OE,
  M_EURO,

  M_DOTDOT,

  M_CX_0,
  M_CX_1,
  M_CX_2,
  M_CX_3,

  M_CX_B,
  M_CX_CF,
  M_CX_CS,

  M_CC_P_F,
  M_CC_P_P,
};

#define KC_VOL_DN   KC_KB_VOLUME_DOWN
#define KC_VOL_UP   KC_KB_VOLUME_UP
#define KC_BR_DOWN  KC_BRIGHTNESS_DOWN
#define KC_BR_UP    KC_BRIGHTNESS_UP
#define xxxxxxxx    XXXXXXX

#include "features/custom_shift_keys.h"

#define LHOME_P LT(_EMACS, KC_A)
#define RHOME_P LT(_EMACS, KC_SEMICOLON)
#define LHOME_R LT(_FL, KC_S)
#define RHOME_R LT(_FL, KC_L)

const custom_shift_key_t custom_shift_keys[] = {
  {LCTL_T(KC_D), LSFT(KC_D)}, // Shift d is D
  {LALT_T(KC_F), LSFT(KC_F)}, // Shift f is F
  {RALT_T(KC_J), LSFT(KC_J)}, // Shift j is J
  {RCTL_T(KC_K), LSFT(KC_K)}, // Shift k is K
  {LHOME_P, LSFT(KC_A)},      // Shift a is A
  {RHOME_P, LSFT(KC_SEMICOLON)},
  {LT(_FL, KC_S), LSFT(KC_S)},
  {LT(_FL, KC_L), LSFT(KC_L)},
};
uint8_t NUM_CUSTOM_SHIFT_KEYS =
    sizeof(custom_shift_keys) / sizeof(custom_shift_key_t);

#define RMEH_T(kc) MT(MOD_RCTL | MOD_RSFT | MOD_RALT, kc)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [_BL] = LAYOUT_moonlander(
    xxxxxxxx,       xxxxxxxx,       xxxxxxxx,       xxxxxxxx,       xxxxxxxx,       xxxxxxxx,       xxxxxxxx,                xxxxxxxx,       xxxxxxxx,       xxxxxxxx,       xxxxxxxx,       xxxxxxxx,       xxxxxxxx,       xxxxxxxx,
    TG(_ML),        KC_Q,           KC_W,           KC_E,           KC_R,           KC_T,           xxxxxxxx,                xxxxxxxx,       KC_Y,           KC_U,           KC_I,           KC_O,           KC_P,           OSL(_UNICODE),
    KC_TAB,         LHOME_P,        LHOME_R,        LCTL_T(KC_D),   LALT_T(KC_F),   KC_G,           xxxxxxxx,                xxxxxxxx,       KC_H,           RALT_T(KC_J),   RCTL_T(KC_K),   RHOME_R,        RHOME_P,        KC_GRAVE,
    KC_ESCAPE,      KC_Z,           KC_X,           KC_C,           KC_V,           KC_B,                                                    KC_N,           KC_M,           KC_COMMA,       KC_DOT,         KC_SLASH,       KC_ENTER,
    xxxxxxxx,       xxxxxxxx,       xxxxxxxx,       KC_LGUI,        KC_LEFT_SHIFT,                  xxxxxxxx,                xxxxxxxx,                       TT(_CL),        xxxxxxxx,       xxxxxxxx,       xxxxxxxx,       xxxxxxxx,
                                                                                    KC_BSPC,            KC_NO,KC_NO,   KC_NO,KC_NO,          KC_SPACE
  ),

  [_FL] = LAYOUT_moonlander(
    xxxxxxxx,       xxxxxxxx,       xxxxxxxx,       xxxxxxxx,       xxxxxxxx,       xxxxxxxx,       xxxxxxxx,                xxxxxxxx,       xxxxxxxx,       xxxxxxxx,       xxxxxxxx,       xxxxxxxx,       xxxxxxxx,       xxxxxxxx,
    xxxxxxxx,       KC_EXLM,        KC_AT,          KC_PERC,        KC_LCBR,        KC_RCBR,        xxxxxxxx,                xxxxxxxx,       LSFT(KC_QUOTE), KC_7,           KC_8,           KC_9,           KC_ASTR,        xxxxxxxx,
    xxxxxxxx,       KC_HASH,        KC_CIRC,        KC_MINUS,       LSFT(KC_MINUS), KC_DLR,         xxxxxxxx,                xxxxxxxx,       KC_QUOTE,       KC_4,           KC_5,           KC_6,           KC_KP_PLUS,     xxxxxxxx,
    _______,        KC_LBRC,        KC_RBRC,        KC_LPRN,        KC_RPRN,        KC_AMPR,                                                 KC_EQUAL,       KC_1,           KC_2,           KC_3,           KC_BACKSLASH,   xxxxxxxx,
    xxxxxxxx,       xxxxxxxx,       xxxxxxxx,       _______,        _______,                        xxxxxxxx,                xxxxxxxx,                       KC_0,           KC_DOT,         xxxxxxxx,       xxxxxxxx,       xxxxxxxx,
                                                                                    _______,            KC_NO,KC_NO,   KC_NO,KC_NO,          _______
  ),

  [_CL] = LAYOUT_moonlander(
    xxxxxxxx,       xxxxxxxx,       xxxxxxxx,       xxxxxxxx,       xxxxxxxx,       xxxxxxxx,       xxxxxxxx,                xxxxxxxx,       xxxxxxxx,       xxxxxxxx,       xxxxxxxx,       xxxxxxxx,       xxxxxxxx,       xxxxxxxx,
    _______,        KC_INSERT,      KC_HOME,        KC_UP,          KC_END,         KC_PGUP,        xxxxxxxx,                xxxxxxxx,       xxxxxxxx,       KC_F7,          KC_F8,          KC_F9,          KC_F10,         xxxxxxxx,
    _______,        KC_DELETE,      KC_LEFT,        KC_DOWN,        KC_RIGHT,       KC_PGDN,        xxxxxxxx,                xxxxxxxx,       KC_PGUP,        RALT_T(KC_F4),  RCTL_T(KC_F5),  KC_F6,          KC_F11,         xxxxxxxx,
    _______,        KC_VOL_DN,      KC_VOL_UP,      KC_BR_DOWN,     KC_BR_UP,       QK_BOOT,                                                 KC_PGDN,        KC_F1,          KC_F2,          KC_F3,          KC_F12,         KC_ENTER,
    xxxxxxxx,       xxxxxxxx,       xxxxxxxx,       _______,        _______,                        xxxxxxxx,                xxxxxxxx,                       TO(_BL),        xxxxxxxx,       xxxxxxxx,       xxxxxxxx,       xxxxxxxx,
                                                                                    _______,            KC_NO,KC_NO,   KC_NO,KC_NO,          KC_PSCR
  ),

  [_ML] = LAYOUT_moonlander(
    xxxxxxxx,       xxxxxxxx,       xxxxxxxx,       xxxxxxxx,       xxxxxxxx,       xxxxxxxx,       xxxxxxxx,                xxxxxxxx,       xxxxxxxx,       xxxxxxxx,       xxxxxxxx,       xxxxxxxx,       xxxxxxxx,       xxxxxxxx,
    TO(_BL),        DB_TOGG,        KC_MS_BTN1,     KC_MS_UP,       KC_MS_BTN2,     KC_MS_WH_UP,    xxxxxxxx,                xxxxxxxx,       KC_MS_WH_UP,    KC_MS_BTN1,     KC_MS_UP,       KC_MS_BTN2,     xxxxxxxx,       xxxxxxxx,
    TO(_SETTINGS),  xxxxxxxx,       KC_MS_LEFT,     KC_MS_DOWN,     KC_MS_RIGHT,    KC_MS_WH_DOWN,  xxxxxxxx,                xxxxxxxx,       KC_MS_WH_DOWN,  KC_MS_LEFT,     KC_MS_DOWN,     KC_MS_RIGHT,    xxxxxxxx,       xxxxxxxx,
    xxxxxxxx,       xxxxxxxx,       xxxxxxxx,       xxxxxxxx,       xxxxxxxx,       KC_MS_BTN3,                                              KC_MS_BTN3,     xxxxxxxx,       xxxxxxxx,       xxxxxxxx,       xxxxxxxx,       KC_ENTER,
    xxxxxxxx,       xxxxxxxx,       xxxxxxxx,       _______,        _______,                        xxxxxxxx,                xxxxxxxx,                       TO(_BL),        xxxxxxxx,       xxxxxxxx,       xxxxxxxx,       xxxxxxxx,
                                                                                    _______,            KC_NO,KC_NO,   KC_NO,KC_NO,          _______
  ),

  [_SETTINGS] = LAYOUT_moonlander(
    xxxxxxxx,       xxxxxxxx,       xxxxxxxx,       xxxxxxxx,       xxxxxxxx,       xxxxxxxx,       xxxxxxxx,                xxxxxxxx,       xxxxxxxx,       xxxxxxxx,       xxxxxxxx,       xxxxxxxx,       xxxxxxxx,       xxxxxxxx,
    TO(_BL),        RGB_TOG,        xxxxxxxx,       RGB_HUI,        RGB_SAI,        RGB_VAI,        xxxxxxxx,                xxxxxxxx,       KC_MS_WH_UP,    KC_MS_BTN1,     KC_MS_UP,       KC_MS_BTN2,     xxxxxxxx,       xxxxxxxx,
    TO(_BL),        LED_LEVEL,      RGB_MOD,        RGB_HUD,        RGB_SAD,        RGB_VAD,        xxxxxxxx,                xxxxxxxx,       KC_MS_WH_DOWN,  KC_MS_LEFT,     KC_MS_DOWN,     KC_MS_RIGHT,    xxxxxxxx,       KC_NO,
    xxxxxxxx,       xxxxxxxx,       RGB_SPD,        RGB_SPI,        xxxxxxxx,       xxxxxxxx,                                                KC_MS_BTN3,     xxxxxxxx,       xxxxxxxx,       xxxxxxxx,       xxxxxxxx,       _______,
    xxxxxxxx,       xxxxxxxx,       xxxxxxxx,       _______,        _______,                        xxxxxxxx,                xxxxxxxx,                       TO(_BL),        xxxxxxxx,       xxxxxxxx,       xxxxxxxx,       xxxxxxxx,
                                                                                    _______,            KC_NO,KC_NO,   KC_NO,KC_NO,          _______
  ),

  [_UNICODE] = LAYOUT_moonlander(
    xxxxxxxx,       xxxxxxxx,       xxxxxxxx,       xxxxxxxx,       xxxxxxxx,       xxxxxxxx,       xxxxxxxx,                xxxxxxxx,       xxxxxxxx,       xxxxxxxx,       xxxxxxxx,       xxxxxxxx,       xxxxxxxx,       xxxxxxxx,
    xxxxxxxx,       xxxxxxxx,       M_EGRAV,        M_ECUTE,        M_ECIRC,        xxxxxxxx,       xxxxxxxx,                xxxxxxxx,       xxxxxxxx,       M_UCUTE,        M_ICIRC,        M_OE,           RSFT(KC_ESC),   xxxxxxxx,
    xxxxxxxx,       M_AGRAV,        M_ACIRC,        M_ETREMA,       xxxxxxxx,       M_EURO,         xxxxxxxx,                xxxxxxxx,       xxxxxxxx,       M_UTREMA,       M_ITREMA,       M_OCIRC,        xxxxxxxx,       xxxxxxxx,
    xxxxxxxx,       M_ACIRC,        xxxxxxxx,       M_CEDIL,        xxxxxxxx,       xxxxxxxx,                                                xxxxxxxx,       xxxxxxxx,       xxxxxxxx,       M_DOTDOT,       M_LAMBDA,       xxxxxxxx,
    xxxxxxxx,       xxxxxxxx,       xxxxxxxx,       _______,        _______,                        xxxxxxxx,                xxxxxxxx,                       TO(_BL),        xxxxxxxx,       xxxxxxxx,       xxxxxxxx,       xxxxxxxx,
                                                                                    _______,            KC_NO,KC_NO,   KC_NO,KC_NO,          _______
  ),

  [_EMACS] = LAYOUT_moonlander(
    xxxxxxxx,       xxxxxxxx,       xxxxxxxx,       xxxxxxxx,       xxxxxxxx,       xxxxxxxx,       xxxxxxxx,                xxxxxxxx,       xxxxxxxx,       xxxxxxxx,       xxxxxxxx,       xxxxxxxx,       xxxxxxxx,       xxxxxxxx,
    xxxxxxxx,       xxxxxxxx,       xxxxxxxx,       xxxxxxxx,       xxxxxxxx,       xxxxxxxx,       xxxxxxxx,                xxxxxxxx,       xxxxxxxx,       xxxxxxxx,       xxxxxxxx,       M_CC_P_F,       M_CC_P_P,       xxxxxxxx,
    xxxxxxxx,       RGUI(KC_A),     RGUI(KC_S),     RGUI(KC_D),     RGUI(KC_F),     RGUI(KC_G),     xxxxxxxx,                xxxxxxxx,       LGUI(KC_H),     LGUI(KC_J),     LGUI(KC_K),     LGUI(KC_L),     xxxxxxxx,       xxxxxxxx,
    xxxxxxxx,       xxxxxxxx,       xxxxxxxx,       xxxxxxxx,       xxxxxxxx,       M_CX_B,                                                  M_CX_0,         M_CX_1,         M_CX_2,         M_CX_3,         xxxxxxxx,       xxxxxxxx,
    xxxxxxxx,       xxxxxxxx,       xxxxxxxx,       _______,        _______,                        xxxxxxxx,                xxxxxxxx,                       TO(_BL),        xxxxxxxx,       xxxxxxxx,       xxxxxxxx,       xxxxxxxx,
                                                                                    _______,            KC_NO,KC_NO,   KC_NO,KC_NO,          _______
  ),
};

uint16_t get_tapping_term(uint16_t keycode, keyrecord_t* record) {
  switch (keycode) {
    // Increase the tapping term a little for pinky fingers.
    case LHOME_P:
    case RHOME_P:
    // case LHOME_R:
    // case RHOME_R:
      return TAPPING_TERM + 15;

    default:
      return TAPPING_TERM;
  }
}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
#ifdef CONSOLE_ENABLE
    uprintf("KL: kc: 0x%04X, col: %2u, row: %2u, pressed: %u, time: %5u, int: %u, count: %u\n", keycode, record->event.key.col, record->event.key.row, record->event.pressed, record->event.time, record->tap.interrupted, record->tap.count);
#endif
  if (!process_custom_shift_keys(keycode, record)) { return false; }
  if (!process_achordion(keycode, record)) { return false; }

  if (record->event.pressed) {
    const bool is_shifted = get_mods() & MOD_MASK_SHIFT;
    switch (keycode) {
    case M_LAMBDA: send_unicode_string(is_shifted ? "Λ" : "λ"); break;

    case M_ECUTE:  send_unicode_string(is_shifted ? "É" : "é"); break;
    case M_EGRAV:  send_unicode_string(is_shifted ? "È" : "è"); break;
    case M_ECIRC:  send_unicode_string(is_shifted ? "Ê" : "ê"); break;
    case M_ETREMA: send_unicode_string(is_shifted ? "Ë" : "ë"); break;
    case M_ICIRC:  send_unicode_string(is_shifted ? "Î" : "î"); break;
    case M_ITREMA: send_unicode_string(is_shifted ? "Ï" : "ï"); break;

    case M_AGRAV:  send_unicode_string(is_shifted ? "À" : "à"); break;
    case M_ACIRC:  send_unicode_string(is_shifted ? "Â" : "â"); break;

    case M_UCUTE:  send_unicode_string(is_shifted ? "Ù" : "ù"); break;
    case M_UTREMA: send_unicode_string(is_shifted ? "Ü" : "ü"); break;

    case M_OCIRC:  send_unicode_string(is_shifted ? "Ô" : "ô"); break;

    case M_CEDIL:  send_unicode_string(is_shifted ? "Ç" : "ç"); break;
    case M_OE:     send_unicode_string(is_shifted ? "Œ" : "œ"); break;
    case M_DOTDOT: send_unicode_string("…"); break;
    case M_EURO:   send_unicode_string("€"); break;

    // emacs windows
    case M_CX_0:   SEND_STRING(SS_LCTL("x") "0"); break;
    case M_CX_1:   SEND_STRING(SS_LCTL("x") "1"); break;
    case M_CX_2:   SEND_STRING(SS_LCTL("x") "2"); break;
    case M_CX_3:   SEND_STRING(SS_LCTL("x") "3"); break;

    // emacs buffers
    case M_CX_B:   SEND_STRING(SS_LCTL("x") "b"); break;
    case M_CX_CF:  SEND_STRING(SS_LCTL("xf")); break;
    case M_CX_CS:  SEND_STRING(SS_LCTL("xs")); break;

    // emacs project
    case M_CC_P_P: SEND_STRING(SS_LCTL("c") "pp"); break;
    case M_CC_P_F: SEND_STRING(SS_LCTL("c") "pf"); break;
    }
  }
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

bool achordion_eager_mod(uint8_t mod) {
  // disable eager mod
  return false;
}

uint16_t achordion_timeout(uint16_t tap_hold_keycode) {
  return 800;  // Use a timeout of 800 ms.
}
