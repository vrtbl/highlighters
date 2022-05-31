{
  description = "Tree-sitter grammar for Passerine";

  inputs = {
    nixpkgs.url = "github:NixOS/nixpkgs/nixpkgs-unstable";
    utils.url = "github:numtide/flake-utils";
  };

  outputs = { self, nixpkgs, utils }:
    utils.lib.eachDefaultSystem (system:
      let pkgs = import nixpkgs { inherit system; };
      in rec {
        packages.tree-sitter-passerine =
          nixpkgs.legacyPackages.x86_64-linux.hello;
        packages.default = packages.tree-sitter-passerine;

        devShells.default = pkgs.mkShell {
          nativeBuildInputs = with pkgs; [ nodejs tree-sitter ];
        };
      });
}
