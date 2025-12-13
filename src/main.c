#include "../include/Quest64.h"

// typedef struct BoxStruct {
//     void* unk_00;
//     s32 xPos;
//     s32 yPos;
//     s32 width;
//     s32 height;
//     s32 unk_14;
//     s32 unk_18;
//     s32 unk_1C;
//     s32 unk_20;
// } BoxStruct;

// BoxStruct Box1 = {(void*)0x803A6F60, 0, 0x94, 0x48, 0xA, 0x64, 0x2C, 0x400, 0x400};
// BoxStruct Box2 = {(void*)0x803A6F60, 0, 0x9F, 0x48, 0xA, 0x64, 0x2C, 0x400, 0x400};

// u32 calls = 0;
// extern u32 rng_seed;

// void func_80020B4C(s32, s32, s32, char*);

void DrawingTestC(void) {
    // char buffer[20];
    
    // drawBoxBehindEnemyName(Box1.unk_00, Box1.xPos, Box1.yPos,
    //     Box1.width, Box1.height, Box1.unk_14, Box1.unk_18, Box1.unk_1C, Box1.unk_20);
    // _sprintf(buffer, "%08X", rng_seed);
    // func_80020B4C(20, 150, 0, buffer);

    // drawBoxBehindEnemyName(Box2.unk_00, Box2.xPos, Box2.yPos,
    //     Box2.width, Box2.height, Box2.unk_14, Box2.unk_18, Box2.unk_1C, Box2.unk_20);
    // _sprintf(buffer, "%d", calls);
    // func_80020B4C(20, 160, 0, buffer);
}

void RemoveInventoryItem(u8 itemID) {
    s32 i;
    s32 foundIndex = -1;
    
    // Find the item to remove
    for (i = 0; i < sizeof(gInventory); i++) {
        if (gInventory[i] == itemID) {
            foundIndex = i;
            break;
        }
        if (gInventory[i] == 0xFF) {
            // Item not found before hitting empty slots
            return;
        }
    }
    
    if (foundIndex == -1) {
        return; // Item not found
    }
    
    // Shift all items after the removed item forward
    for (i = foundIndex; i < sizeof(gInventory)-1; i++) {
        if (gInventory[i + 1] == 0xFF) {
            // We've reached the end of the inventory
            gInventory[i] = 0xFF;
            break;
        }
        gInventory[i] = gInventory[i + 1];
    }
    
    // Handle edge case where we shifted all the way to the end
    if (i == sizeof(gInventory)-1) {
        gInventory[sizeof(gInventory)-1] = 0xFF;
    }
}

void mainCFunction(void) { //ran every frame
    // if (gInventory[0] == 2) {
    //     RemoveInventoryItem(2);
    // }
}