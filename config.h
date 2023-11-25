#define USB_SUSPEND_WAKEUP_DELAY 0

// mouse adjustment
#undef MOUSEKEY_INTERVAL
#define MOUSEKEY_INTERVAL 15
#undef MOUSEKEY_TIME_TO_MAX
#define MOUSEKEY_TIME_TO_MAX 30

// reduce firmware size by limitting the number of layer to 8
#define LAYER_STATE_8BIT

// disable sound
#define NO_MUSIC_MODE

// tapping adjustment
#define TAPPING_TERM 195
#define PERMISSIVE_HOLD
#define TAPPING_TERM_PER_KEY
// #define QUICK_TAP_TERM_PER_KEY

// toggle after one tap, like the default tap/toggle on oryx
#define TAPPING_TOGGLE 1

// Unfortunately, some applications drop or misorder fast key events. This is a
// partial fix to slow down the rate at which macros are sent.
#define TAP_CODE_DELAY 12

// This uses https://github.com/qmk/qmk_firmware/pull/19405 to fix an issue
// for `m`-`v` and `m`-`a` to output `)` and `#` instead of `0` and `3`.
#define KEYBOARD_MOD_PACKET_DELAY 20

// Inspired by https://sunaku.github.io/home-row-mods.html#typing-streaks
#define ACHORDION_STREAK

// https://github.com/getreuer/qmk-keymap/discussions/47
#define ACHORDION_CHORDING_DISABLED

// leader
// #define LEADER_NO_TIMEOUT

// unicode
#define UNICODE_SELECTED_MODES UNICODE_MODE_LINUX
