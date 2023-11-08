# qmk config with Achordion

![cornec](./cornec.png)

> generated with http://www.keyboard-layout-editor.com

## setup

```
nix shell nixpkgs#qmk
qmk setup

ln -s $(pwd) /home/fedora/qmk_firmware/keyboards/moonlander/keymaps/moonwalker
```

## build

```
qmk compile -kb moonlander -km moonwalker
```
