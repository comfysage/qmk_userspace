{
  pkgs ? import <nixpkgs> { },
}:
let
  packages = with pkgs; [
    qmk
    pkgsCross.avr.buildPackages.gcc
  ];
in
pkgs.mkShellNoCC {
  inherit packages;
}
