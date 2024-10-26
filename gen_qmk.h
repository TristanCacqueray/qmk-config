// Generated with https://github.com/TristanCacqueray/gen-zmk/

#pragma once

enum layer {
 _layer_base, _layer_num, _layer_fn, _layer_french, _layer_greek, _layer_wm, _layer_mice, _layer_sys, _layer_qwerty
};

#define LAYER_HANDLERS \
  case _layer_base: oled_write_P(PSTR("base\n"), false); break; \
  case _layer_num: oled_write_P(PSTR("num\n"), false); break; \
  case _layer_fn: oled_write_P(PSTR("fn\n"), false); break; \
  case _layer_french: oled_write_P(PSTR("french\n"), false); break; \
  case _layer_greek: oled_write_P(PSTR("greek\n"), false); break; \
  case _layer_wm: oled_write_P(PSTR("wm\n"), false); break; \
  case _layer_mice: oled_write_P(PSTR("mice\n"), false); break; \
  case _layer_sys: oled_write_P(PSTR("sys\n"), false); break; \
  case _layer_qwerty: oled_write_P(PSTR("qwerty\n"), false); break;

enum custom_keycodes {
  M_432d782074204f = SAFE_RANGE,
  M_432d782074206f,
  M_432d7820742032,
  M_432d7820702070,
  M_432d78207420524554,
  M_432d7820702066,
  M_432d782062,
  M_432d63203c6c6566743e,
  M_432d782031,
  M_432d782032,
  M_432d782033,
  M_432d63203c72696768743e,
  M_432d7820742030,
  M_432d535043,
  M_432d782030,
  M_3c93a9,
  M_3b7397,
  M_3f5395,
  M_3c13a1,
  M_3c43a4,
  M_3b3393,
  M_3c53a5,
  M_3b9399,
  M_3bf39f,
  M_3c03a0,
  M_3b1391,
  M_3c33a3,
  M_3b4394,
  M_3c63a6,
  M_3b8398,
  M_3c73a7,
  M_d7,
  M_3ba39a,
  M_3bb39b,
  M_3c83a8,
  M_3b6396,
  M_3be39e,
  M_3b2392,
  M_3bd39d,
  M_3bc39c,
  M_211d,
  M_2295,
  M_e8c9,
  M_e9c9,
  M_eaca,
  M_f9d9,
  M_eece,
  M_153152,
  M_e0c0,
  M_e2c2,
  M_ebcb,
  M_20ac,
  M_fcdc,
  M_efcf,
  M_f4d4,
  M_2026,
  M_e7c7,
  M_ab,
  M_bb,
  M_3a3d,
};
#define MACRO_HANDLERS \
  case M_432d782074204f: SEND_STRING(SS_LCTL("x") "tO"); break; \
  case M_432d782074206f: SEND_STRING(SS_LCTL("x") "to"); break; \
  case M_432d7820742032: SEND_STRING(SS_LCTL("x") "t2"); break; \
  case M_432d7820702070: SEND_STRING(SS_LCTL("x") "pp"); break; \
  case M_432d78207420524554: SEND_STRING(SS_LCTL("x") "t\n"); break; \
  case M_432d7820702066: SEND_STRING(SS_LCTL("x") "pf"); break; \
  case M_432d782062: SEND_STRING(SS_LCTL("x") "b"); break; \
  case M_432d63203c6c6566743e: SEND_STRING(SS_LCTL("c") SS_TAP(X_LEFT)); break; \
  case M_432d782031: SEND_STRING(SS_LCTL("x") "1"); break; \
  case M_432d782032: SEND_STRING(SS_LCTL("x") "2"); break; \
  case M_432d782033: SEND_STRING(SS_LCTL("x") "3"); break; \
  case M_432d63203c72696768743e: SEND_STRING(SS_LCTL("c") SS_TAP(X_RIGHT)); break; \
  case M_432d7820742030: SEND_STRING(SS_LCTL("x") "t0"); break; \
  case M_432d535043: SEND_STRING(SS_LCTL(" ")); break; \
  case M_432d782030: SEND_STRING(SS_LCTL("x") "0"); break; \
  case M_3c93a9: send_unicode_string(is_shifted ? "Ω" : "ω"); break; \
  case M_3b7397: send_unicode_string(is_shifted ? "Η" : "η"); break; \
  case M_3f5395: send_unicode_string(is_shifted ? "Ε" : "ϵ"); break; \
  case M_3c13a1: send_unicode_string(is_shifted ? "Ρ" : "ρ"); break; \
  case M_3c43a4: send_unicode_string(is_shifted ? "Τ" : "τ"); break; \
  case M_3b3393: send_unicode_string(is_shifted ? "Γ" : "γ"); break; \
  case M_3c53a5: send_unicode_string(is_shifted ? "Υ" : "υ"); break; \
  case M_3b9399: send_unicode_string(is_shifted ? "Ι" : "ι"); break; \
  case M_3bf39f: send_unicode_string(is_shifted ? "Ο" : "ο"); break; \
  case M_3c03a0: send_unicode_string(is_shifted ? "Π" : "π"); break; \
  case M_3b1391: send_unicode_string(is_shifted ? "Α" : "α"); break; \
  case M_3c33a3: send_unicode_string(is_shifted ? "Σ" : "σ"); break; \
  case M_3b4394: send_unicode_string(is_shifted ? "Δ" : "δ"); break; \
  case M_3c63a6: send_unicode_string(is_shifted ? "Φ" : "φ"); break; \
  case M_3b8398: send_unicode_string(is_shifted ? "Θ" : "θ"); break; \
  case M_3c73a7: send_unicode_string(is_shifted ? "Χ" : "χ"); break; \
  case M_d7: send_unicode_string("×"); break; \
  case M_3ba39a: send_unicode_string(is_shifted ? "Κ" : "κ"); break; \
  case M_3bb39b: send_unicode_string(is_shifted ? "Λ" : "λ"); break; \
  case M_3c83a8: send_unicode_string(is_shifted ? "Ψ" : "ψ"); break; \
  case M_3b6396: send_unicode_string(is_shifted ? "Ζ" : "ζ"); break; \
  case M_3be39e: send_unicode_string(is_shifted ? "Ξ" : "ξ"); break; \
  case M_3b2392: send_unicode_string(is_shifted ? "Β" : "β"); break; \
  case M_3bd39d: send_unicode_string(is_shifted ? "Ν" : "ν"); break; \
  case M_3bc39c: send_unicode_string(is_shifted ? "Μ" : "μ"); break; \
  case M_211d: send_unicode_string("ℝ"); break; \
  case M_2295: send_unicode_string("⊕"); break; \
  case M_e8c9: send_unicode_string(is_shifted ? "É" : "è"); break; \
  case M_e9c9: send_unicode_string(is_shifted ? "É" : "é"); break; \
  case M_eaca: send_unicode_string(is_shifted ? "Ê" : "ê"); break; \
  case M_f9d9: send_unicode_string(is_shifted ? "Ù" : "ù"); break; \
  case M_eece: send_unicode_string(is_shifted ? "Î" : "î"); break; \
  case M_153152: send_unicode_string(is_shifted ? "Œ" : "œ"); break; \
  case M_e0c0: send_unicode_string(is_shifted ? "À" : "à"); break; \
  case M_e2c2: send_unicode_string(is_shifted ? "Â" : "â"); break; \
  case M_ebcb: send_unicode_string(is_shifted ? "Ë" : "ë"); break; \
  case M_20ac: send_unicode_string("€"); break; \
  case M_fcdc: send_unicode_string(is_shifted ? "Ü" : "ü"); break; \
  case M_efcf: send_unicode_string(is_shifted ? "Ï" : "ï"); break; \
  case M_f4d4: send_unicode_string(is_shifted ? "Ô" : "ô"); break; \
  case M_2026: send_unicode_string("…"); break; \
  case M_e7c7: send_unicode_string(is_shifted ? "Ç" : "ç"); break; \
  case M_ab: send_unicode_string("«"); break; \
  case M_bb: send_unicode_string("»"); break; \
  case M_3a3d: SEND_STRING(":="); break;

