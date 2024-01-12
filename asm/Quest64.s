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