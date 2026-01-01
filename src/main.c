#include "Quest64.h"
#include "PR/gbi.h"

extern u32 calls;
extern s32 color;

//u8 itemIdsToNotRemove[] = {0xE, 0xF, 0x10, 0x11, 0x12, 0x13, 0x1E};

u8 BlackTextPal[] = {0xF8, 0x3E, 0x9C, 0x1B, 0x6A, 0xD5, 0x31, 0x8D, 0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 0x00, 0x01};
u8 RedTextPal[] = {0xF8, 0x3E, 0xBB, 0x5D, 0xAA, 0x57, 0x8A, 0x13, 0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 0x00, 0x01};
u8 GrayTextPal[] = {0xF8, 0x3E, 0x94, 0xA5, 0x7B, 0xDF, 0x63, 0x19, 0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 0x00, 0x01};
u8 GreenTextPal[] = {0xF8, 0x3E, 0x04, 0x81, 0x03, 0xC1, 0x03, 0x01, 0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 0x00, 0x01};
u8 LightBlueTextPal[] = {0xF8, 0x3E, 0x00, 0xFF, 0xFF, 0x00, 0x4F, 0xFF, 0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 0x00, 0x01};

u8* ExtendedColorPalettes[] = {
    BlackTextPal,
    RedTextPal,
    GrayTextPal,
    GreenTextPal,
    LightBlueTextPal,
};

void mainCFunction(void) { //ran every frame
    
}

extern unsigned char dpadImage[];
extern unsigned short dpadPalette[];

#define IMG_PTR u8*
#define PAL_PTR u16*

Gfx* drawCi4ImageScaled(Gfx* gfx, int x, int y, int width, int height, 
                        u8* texture, u16* palette, float scaleX, float scaleY);

Gfx* drawRgba16ImageScaled(Gfx* gfx, int x, int y, int width, int height, 
                           u16* texture, float scaleX, float scaleY);

Gfx* drawRgba16Image(Gfx* gfx, int x, int y, int width, int height, u16* texture);

Gfx* gfx_draw_textured_rectangle_rgba16(Gfx* gfx, int x, int y, int width, int height, u8* texture);

void func_80022B08(s32, s32, s32*);
extern s32 D_8004D544[];

u8 itemWhiteList[] = {0xE, 0xF, 0x10, 0x11, 0x12, 0x13};
u8 priorityItems[] = {0xE, 0xF, 0x10, 0x11, 0x12, 0x13};

extern u16 D_8008C592;

typedef struct unk_213d8_s{
    u16 unk0;
    u16 unk2;
    s16 unk4;
    s16 unk6;
    s16 unk8;
    s16 unkA;
} unk213d8s;

extern unk213d8s D_803A91F0[];

typedef s32 (*testFuncPtr)(void*, void*);

extern testFuncPtr D_8004D480[];
// extern BrianData2 D_8007BACC;
extern s32 D_8007BACC; //fake type, is actually a struct
void func_8000669C(u8);
extern s32 warpCooldown;
extern u8 wingItemList[];

//when using an item, set warpCooldown if it's a wing item
s32 func_800212E4_Hook(u8 itemID) {
    s32 i;
    s32 ret = 0;
    s32 temp_t6 = D_8008C592 & 1;
    
    if ((temp_t6 != 0) && (D_803A91F0[itemID].unk0 & 2)) {
        ret = 1;
    } else if ((temp_t6 == 0) && (D_803A91F0[itemID].unk0 & 1)) {
        ret = 1;
    }
    
    if (ret != 0) {
        ret = D_8004D480[D_803A91F0[itemID].unk2](&D_8007BACC, &D_803A91F0[itemID]);
    }

    if (ret != 0) {
        func_8000669C(itemID);
    }

    //if ret is 0, item isn't going to be used
    if (ret != 0) {
        for (i = 0; i < 6; i++) {
            if (itemID == wingItemList[i]) {
                warpCooldown = 56;
                break;
            }
        }
    }
    
    return ret;
}

//prevents wings from being consumed when used in the item menu
s32 PreventWingsConsumption(u8 itemID) {
    s32 i;

    for (i = 0; i < ARRAY_COUNT(itemWhiteList); i++) {
        if (itemID == itemWhiteList[i]) {
            gGameState &= ~1;
            func_80022B08(6, 4,  D_8004D544); //undim the screen
            return 1;
        }
    }

    return 0;
}

//added functionality to sort wing items to the front of the inventory
void newAddItemToInventory(u8 arg0) {
    s32 i;
    s32 insertPos = -1;
    s32 priorityIndex = -1;
    
    // Check if this item is a priority item
    for (i = 0; i < ARRAY_COUNT(priorityItems); i++) {
        if (priorityItems[i] == arg0) {
            priorityIndex = i;
            break;
        }
    }
    
    if (priorityIndex != -1) {
        // This is a priority item - find the correct position
        insertPos = 0;
        
        // Find where to insert based on priority order
        for (i = 0; i < 150 && gInventory[i] != 0xFF; i++) {
            s32 j;
            s32 currentPriority = -1;
            
            // Check if current slot has a priority item
            for (j = 0; j < ARRAY_COUNT(priorityItems); j++) {
                if (priorityItems[j] == gInventory[i]) {
                    currentPriority = j;
                    break;
                }
            }
            
            // If current item has lower priority (higher index) or isn't priority, insert here
            if (currentPriority == -1 || currentPriority > priorityIndex) {
                insertPos = i;
                break;
            }
            insertPos = i + 1;
        }
        
        // Shift items to make room
        for (i = 149; i > insertPos; i--) {
            gInventory[i] = gInventory[i - 1];
        }
        
        gInventory[insertPos] = arg0;
    } else {
        // Not a priority item - add at the end as before
        for (i = 0; i < 150; i++) {
            if (gInventory[i] == 0xFF) {
                break;
            }
        }
        gInventory[i] = arg0;
    }
}

