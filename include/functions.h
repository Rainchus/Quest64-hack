#ifndef _FUNCTIONS_H_
#define _FUNCTIONS_H_

#include "types.h"

void dma_write(void* romAddr, void* ramAddr, int size);

extern s8 gCurrentBGM;
extern u16 gPlayBGM;
extern u16 gBGMDelay;

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

typedef struct BGMData {
    s16 map;
    s16 subMap;
    s8 BGM_ID;
} BGMData;

typedef struct unk1ebdcs {
    char unk0[0x24];
    u8 unk24[1]; // some size
} unk1ebdcs;

typedef struct unk20e2cs {
    void* unk0;
    s32 unk4;
    s32 unk8;
    s32 unkC;
} unk20e2cs;

typedef struct temp4 {
/* 0x00 */ u8 unk_00;
/* 0x01 */ char unk_01[5];
} temp4;

typedef struct unkStruct4 {
    char unk00[4];
    u16 unk4;
    u16 unk6;
    u16 unk8;
    u16 unkA;
    u16 unkC;
    u16 unkE;
    s32 expGained;
} unkStruct4;

typedef struct unkStruct3 {
    char unk00[0x64];
    unkStruct4* unk64;
} unkStruct3;

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

void func_800268D4(s32 arg0, s8 arg1, s32 arg2);

void func_8000EE60(f32, f32, f32, s32, Vec3f*);
s16 func_80012700(u8);
extern SpiritTable D_8004C510[0x2B];
extern s32 gCurrentMap;
extern s32 D_80086A00;
extern unkStructOriginal D_80086A08[];
extern Vec3f D_80086AC8;
extern s32 gNextSubmap;
extern u8 bossFlags;
extern unk20e2cs gTex_HUD_and_Menu;
extern u16 gBattleState;
extern u16 gAllowBattles;
extern f32 D_8007BC10;
extern f32 D_8007BC14;
extern f32 D_8007BC18;
extern f32 D_8007BC1C;
extern f32 D_8007BA5C;
extern u32 expRequiredPerElementLevel[];
extern u16 D_80053ECC[];
extern s32 gGameState;
extern s32 itemReceived;
extern s8 D_8005F0C0[];
extern s32 D_8008FD10;
extern s32 D_80053D3C[];
extern u16 D_8008FD0C;
extern s8 D_80092871;
extern u16 D_80092876;
extern s32 D_8008FD04;
extern s32 D_8008FD08;
void func_8002A0B8(s32, s32);
void func_8002AB64(s32, s32, s32, s32, s32);
void func_80029B58(s32, s32, s32, s32, s32);
void AddItemToInventory(u8);
void func_800120C0(s32);
void func_8002E768(s32);
void func_80020D4C(u16 arg0, s32 arg1, s32 arg2, s32 arg3);
void func_800210FC(unk20e2cs* arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6, s32 arg7, s32 arg8);
void func_80020E2C(unk20e2cs* arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4);
void func_80020B4C(temp4* arg0, s32 arg1, s32 arg2, u8* arg3);
void func_80020F8C(s32 ulx, s32 uly, s32 lrx, s32 lry, s32 s, s32 t, s32 dsdx, s32 dtdy);
s32 int_to_str_with_flags(s32 arg0, u8* arg1, u16 arg2);
extern PlayerStats gPlayerData;

#endif
