// Copyright © 2024 Tristan de Cacqueray
// SPDX-License-Identifier: GPL-3.0-or-later

#include QMK_KEYBOARD_H
#include "version.h"
#include "keymap_us_international.h"
#include "features/achordion.h"

#include "gen_qmk.h"

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
