# qmk config with Achordion

## setup

```
nix shell nixpkgs#qmk
qmk setup zsa/qmk_firmware -b firmware22

ln -s $(pwd) /home/fedora/qmk_firmware/keyboards/moonlander/keymaps/moonwalker
```

## build

```
qmk compile -kb moonlander -km moonwalker
```
