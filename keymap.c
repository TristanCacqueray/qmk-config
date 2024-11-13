// Copyright © 2024 Tristan de Cacqueray
// SPDX-License-Identifier: GPL-3.0-or-later

#include QMK_KEYBOARD_H
#include "version.h"
#include "keymap_us_international.h"
#include "features/achordion.h"
#include "features/custom_shift_keys.h"

#include "gen_qmk.h"


const custom_shift_key_t custom_shift_keys[] = {
  {LCTL_T(KC_D), LSFT(KC_D)}, // Shift d is D
  {LALT_T(KC_F), LSFT(KC_F)}, // Shift f is F
  {RALT_T(KC_J), LSFT(KC_J)}, // Shift j is J
  {RCTL_T(KC_K), LSFT(KC_K)}, // Shift k is K
  {LT(_layer_wm, KC_A), LSFT(KC_A)},      // Shift a is A
  {LT(_layer_wm, KC_SEMICOLON), LSFT(KC_SEMICOLON)},
  {LT(_layer_num, KC_S), LSFT(KC_S)},
  {LT(_layer_num, KC_L), LSFT(KC_L)},
};
uint8_t NUM_CUSTOM_SHIFT_KEYS =
    sizeof(custom_shift_keys) / sizeof(custom_shift_key_t);


bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  if (!process_custom_shift_keys(keycode, record)) { return false; }
  if (!process_achordion(keycode, record)) { return false; }

  if (record->event.pressed) {
    const bool is_shifted = get_mods() & MOD_MASK_SHIFT;
    switch (keycode) {
      MACRO_HANDLERS
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

uint16_t achordion_timeout(uint16_t tap_hold_keycode) {
  return 800;  // Use a timeout of 800 ms.
}

uint16_t achordion_streak_timeout(uint16_t tap_hold_keycode) {
  return 150;
}

#ifdef OLED_ENABLE
bool oled_task_user(void) {
    switch (get_highest_layer(layer_state)) {
        LAYER_HANDLERS
        default:
            oled_write_ln_P(PSTR("Undefined\n"), false);
    }

    return false;
}

oled_rotation_t oled_init_user(oled_rotation_t rotation) {
    return OLED_ROTATION_270;
}
#endif
