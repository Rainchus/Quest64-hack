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

void func_8000EE60(f32, f32, f32, s32, Vec3f*);
s16 func_80012700(u8);
extern SpiritTable D_8004C510[0x2B];
extern s32 gCurrentMap;
extern s32 D_80086A00;
extern unkStruct D_80086A08[];
extern Vec3f D_80086AC8;
extern s32 gNextSubmap;

#endif