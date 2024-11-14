/*
This is the c configuration file for the keymap

Copyright 2012 Jun Wako <wakojun@gmail.com>
Copyright 2015 Jack Humbert

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#pragma once

//#define USE_MATRIX_I2C

/* Select hand configuration */

#define MASTER_LEFT
// #define MASTER_RIGHT
// #define EE_HANDS

//#define QUICK_TAP_TERM 0
//#define TAPPING_TERM 100

#ifdef RGBLIGHT_ENABLE
    #define RGBLIGHT_EFFECT_BREATHING
    #define RGBLIGHT_EFFECT_RAINBOW_MOOD
    #define RGBLIGHT_EFFECT_RAINBOW_SWIRL
    #define RGBLIGHT_EFFECT_SNAKE
    #define RGBLIGHT_EFFECT_KNIGHT
    #define RGBLIGHT_EFFECT_CHRISTMAS
    #define RGBLIGHT_EFFECT_STATIC_GRADIENT
    #define RGBLIGHT_EFFECT_RGB_TEST
    #define RGBLIGHT_EFFECT_ALTERNATING
    #define RGBLIGHT_EFFECT_TWINKLE
    #define RGBLIGHT_LIMIT_VAL 120
    #define RGBLIGHT_HUE_STEP 10
    #define RGBLIGHT_SAT_STEP 17
    #define RGBLIGHT_VAL_STEP 17
#endif

// Layer independent combos, set to qwerty pos
// TODO: render that automatically
#define COMBO_ONLY_FROM_LAYER 8

// https://docs.qmk.fm/features/pointing_device#how-to-customize
#define POINTING_DEVICE_AUTO_MOUSE_ENABLE

// tapping adjustment
#define TAPPING_TERM 195
#define PERMISSIVE_HOLD
// #define TAPPING_TERM_PER_KEY
// #define QUICK_TAP_TERM_PER_KEY

// toggle after one tap, like the default tap/toggle on oryx
#define TAPPING_TOGGLE 1

// Unfortunately, some applications drop or misorder fast key events. This is a
// partial fix to slow down the rate at which macros are sent.
#define TAP_CODE_DELAY 12

// Inspired by https://sunaku.github.io/home-row-mods.html#typing-streaks
#define ACHORDION_STREAK

// https://github.com/getreuer/qmk-keymap/discussions/47
#define ACHORDION_CHORDING_DISABLED

#define UNICODE_SELECTED_MODES UNICODE_MODE_LINUX

#undef MANUFACTURER
#define MANUFACTURER "midirus"
#undef PRODUCT
#define PRODUCT "MoonPointer"
