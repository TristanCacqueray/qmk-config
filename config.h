/*
  Set any config.h overrides for your specific keymap here.
  See config.h options at https://docs.qmk.fm/#/config_options?id=the-configh-file
*/
#define ORYX_CONFIGURATOR

#define USB_SUSPEND_WAKEUP_DELAY 0
#undef MOUSEKEY_INTERVAL
#define MOUSEKEY_INTERVAL 15

#undef MOUSEKEY_TIME_TO_MAX
#define MOUSEKEY_TIME_TO_MAX 30

// reduce firmware size by limitting the number of layer to 8
#define LAYER_STATE_8BIT

// disable sound
#define NO_MUSIC_MODE

#define TAPPING_TERM 200
#define PERMISSIVE_HOLD

// toggle after one tap, like the default tap/toggle on oryx
#define TAPPING_TOGGLE 1
