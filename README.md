# qmk-config

![cornec](./cornec.png)

> image generated with http://www.keyboard-layout-editor.com


## Changelog

- Initial layout from [technomancy](https://atreus.technomancy.us/cheat.pdf).
- Adapted to fit a 42 keys layout, moving ctrl and alt to the home row using combos.
- Replaced combos to use proper home-row-mods thanks to [achordion](https://getreuer.info/posts/keyboards/achordion/).


## Built

Run the following commands to build the firmware:

```
nix develop --command qmk setup
ln -s $(pwd) ~/qmk_firmware/keyboards/moonlander/keymaps/moonwalker
nix run
```

Don't forget to apply https://github.com/qmk/qmk_firmware/pull/19405 to ~/qmk_firmware.
