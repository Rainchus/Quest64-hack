//Automatically generated by makefile, do not edit
.n64 // Let armips know we're coding for the N64 architecture
.open "rom/Quest64.z64", "rom/Quest64.mod.z64", 0 // Open the ROM file
.include "asm/!image_bin.s"
.include "asm/Quest64.s"
.headersize 0x7F400000
.org 0x80400000
.include "asm/boot.asm"
.include "asm/symbols.asm"
.importobj "obj/bgm.o"
.importobj "obj/main.o"
.importobj "obj/spirits.o"
.close //close file
