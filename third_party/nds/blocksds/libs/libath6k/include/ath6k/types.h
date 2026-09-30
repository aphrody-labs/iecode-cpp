// SPDX-License-Identifier: Zlib
//
// Copyright (c) 2023 Antonio Niño Díaz

#ifndef LIBATH6K_TYPES_H__
#define LIBATH6K_TYPES_H__

#ifdef __cplusplus
extern "C" {
#endif

//#include <stdint.h>

#define BIT(n) (1 << (n))

/// Aligns struct, arrays, etc, to "m".
#define ALIGN(m) __attribute__((aligned(m)))

/// 8 bit unsigned integer.
typedef unsigned char u8;
/// 16 bit unsigned integer.
typedef unsigned short u16;
/// 32 bit unsigned integer.
typedef unsigned int u32;
/// 64 bit unsigned integer.
typedef unsigned long long u64;

/// 8 bit signed integer.
typedef signed char s8;
/// 16 bit signed integer.
typedef signed short s16;
/// 32 bit signed integer.
typedef signed int s32;
/// 64 bit signed integer.
typedef signed long long s64;

/// 8 bit volatile unsigned integer.
typedef volatile u8 vu8;
/// 16 bit volatile unsigned integer.
typedef volatile u16 vu16;
/// 32 bit volatile unsigned integer.
typedef volatile u32 vu32;
/// 64 bit volatile unsigned integer.
typedef volatile u64 vu64;

/// 8 bit volatile signed integer.
typedef volatile s8 vs8;
/// 16 bit volatile signed integer.
typedef volatile s16 vs16;
/// 32 bit volatile signed integer.
typedef volatile s32 vs32;
/// 64 bit volatile signed integer.
typedef volatile s64 vs64;

#ifdef __cplusplus
}
#endif

#endif // LIBATH6K_TYPES_H__
