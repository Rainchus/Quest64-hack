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

typedef struct unkStruct {
/* 0x00 */ Vec4f pos;
/* 0x10 */ u16 unk_10;
/* 0x12 */ s16 unk_12;
/* 0x14 */ u8 unk_14;
} unkStruct;

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

void func_8000EE60(f32, f32, f32, s32, Vec3f*);
s16 func_80012700(u8);
extern SpiritTable D_8004C510[0x2B];
extern s32 gCurrentMap;
extern s32 D_80086A00;
extern unkStruct D_80086A08[];
extern Vec3f D_80086AC8;
extern s32 gNextSubmap;
extern u8 bossFlags;
extern unk20e2cs gTex_HUD_and_Menu;
void func_80020D4C(u16 arg0, s32 arg1, s32 arg2, s32 arg3);
void func_800210FC(unk20e2cs* arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6, s32 arg7, s32 arg8);
void func_80020E2C(unk20e2cs* arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4);
void func_80020B4C(temp4* arg0, s32 arg1, s32 arg2, u8* arg3);
void func_80020F8C(s32 ulx, s32 uly, s32 lrx, s32 lry, s32 s, s32 t, s32 dsdx, s32 dtdy);
s32 int_to_str_with_flags(s32 arg0, u8* arg1, u16 arg2);

#endif