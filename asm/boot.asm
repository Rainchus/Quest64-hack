mainCFunctionWrapper:
    JAL mainCFunction
    NOP
    J 0x80024CE4
    ADDIU a0, sp, 0x1A0

textDrawingTest:
    J DrawingTestC
    NOP
