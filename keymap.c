// Copyright © 2024 Tristan de Cacqueray
// SPDX-License-Identifier: GPL-3.0-or-later

#include QMK_KEYBOARD_H
#include "version.h"
#include "keymap_us_international.h"
#include "features/achordion.h"

#include "gen_qmk.h"

void pointing_device_init_user(void) {
    set_auto_mouse_layer(_layer_mice);
    set_auto_mouse_enable(true);
}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
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
    case MT(MOD_LSFT, KC_BACKSPACE):
      return true;
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
