#include "../include/Quest64.h"

u32 calls = 0;
s32 color = 0; //turns green when rng is frozen
s32 initialCheck = 0;

extern f32 gPlayerXpos; //8007BACC
extern f32 gPlayerYpos; //8007BAD0
extern f32 gPlayerZpos; //8007BAD4
extern f32 gStepCounter;
extern s16 gStepUnk;
extern u32 rng_seed;
extern s32 currPageNo;
extern s32 currOptionNo;
extern s32 isMenuActive;
extern s32 gCurrentMap;

extern int _sprintf(char *s, const char *fmt, ...);
void drawBoxBehindEnemyName(void*, s32, s32, s32, s32, s32, s32, s32, s32);
void pageMainDisplay(s32, s32);
void updateMenuInput(void);
void DrawBoxBackgroundForText(void);

u32 getRandomNumberHook(u32 arg0) {
    if (arg0 != 0) {
        calls++;
        return ((u32) ((rng_seed = (rng_seed * 0x41C64E6D) + 0x3039) >> 0x10)) % arg0;
    }
    return 0;
}

void func_800210FC(unk20e2cs* arg0, s32 ulx, s32 uly, s32 lrx, s32 lry, s32 s, s32 t, s32 dsdx, s32 dtdy);
s32 storedRandValue = 0;
s32 storedRandDisplayTimer = 0;
s32 displayBool = 1;

void CheckIfChangeDisplayBool(void) {
    if ((buttonsHeld & CONT_L) && (buttonsPressed & CONT_UP)) {
        displayBool ^= 1;
    }
}

void DrawMenuText(void) {
    // char buffer[64];
    // s32 xPos = menuRootXPos;
    // s32 yPos = menuRootYPos;

    // _sprintf(buffer, "%08X", rng_seed);
    // func_80020B4C(xPos, yPos, color, buffer);

    // yPos += 10;

    // _sprintf(buffer, "%d", calls);
    // func_80020B4C(xPos, yPos, color, buffer);

    // yPos += 10;

    // _sprintf(buffer, "X:%.4f", gPlayerXpos);
    // func_80020B4C(xPos, yPos, 0, buffer);

    // yPos += 10;

    // _sprintf(buffer, "Y:%.4f", gPlayerYpos);
    // func_80020B4C(xPos, yPos, 0, buffer);

    // yPos += 10;

    // _sprintf(buffer, "Z:%.4f", gPlayerZpos);
    // func_80020B4C(xPos, yPos, 0, buffer);

    // yPos += 10;

    // _sprintf(buffer, "S:%.4f", gStepCounter);
    // func_80020B4C(xPos, yPos, 0, buffer);

    // yPos += 10;

    // _sprintf(buffer, "STEPS:%d", gStepUnk);
    // func_80020B4C(xPos, yPos, 0, buffer);

    // if (storedRandDisplayTimer != 0) {
    //     storedRandDisplayTimer--;

    //     yPos += 10;

    //     _sprintf(buffer, "R STEPS:%d", storedRandValue);
    //     func_80020B4C(xPos, yPos, 0, buffer);
    // }
}

void DrawTextHook(void) {
    CheckIfChangeDisplayBool();

    if (displayBool == 0) {
        return;
    }
    
    //DrawMenuText();
    updateMenuInput();
    if (isMenuActive == 1) {
        DrawBoxBackgroundForText();
        pageMainDisplay(currPageNo, currOptionNo);
    }
}