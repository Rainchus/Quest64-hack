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

set_gp:
LUI gp, 0x8040
JR RA
ORI gp, gp, 0x0000


executeASM:
//a0 holds instruction
//a1 address to store register value to
ADDIU sp, sp, -0x20
SW ra, 0x0018 (sp)
JAL getPC
NOP
getPC:
SW a0, 0x0010 (ra)
NOP //buffer just in case
NOP //buffer just in case
NOP //buffer just in case
NOP //(custom instruction goes here)
LW ra, 0x0018 (sp)
JR RA
ADDIU sp, sp, 0x20


copyRAM:
JR RA
NOP

osViRepeatLine:
ADDIU          SP, SP, -0x18
SW             S0, 0x0010 (SP)
SW             RA, 0x0014 (SP)
JAL            0x800E2BE0 //__osDisableInt
ADDU           S0, A0, R0
ANDI           S0, S0, 0x00FF
BEQZ           S0, label1
ADDU           A0, V0, R0
LUI            V1, 0x8011
LW             V1, 0x9E94 (V1)
LHU            V0, 0x0000 (V1)
J              label0
ORI            V0, V0, 0x0040
label1:
LUI            V1, 0x8011
LW             V1, 0x9E94(V1)
LHU            V0, 0x0000 (V1)
ANDI           V0, V0, 0xFFBF
label0:
JAL            0x800E2C00 //__osRestoreInt
SH             V0, 0x0000 (V1)
LW             RA, 0x0014 (SP)
LW             S0, 0x0010 (SP)
JR             RA
ADDIU          SP, SP, 0x18

// osSetTime:
// LUI t0, 0x8025
// SW r0, 0xC260 (t0)
// JR RA
// SW r0, 0xC264 (t0)

crash_screen_sleep: //takes arg a0, ms to sleep
ADDIU sp, sp, -0x20
ORI v0, r0, 0xB71B
MULT a0, v0
DADDU a0, r0, r0
DADDU a1, r0, r0
SW ra, 0x0018 (sp)
SW s1, 0x0014 (sp)
SW s0, 0x0010 (sp)
MFHI s0
MFLO s1
//JAL osSetTime
NOP
crashScreenLoop:
//JAL osGetTime
NOP
DADDU a0, v0, r0
DADDU a1, v1, r0
SLTU v0, a0, s0
BNEZ v0, crashScreenLoop
NOP
BNE s0, a0, exitCrashFunc
SLTU v0, a1, s1
BNEZ v0, crashScreenLoop
NOP
exitCrashFunc:
LW ra, 0x0018 (sp)
LW s1, 0x0014 (sp)
LW s0, 0x0010 (sp)
JR RA
ADDIU sp, sp, 0x20

//so emulator wont close the game upon infinite loop
infiniteLoop:
NOP
J infiniteLoop
NOP

__osDpDeviceBusy:
LUI t6, 0xA410
LW a0, 0x000C (t6)
ADDIU sp, sp, -0x08
ANDI t7, a0, 0x0100
BEQZ t7, dpRet
NOP
B dpExit
ADDIU v0, r0, 1
dpRet:
OR v0, r0, r0
dpExit:
JR RA
ADDIU sp, sp, 0x08

asmCrashGame:
LUI t0, 0x8000
ORI t0, t0, 0x0001
LW t1, 0x0000 (t0)
JR RA
NOP

getStatusRegister:
MFC0 v0, $12
NOP
NOP
JR RA
NOP

setStatusRegister:
MTC0 a0, $12
NOP
NOP
JR RA
NOP

bossSpellsDpadRight:
LUI t0, 0x8009
LBU t1, 0x2874 (t0)
BEQZ t1, noDpadRight
ORI t2, r0, 4

LUI t3, 0x8007
ORI t3, t3, 0xB2E7
SB t2, 0x0000 (t3)

LUI t3, 0x8007
ORI t3, t3, 0xBBD1
SB t2, 0x0000 (t3) //write to byte 8007BBD1
SB t2, 0x0004 (t3) //write to byte 8007BBD5

noDpadRight:
JR RA
NOP


newFireCap:
LBU a0, 0x0024 (v0)
LI at, gTotalBossesBeatenCount
LW at, 0x0000 (at)
LI t0, elementCapsTable
SLL at, at, 2 //multiply by sizeof s32
ADDU at, at, t0
LW a1, 0x0000 (at)
J 0x8001F700
SLT at, a0, a1

newWaterCap:
LBU a0, 0x0026 (v0)
LI at, gTotalBossesBeatenCount
LW at, 0x0000 (at)
LI t0, elementCapsTable
SLL at, at, 2 //multiply by sizeof s32
ADDU at, at, t0
LW a1, 0x0000 (at)
J 0x8001F740
SLT at, a0, a1

newWindCap:
LBU a0, 0x0027 (v0)
LI at, gTotalBossesBeatenCount
LW at, 0x0000 (at)
LI t0, elementCapsTable
SLL at, at, 2 //multiply by sizeof s32
ADDU at, at, t0
LW a1, 0x0000 (at)
J 0x8001F780
SLT at, a0, a1

newEarthCap:
LBU a0, 0x0025 (v0)
LI at, gTotalBossesBeatenCount
LW at, 0x0000 (at)
LI t0, elementCapsTable
SLL at, at, 2 //multiply by sizeof s32
ADDU at, at, t0
LW a1, 0x0000 (at)
J 0x8001F7C8
SLT at, a0, a1

newSpiritCap:
LI at, gTotalBossesBeatenCount
LW at, 0x0000 (at)
LI t4, elementCapsTable
SLL at, at, 2 //multiply by sizeof s32
ADDU at, at, t4
LW a0, 0x0000 (at)
J 0x800032DC
ORI t8, v1, 0x0008

elementLevelUpCap:
LBU a0, 0x0034 (v0)
LI at, gTotalBossesBeatenCount
LW at, 0x0000 (at)
LI t4, elementCapsTable
SLL at, at, 2 //multiply by sizeof s32
ADDU at, at, t4
LW at, 0x0000 (at)
J 0x80007948
SLT at, a0, at

elementGrowthLockCap:
LBU t1, 0x0000 (v1)
LI at, gTotalBossesBeatenCount
LW at, 0x0000 (at)
LI t4, elementCapsTable
SLL at, at, 2 //multiply by sizeof s32
ADDU at, at, t4
J 0x80007964
LW a0, 0x0000 (at)