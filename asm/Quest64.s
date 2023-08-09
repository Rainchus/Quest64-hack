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

//ROM 0x3ED4
.org 0x800032D4 //cant pick up spirit if all stats are 99
ADDIU a0, r0, 0x0063

//ROM 0x42B0
.org 0x800036B0 //item drop lock
B 0x800036C0

//ROM 0x4CCC
.org 0x800040CC //change death jingle sound
ADDIU a0, r0, 0x001D

//ROM 0x6018 
.org 0x80005418 //movement speed patch 2.0 -> 2.75
LUI at, 0x4030

//ROM 0x8220
.org 0x80007620 //Gain HP Exp until 999
SLTI at, t7, 0x03E7

//ROM 0x8264
.org 0x80007664 //??
ADDIU t5, r0, 0x03E7

//ROM 0x8274
.org 0x80007674 //Gain HP Levels until 999
SLTI at, t4, 0x03E7


.org 0x80024FC0
J mainCFunctionWrapper
ADDIU a0, sp, 0x1A0 //restore from hook

.org 0x80024FF8
J mainCFunctionWrapper
SH t6, 0x005C (sp) //restore from hook

.headersize 0x7F374C40
.org 0x800C0680
//.word 0x00000000 //(dont actually patch this, just an example)