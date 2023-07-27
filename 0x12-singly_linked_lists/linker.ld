ENTRY(_start)
SECTIONS {
    . = 0x100000; /* Set a suitable starting address */
    .text : { *(.text) }
    .data : { *(.data) }
    .bss  : { *(.bss)  }
}


