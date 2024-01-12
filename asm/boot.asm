.headersize (PAYLOAD_START_RAM - PAYLOAD_START_ROM)
originalCode:
    JAL cBootMain
    NOP
    LUI t6, 0x8009
    LW t6, 0xF610 (t6)
    LUI at, 0x3F80
    MTC1 at, f8
    MTC1 t6, f4
    LUI at, 0x4270
    MTC1 at, f16
    CVT.S.W f6, f4
    SW r0, 0x0128 (sp)
    J 0x80024C40
    NOP

mainCFunctionWrapper:
    JAL mainCFunction
    NOP
    J 0x80024CE4
    ADDIU a0, sp, 0x1A0

textDrawingTest:
    J DrawingTestC
    NOP