const uint16_t PROGMEM combo_KC_EQUAL[] = {KC_H, KC_J, COMBO_END};
const uint16_t PROGMEM combo_KC_PIPE[] = {KC_L, KC_SEMICOLON, COMBO_END};
const uint16_t PROGMEM combo_KC_EXCLAIM[] = {KC_W, KC_S, COMBO_END};
const uint16_t PROGMEM combo_KC_AT[] = {KC_W, KC_E, COMBO_END};
const uint16_t PROGMEM combo_KC_LEFT_PAREN[] = {KC_S, KC_D, COMBO_END};
const uint16_t PROGMEM combo_KC_RIGHT_PAREN[] = {KC_D, KC_F, COMBO_END};
const uint16_t PROGMEM combo_KC_LEFT_BRACKET[] = {KC_A, KC_S, COMBO_END};
const uint16_t PROGMEM combo_KC_RIGHT_BRACKET[] = {KC_F, KC_G, COMBO_END};
const uint16_t PROGMEM combo_KC_LEFT_CURLY_BRACE[] = {KC_E, KC_R, COMBO_END};
const uint16_t PROGMEM combo_KC_RIGHT_CURLY_BRACE[] = {KC_R, KC_T, COMBO_END};
const uint16_t PROGMEM combo_KC_TILDE[] = {KC_U, KC_I, COMBO_END};
const uint16_t PROGMEM combo_KC_PERCENT[] = {KC_I, KC_O, COMBO_END};
const uint16_t PROGMEM combo_KC_ASTERISK[] = {KC_J, KC_K, COMBO_END};
const uint16_t PROGMEM combo_KC_PLUS[] = {KC_K, KC_L, COMBO_END};
const uint16_t PROGMEM combo_KC_CIRCUMFLEX[] = {KC_O, KC_L, COMBO_END};
const uint16_t PROGMEM combo_KC_MINUS[] = {KC_E, KC_D, COMBO_END};
const uint16_t PROGMEM combo_KC_UNDERSCORE[] = {KC_R, KC_F, COMBO_END};
const uint16_t PROGMEM combo_KC_AMPERSAND[] = {KC_F, KC_V, COMBO_END};
const uint16_t PROGMEM combo_KC_HASH[] = {KC_D, KC_C, COMBO_END};
const uint16_t PROGMEM combo_KC_DOLLAR[] = {KC_G, KC_B, COMBO_END};
const uint16_t PROGMEM combo_KC_GRAVE[] = {KC_J, KC_M, COMBO_END};
const uint16_t PROGMEM combo_KC_BACKSLASH[] = {KC_K, KC_COMMA, COMBO_END};
const uint16_t PROGMEM combo_KC_QUOTE[] = {KC_I, KC_K, COMBO_END};
const uint16_t PROGMEM combo_KC_DOUBLE_QUOTE[] = {KC_U, KC_J, COMBO_END};

