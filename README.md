# iecode-cpp

IECODE native toolkit in C++20: parsers, converters, decompilation helpers, the `iecode` command line
and its HTTP `serve` command, and a GoogleTest suite, for Inazuma Eleven Victory Road (IEVR) and
sibling Level-5 games. It was extracted with its history from `tools/iecode-cpp` of the Rose Griffon
monorepo (last tree there: `a8ed41ad`).

This repository contains no game data. Everything is read from an installation you own.

## Layout

| Path | What |
| --- | --- |
| `src/` | core library, CLI (`src/cli`), decompilation helpers (`src/decomp`), tests (`src/tests`), headers (`src/include`) |
| `third_party/` | vendored header-only libraries (stb, bcdec, mio, tinygltf) and Lua 5.2.4 |
| `cmake/` | warning set, SIMD detection, vcpkg overlay ports and triplets |
| `vcpkg.json` | dependency manifest (feature `iecode-cpp`) with pinned `builtin-baseline` |
| `homebrew/`, `bench/`, `tools/` | 3DS and NDS homebrew samples, benchmark, tooling |

## Build

Requirements: CMake 3.25+, Ninja, a C++20 compiler (MSVC 19.4x, GCC 13+ or Clang 17+) and vcpkg.
On Linux install the bgfx system packages first (`libgl1-mesa-dev libx11-dev libxrandr-dev libxi-dev
libxinerama-dev libxcursor-dev libwayland-dev libegl1-mesa-dev`).

```sh
git clone https://github.com/microsoft/vcpkg "$VCPKG_ROOT" && git -C "$VCPKG_ROOT" checkout 58845ed63eb19aff55e896ea1f5d51f2a0df5b66
"$VCPKG_ROOT/bootstrap-vcpkg.sh" -disableMetrics        # bootstrap-vcpkg.bat on Windows
cmake -S . -B build -G Ninja -DCMAKE_BUILD_TYPE=Release \
  -DCMAKE_TOOLCHAIN_FILE="$VCPKG_ROOT/scripts/buildsystems/vcpkg.cmake" \
  -DVCPKG_MANIFEST_FEATURES=iecode-cpp
cmake --build build
ctest --test-dir build --output-on-failure
```

Without `-DVCPKG_MANIFEST_FEATURES=iecode-cpp` vcpkg installs nothing and CMake stops at the first
required dependency (`CLI11`). Heavy builds belong in CI or on the build host (`ssh fr1`).

## Run

```sh
build/src/cli/iecode --help
build/src/cli/iecode serve --data /path/to/exported/data --port 3000 --host 0.0.0.0
```

`serve` is a read-only JSON API over a directory of exported game data (`--data`, default `data`):
`GET /` (version and stats), `/characters`, `/enriched`, `/skills`, `/items`, `/teams`, `/quests`, `/passives`,
`/tactics`, `/formations`, `/basara`, `/auras`, `/search`, `/constellations`, `/series` and more, each
list route with a `/<name>/<id>` detail route where it applies. `GET /` returns the version and the size of every loaded table.

## Release

Push a tag `vX.Y.Z`. The `release` workflow builds `iecode` in Release for `linux-x64` and `win-x64`
and attaches the archives and `SHA256SUMS` to the GitHub Release.

## License

MIT, see `LICENSE`. Vendored sources keep their own terms (`third_party/`).
