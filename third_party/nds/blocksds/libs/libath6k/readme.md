# libath6k

## 1. Introduction

This is a library to help develop applications for the Xtensa CPU that comes
with the DSi and 3DS consoles. It is provided as part of
[BlocksDS](https://blocksds.skylyrac.net), but it can also be used as a
standalone library.

Please, report issues [here](https://codeberg.org/blocksds/sdk/issues).

## 2. Setup

The Xtensa toolchain is currently distributed by
[Wonderful Toolchain](https://wonderful.asie.pl). Currently it's only available
on Linux, not Windows.

Install the Xtensa toolchain of Wonderful Toolchain:

```bash
wf-pacman -Syu
wf-pacman -S toolchain-gcc-xtensa-elf
```

Now, build the library:

```bash
make
```
