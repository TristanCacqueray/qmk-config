{
  inputs = { nixpkgs.url = "github:nixos/nixpkgs/release-24.05"; };
  outputs = { self, nixpkgs }:
    let
      pkgs = nixpkgs.legacyPackages.x86_64-linux.pkgs;
      qmk-compile = pkgs.writeScriptBin "qmk-compile" ''
        #!/bin/sh
        # Clone with: git clone --recurse-submodules https://github.com/idank/qmk_firmware -b holykeebs-master
        # Then run: qmk setup && ln -sf /srv/github.com/TristanCacqueray/qmk-config keyboards/crkbd/keymaps/moonpointer
        cd /srv/github.com/idank/qmk_firmware
        ${pkgs.qmk}/bin/qmk compile -e USER_NAME=idank -e POINTING_DEVICE=trackpoint -e POINTING_DEVICE_POSITION=right -e OLED=yes -kb crkbd/rev1 -km moonpointer
      '';
    in {
      devShells.x86_64-linux.default =
        pkgs.mkShell { buildInputs = [ pkgs.qmk qmk-compile ]; };
      apps.x86_64-linux.default = {
        type = "app";
        program = "${qmk-compile}/bin/qmk-compile";
      };
    };
}
