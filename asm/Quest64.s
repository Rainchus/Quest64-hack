//Payload related information
.definelabel PAYLOAD_START_ROM, 0x1000000
.definelabel PAYLOAD_START_RAM, 0x80400000
.definelabel PAYLOAD_SIZE, 0x3F0000

PAYLOAD_START:
.headersize 0x7FFFF400 //ran once on boot
.org 0x80024C1C
LUI a0, hi(PAYLOAD_START_ROM)
ADDIU a0, a0, lo(PAYLOAD_START_ROM)
LUI a1, hi(PAYLOAD_START_RAM)
ADDIU a1, a1, lo(PAYLOAD_START_RAM)
LUI a2, hi(PAYLOAD_SIZE)
JAL dma_write
ADDIU a2, a2, lo(PAYLOAD_SIZE)
J originalCode
NOP

.org 0x80012244
LI v0, NewSpiritTable
LI a0, 0x80084EE8

.org 0x8002684C
J func_8002684C_Hook
NOP

.org 0x80012220
J func_80012220_Hook
NOP

.org 0x80024FC0
J mainCFunctionWrapper
ADDIU a0, sp, 0x1A0 //restore from hook

.org 0x80024FF8
J mainCFunctionWrapper
SH t6, 0x005C (sp) //restore from hook

.headersize 0x7F374C40
.org 0x800C0680
//.word 0x00000000 //(dont actually patch this, just an example)