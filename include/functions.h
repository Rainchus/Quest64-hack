#ifndef _FUNCTIONS_H_
#define _FUNCTIONS_H_

#include "types.h"

void dma_write(void* romAddr, void* ramAddr, int size);

extern s8 gCurrentBGM;
extern u16 gPlayBGM;
extern u16 gBGMDelay;
extern s32 gCurrentMap;
extern s32 gNextSubmap;
extern u8 bossFlags;
extern u16 buttonsHeld;

#endif