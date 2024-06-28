.headersize (PAYLOAD_START_RAM - PAYLOAD_START_ROM)

//
ClearBSS:
LUI t0, 0x8007
LUI t1, 0x0002
ADDIU t0, t0, 0x2E90
ORI t1, t1, 0x39C0
bss_clear_loop:
ADDI t1, t1, 0xFFF8
SD r0, 0x0000 (t0)
BNEZ t1, bss_clear_loop
ADDI t0, t0, 0x0008
JR RA
NOP

mainCFunctionWrapper:
    JAL mainCFunction
    NOP
    J 0x80024CE4
    ADDIU a0, sp, 0x1A0

customVar:
.word 0x00000000

customMemCpy: //requires 0x08 alignment
    BLEZ a2, exitMemCpy
    LD t0, 0x0000 (a1)
    SD t0, 0x0000 (a0)
    ADDIU a1, a1, 8
    ADDIU a0, a0, 8
    BEQ r0, r0, customMemCpy
    ADDIU a2, a2, -8
    exitMemCpy:
    JR RA
    NOP


textDrawingTest:
    J DrawTextHook
    NOP
