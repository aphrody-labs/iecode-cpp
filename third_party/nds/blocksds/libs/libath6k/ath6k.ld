/*
 * SPDX-License-Identifier: Zlib
 *
 * Copyright (C) 2026 PoroCYon
 */

OUTPUT_ARCH(xtensa)

MEMORY {
	TESTRAM_D : ORIGIN = 0x53c000, LENGTH = 4K
	TESTRAM_I : ORIGIN = 0x93c000, LENGTH = 4K
}

SECTIONS {
	.text : {
		__text_start = .;
		KEEP(*(.text._start))
		*(.text* .rodata*)
	} >TESTRAM_I AT>TESTRAM_D

	.data : {
		*(.data* .rodata*)
	} >TESTRAM_D

	.literal : {
		PROVIDE(__literal_base = .);
		*(.literal*)
		LONG(0) /* sentinel value to make bin2s happy */
	} >TESTRAM_D

	.bss : {
		PROVIDE(__bss_start = .);
		*(.bss*)
		PROVIDE(__bss_end = .);
	}
}
