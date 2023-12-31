# Set any rules.mk overrides for your specific keymap here.
# See rules at https://docs.qmk.fm/#/config_options?id=the-rulesmk-file
COMMAND_ENABLE = no
AUDIO_ENABLE = no
MUSIC_ENABLE = no
SPACE_CADET_ENABLE = no
COMBO_ENABLE = no
SRC = matrix.c
SRC += features/achordion.c
SRC += features/custom_shift_keys.c
RGBLIGHT_ENABLE = no
BACKLIGHT_ENABLE = no
# LEADER_ENABLE = yes

# unicode
UNICODE_COMMON = yes
UNICODE_ENABLE = yes

CONSOLE_ENABLE = no
