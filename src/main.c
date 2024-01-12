#include "../include/Quest64.h"

typedef struct BoxStruct {
    void* unk_00;
    s32 xPos;
    s32 yPos;
    s32 width;
    s32 height;
    s32 unk_14;
    s32 unk_18;
    s32 unk_1C;
    s32 unk_20;
} BoxStruct;

BoxStruct Box1 = {(void*)0x803A6F60, 0, 0x94, 0x48, 0xA, 0x64, 0x2C, 0x400, 0x400};
BoxStruct Box2 = {(void*)0x803A6F60, 0, 0x9F, 0x48, 0xA, 0x64, 0x2C, 0x400, 0x400};

extern u32 rng_seed;
u32 calls = 0;

void DrawingTestC(void) {
    char buffer[20];
    
    drawBoxBehindEnemyName(Box1.unk_00, Box1.xPos, Box1.yPos,
        Box1.width, Box1.height, Box1.unk_14, Box1.unk_18, Box1.unk_1C, Box1.unk_20);
    _sprintf(buffer, "%08X", rng_seed);
    func_80020B4C(20, 150, 0, buffer);

    drawBoxBehindEnemyName(Box2.unk_00, Box2.xPos, Box2.yPos,
        Box2.width, Box2.height, Box2.unk_14, Box2.unk_18, Box2.unk_1C, Box2.unk_20);
    _sprintf(buffer, "%d", calls);
    func_80020B4C(20, 160, 0, buffer);
}

u32 getRandomNumberHook(u32 arg0) {
    if (arg0 != 0) {
        calls++;
        return ((u32) ((rng_seed = (rng_seed * 0x41C64E6D) + 0x3039) >> 0x10)) % arg0;
    }
    return 0;
}

int cBootMain(void) { //ran once on boot
    return 1;
}

void mainCFunction(void) { //ran every frame
}