# iecode-cpp: agent contract

IECODE native toolkit in C++20: parsers, converters, decompilation helpers, the `iecode` CLI (including
the HTTP `serve` command) and the GoogleTest suite, for Inazuma Eleven Victory Road (IEVR) and sibling
Level-5 game data. It was extracted with its history from `tools/iecode-cpp` of the Rose Griffon
monorepo (last tree there: `a8ed41ad`; before that `packages/iecode-cpp`).

## Rules

- Build system is CMake 3.25+ with a vcpkg manifest (`vcpkg.json`, feature `iecode-cpp`, pinned
  `builtin-baseline`). Dependencies come only from vcpkg, `third_party/` and the pinned FetchContent
  entries in `CMakeLists.txt`. Overlay ports and triplets live in `cmake/`.
- Never commit, copy or bake a game asset. Game data is read in place (`iecode serve --data <dir>`).
  Tests build synthetic fixtures.
- `IECODE_BUILD_ENGINE` and `IECODE_BUILD_GAME` stay OFF until their headers are ported; the dead
  test sources are filtered in `src/tests/CMakeLists.txt`.
- Heavy builds run in GitHub Actions or on the build host (`ssh fr1`), never on the workstation.
- Secrets never printed, logged or committed. Run `gitleaks detect` before every push.
- Commit by path on `main`, no branches, no AI attribution. Check `gh run list -R aphrody-labs/iecode-cpp`
  after pushing. Releases are tags `v*`; the workflow attaches the binaries.
- English, no emoji, in code, docs and commits. Original comments in French stay until the file is
  touched for another reason.
- Third-party notices stay with their code (`third_party/*`, `LICENSE`). Do not delete them.