combo_t key_combos[] = {
  COMBO(combo_KC_EQUAL, KC_EQUAL),
  COMBO(combo_KC_PIPE, KC_PIPE),
  COMBO(combo_KC_EXCLAIM, KC_EXCLAIM),
  COMBO(combo_KC_AT, KC_AT),
  COMBO(combo_KC_LEFT_PAREN, KC_LEFT_PAREN),
  COMBO(combo_KC_RIGHT_PAREN, KC_RIGHT_PAREN),
  COMBO(combo_KC_LEFT_BRACKET, KC_LEFT_BRACKET),
  COMBO(combo_KC_RIGHT_BRACKET, KC_RIGHT_BRACKET),
  COMBO(combo_KC_LEFT_CURLY_BRACE, KC_LEFT_CURLY_BRACE),
  COMBO(combo_KC_RIGHT_CURLY_BRACE, KC_RIGHT_CURLY_BRACE),
  COMBO(combo_KC_TILDE, KC_TILDE),
  COMBO(combo_KC_PERCENT, KC_PERCENT),
  COMBO(combo_KC_ASTERISK, KC_ASTERISK),
  COMBO(combo_KC_PLUS, KC_PLUS),
  COMBO(combo_KC_CIRCUMFLEX, KC_CIRCUMFLEX),
  COMBO(combo_KC_MINUS, KC_MINUS),
  COMBO(combo_KC_UNDERSCORE, KC_UNDERSCORE),
  COMBO(combo_KC_AMPERSAND, KC_AMPERSAND),
  COMBO(combo_KC_HASH, KC_HASH),
  COMBO(combo_KC_DOLLAR, KC_DOLLAR),
  COMBO(combo_KC_GRAVE, KC_GRAVE),
  COMBO(combo_KC_BACKSLASH, KC_BACKSLASH),
  COMBO(combo_KC_QUOTE, KC_QUOTE),
  COMBO(combo_KC_DOUBLE_QUOTE, KC_DOUBLE_QUOTE)
};
uint16_t get_combo_term(uint16_t index, combo_t *combo) {
  if (index < 15) return 30;
  if (index < 24) return 18;
  return 40;
}

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [_layer_base] = LAYOUT_split_3x6_3(
    TO(_layer_mice),
    KC_Q,
    KC_W,
    KC_E,
    KC_R,
    KC_T,
    KC_Y,
    KC_U,
    KC_I,
    KC_O,
    KC_P,
    OSL(_layer_french),
    KC_TAB,
    LT(_layer_wm, KC_A),
    LT(_layer_num, KC_S),
    MT(MOD_LCTL, KC_D),
    MT(MOD_LALT, KC_F),
    KC_G,
    KC_H,
    MT(MOD_LALT, KC_J),
    MT(MOD_LCTL, KC_K),
    LT(_layer_num, KC_L),
    LT(_layer_wm, KC_SEMICOLON),
    OSL(_layer_greek),
    KC_ESC,
    KC_Z,
    KC_X,
    KC_C,
    KC_V,
    KC_B,
    KC_N,
    KC_M,
    KC_COMMA,
    KC_DOT,
    KC_SLASH,
    KC_ENTER,
    KC_LGUI,
    KC_LALT,
    MT(MOD_LSFT, KC_BACKSPACE),
    KC_SPACE,
    MO(_layer_fn),
    MO(_layer_num)),
  [_layer_num] = LAYOUT_split_3x6_3(
    XXXXXXX,
    KC_F20,
    KC_F21,
    KC_UP,
    KC_F22,
    KC_F23,
    KC_MS_BTN3,
    KC_7,
    KC_8,
    KC_9,
    KC_ASTERISK,
    XXXXXXX,
    XXXXXXX,
    KC_F18,
    KC_LEFT,
    KC_DOWN,
    KC_RIGHT,
    KC_F19,
    KC_PGUP,
    KC_4,
    KC_5,
    KC_6,
    M_3a3d,
    XXXXXXX,
    XXXXXXX,
    KC_F13,
    KC_F14,
    KC_F15,
    KC_F16,
    KC_F17,
    KC_PGDN,
    KC_1,
    KC_2,
    KC_3,
    KC_BACKSLASH,
    KC_ENTER,
    TO(_layer_base),
    TO(_layer_base),
    TO(_layer_base),
    XXXXXXX,
    KC_0,
    KC_DOT),
  [_layer_fn] = LAYOUT_split_3x6_3(
    TO(_layer_base),
    KC_INS,
    KC_HOME,
    KC_UP,
    KC_END,
    KC_PGUP,
    XXXXXXX,
    KC_F7,
    KC_F8,
    KC_F9,
    KC_F10,
    XXXXXXX,
    XXXXXXX,
    KC_DEL,
    KC_LEFT,
    KC_DOWN,
    KC_RIGHT,
    KC_PGDN,
    KC_PGUP,
    KC_F4,
    KC_F5,
    KC_F6,
    KC_F11,
    XXXXXXX,
    XXXXXXX,
    KC_AUDIO_VOL_DOWN,
    KC_AUDIO_VOL_UP,
    KC_BRIGHTNESS_DOWN,
    KC_BRIGHTNESS_UP,
    XXXXXXX,
    KC_PGDN,
    KC_F1,
    KC_F2,
    KC_F3,
    KC_F12,
    XXXXXXX,
    TO(_layer_base),
    TO(_layer_base),
    TO(_layer_base),
    XXXXXXX,
    TO(_layer_base),
    KC_PRINT_SCREEN),
  [_layer_french] = LAYOUT_split_3x6_3(
    XXXXXXX,
    XXXXXXX,
    M_e8c9,
    M_e9c9,
    M_eaca,
    XXXXXXX,
    XXXXXXX,
    M_f9d9,
    M_eece,
    M_153152,
    LSFT(KC_ESC),
    XXXXXXX,
    XXXXXXX,
    M_e0c0,
    M_e2c2,
    M_ebcb,
    XXXXXXX,
    M_20ac,
    XXXXXXX,
    M_fcdc,
    M_efcf,
    M_f4d4,
    M_2026,
    XXXXXXX,
    XXXXXXX,
    XXXXXXX,
    XXXXXXX,
    M_e7c7,
    XXXXXXX,
    XXXXXXX,
    XXXXXXX,
    XXXXXXX,
    M_ab,
    M_bb,
    XXXXXXX,
    XXXXXXX,
    XXXXXXX,
    XXXXXXX,
    KC_LEFT_SHIFT,
    XXXXXXX,
    TO(_layer_base),
    XXXXXXX),
  [_layer_greek] = LAYOUT_split_3x6_3(
    XXXXXXX,
    M_3c93a9,
    M_3b7397,
    M_3f5395,
    M_3c13a1,
    M_3c43a4,
    M_3b3393,
    M_3c53a5,
    M_3b9399,
    M_3bf39f,
    M_3c03a0,
    XXXXXXX,
    XXXXXXX,
    M_3b1391,
    M_3c33a3,
    M_3b4394,
    M_3c63a6,
    M_3b8398,
    M_3c73a7,
    M_d7,
    M_3ba39a,
    M_3bb39b,
    M_3c83a8,
    XXXXXXX,
    XXXXXXX,
    M_3b6396,
    M_3be39e,
    XXXXXXX,
    M_3c93a9,
    M_3b2392,
    M_3bd39d,
    M_3bc39c,
    KC_N,
    M_211d,
    M_2295,
    XXXXXXX,
    XXXXXXX,
    XXXXXXX,
    KC_LEFT_SHIFT,
    XXXXXXX,
    TO(_layer_base),
    XXXXXXX),
  [_layer_wm] = LAYOUT_split_3x6_3(
    XXXXXXX,
    XXXXXXX,
    M_432d782074204f,
    LCTL(KC_UP),
    M_432d782074206f,
    M_432d7820742032,
    LGUI(KC_V),
    LGUI(KC_J),
    LGUI(KC_K),
    LGUI(KC_L),
    M_432d7820702070,
    XXXXXXX,
    LGUI(KC_TAB),
    XXXXXXX,
    LCTL(KC_LEFT),
    LCTL(KC_DOWN),
    LCTL(KC_RIGHT),
    M_432d78207420524554,
    LGUI(KC_ENTER),
    LGUI(KC_F),
    LGUI(KC_G),
    LGUI(KC_H),
    M_432d7820702066,
    XXXXXXX,
    XXXXXXX,
    XXXXXXX,
    LGUI(KC_A),
    LGUI(KC_S),
    LGUI(KC_D),
    M_432d782062,
    M_432d63203c6c6566743e,
    M_432d782031,
    M_432d782032,
    M_432d782033,
    M_432d63203c72696768743e,
    XXXXXXX,
    XXXXXXX,
    M_432d7820742030,
    XXXXXXX,
    M_432d535043,
    M_432d782030,
    XXXXXXX),
  [_layer_mice] = LAYOUT_split_3x6_3(
    TO(_layer_base),
    XXXXXXX,
    LALT(KC_LEFT),
    KC_UP,
    LALT(KC_RIGHT),
    XXXXXXX,
    KC_MS_WH_UP,
    KC_MS_BTN2,
    KC_MS_BTN3,
    XXXXXXX,
    XXXXXXX,
    XXXXXXX,
    TO(_layer_sys),
    XXXXXXX,
    KC_LEFT,
    KC_DOWN,
    KC_RIGHT,
    KC_PGUP,
    KC_MS_WH_DOWN,
    KC_MS_WH_LEFT,
    KC_MS_WH_RIGHT,
    XXXXXXX,
    XXXXXXX,
    XXXXXXX,
    TO(_layer_qwerty),
    XXXXXXX,
    XXXXXXX,
    KC_LEFT_CTRL,
    KC_LALT,
    KC_PGDN,
    XXXXXXX,
    XXXXXXX,
    XXXXXXX,
    XXXXXXX,
    XXXXXXX,
    KC_ENTER,
    KC_LGUI,
    XXXXXXX,
    KC_LEFT_SHIFT,
    KC_MS_BTN1,
    TO(_layer_base),
    XXXXXXX),
  [_layer_sys] = LAYOUT_split_3x6_3(
    TO(_layer_base),
    XXXXXXX,
    XXXXXXX,
    XXXXXXX,
    XXXXXXX,
    XXXXXXX,
    XXXXXXX,
    XXXXXXX,
    XXXXXXX,
    XXXXXXX,
    XXXXXXX,
    XXXXXXX,
    TO(_layer_base),
    XXXXXXX,
    XXXXXXX,
    XXXXXXX,
    XXXXXXX,
    XXXXXXX,
    XXXXXXX,
    XXXXXXX,
    XXXXXXX,
    XXXXXXX,
    XXXXXXX,
    XXXXXXX,
    XXXXXXX,
    XXXXXXX,
    XXXXXXX,
    XXXXXXX,
    XXXXXXX,
    XXXXXXX,
    XXXXXXX,
    XXXXXXX,
    XXXXXXX,
    XXXXXXX,
    XXXXXXX,
    XXXXXXX,
    XXXXXXX,
    XXXXXXX,
    XXXXXXX,
    XXXXXXX,
    TO(_layer_base),
    XXXXXXX),
  [_layer_qwerty] = LAYOUT_split_3x6_3(
    TO(_layer_base),
    KC_Q,
    KC_W,
    KC_E,
    KC_R,
    KC_T,
    KC_Y,
    KC_U,
    KC_I,
    KC_O,
    KC_P,
    OSL(_layer_french),
    KC_TAB,
    KC_A,
    KC_S,
    KC_D,
    KC_F,
    KC_G,
    KC_H,
    KC_J,
    KC_K,
    KC_L,
    KC_SEMICOLON,
    OSL(_layer_greek),
    KC_ESC,
    KC_Z,
    KC_X,
    KC_C,
    KC_V,
    KC_B,
    KC_N,
    KC_M,
    KC_COMMA,
    KC_DOT,
    KC_SLASH,
    KC_ENTER,
    KC_LEFT_CTRL,
    KC_LALT,
    MT(MOD_LSFT, KC_BACKSPACE),
    KC_SPACE,
    MO(_layer_fn),
    MO(_layer_num))
};