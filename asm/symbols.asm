.definelabel dma_write, 0x80024260 //a0 rom, a1 ram, a2 size
.definelabel gCurrentBGM, 0x8008FCC1
.definelabel gPlayBGM, 0x8008FCC2
.definelabel gBGMDelay, 0x8008FCC4
.definelabel gCurrentMap, 0x80084EE4
.definelabel gNextSubmap, 0x80084EE8
.definelabel bossFlags, 0x8007D19C
.definelabel buttonsHeld, 0x80092874
.definelabel gBattleState, 0x8008C592
.definelabel gAllowBattles, 0x80084F10
.definelabel gGameState, 0x8007B2E4
.definelabel itemReceived, 0x8007BA70
.definelabel gPlayerData, 0x8007BA80
.definelabel curActorTurn, 0x8008C592
.definelabel rng_seed, 0x8004D748

//functions
.definelabel func_80020B4C, 0x80020B4C
.definelabel _sprintf, 0x80036384
.definelabel AddItemToInventory, 0x800212A0
.definelabel drawBoxBehindEnemyName, 0x800210FC
