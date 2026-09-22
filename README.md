# IECODE C++ toolkit

This directory is the C/C++ surface of the unified IECODE workspace. Rust owns the canonical
portable capability API; C/C++ supplies native parsers, conversion tools and compatibility
implementations behind the common CMake/FFI boundary. IEVR/Victory Road runtime ownership stays
in the sibling `nie` workspace.

## Scope

- `src/iecode-cpp/`: C/C++ parsers, converters, CLI, decompilation helpers, and tests.
- `cmake/`, `CMakeLists.txt`, `vcpkg.json`: native build configuration.
- `bench/cpp/`: benchmark harness.

This repository contains no game dumps or generated VFS data.
