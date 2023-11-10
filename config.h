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
#define TAPPING_TERM 190
#define PERMISSIVE_HOLD
// #define TAPPING_TERM_PER_KEY
// #define QUICK_TAP_TERM_PER_KEY

// toggle after one tap, like the default tap/toggle on oryx
#define TAPPING_TOGGLE 1

// Unfortunately, some applications drop or misorder fast key events. This is a
// partial fix to slow down the rate at which macros are sent.
#define TAP_CODE_DELAY 12
