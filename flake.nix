{
  inputs = { nixpkgs.url = "github:nixos/nixpkgs"; };
  outputs = { self, nixpkgs }:
    let
      pkgs = nixpkgs.legacyPackages.x86_64-linux.pkgs;
      qmk-compile = pkgs.writeScriptBin "qmk-compile" ''
        #!/bin/sh
        exec ${pkgs.qmk}/bin/qmk compile -kb moonlander -km moonwalker
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
