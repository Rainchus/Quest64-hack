#ifndef _FUNCTIONS_H_
#define _FUNCTIONS_H_

#include "types.h"

typedef struct SpiritData {
    f32 xPos;
    f32 zPos;
    u8 id;
} SpiritData;

typedef struct SpiritTable {
/* 0x00 */ u16 map;
/* 0x02 */ u16 subMap;
/* 0x04 */ u16 spiritCount;
/* 0x08 */ SpiritData* spiritData;
} SpiritTable;

typedef struct unkStructOriginal {
/* 0x00 */ Vec3f pos;
/* 0x0C */ f32 unk_0C;
/* 0x10 */ u16 unk_10;
/* 0x12 */ s16 unk_12;
/* 0x14 */ u8 spiritID;
} unkStructOriginal;

typedef struct ElementLevels {
    u8 fire;
    u8 earth;
    u8 water;
    u8 wind;
} ElementLevels;

typedef struct PlayerStats {
    char unk_00[0x10];
    s32 unk_10;
    char unk_14[0x10];
    ElementLevels elements;
    u16 unk28;
    u16 unk2A;
    u16 unk2C;
    u16 unk2E;
    u8 unk30;
    u8 unk31;
    u8 unk32;
    u8 unk33;
    u8 levels;
} PlayerStats;

typedef struct PlayerData {
    u16 movementState;
    char unk_02[6];
    u16 unk8;
    char unk_0A[6];
    PlayerStats* playerStats;
} PlayerData;

extern s8 gCurrentBGM;
extern u16 gPlayBGM;
extern u16 gBGMDelay;
extern s16 curActorTurn;
extern SpiritTable D_8004C510[0x2B];
extern s32 gCurrentMap;
extern s32 gNextSubmap;
extern u8 bossFlags;
extern u16 gBattleState;
extern u16 gAllowBattles;
extern u32 expRequiredPerElementLevel[];
extern s32 gGameState;
extern s32 itemReceived;

void AddItemToInventory(u8);
void dma_write(void* romAddr, void* ramAddr, int size);
extern int _sprintf(char *s, const char *fmt, ...);
void drawBoxBehindEnemyName(void*, s32, s32, s32, s32, s32, s32, s32, s32);

#endif
