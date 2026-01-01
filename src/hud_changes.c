#include "Quest64.h"
#include "PR/gbi.h"

typedef struct Vec2Int {
    s32 x;
    s32 y;
} Vec2Int;

Vec2Int iconPositionsTriangle[] = {
    {16, -16},
    {0, 0},
    {16, 16},
    {32, 0},
};

enum {
    ITEM_WHITE_WINGS = 0xE,
    ITEM_YELLOW_WINGS = 0xF,
    ITEM_BLUE_WINGS = 0x10,
    ITEM_GREEN_WINGS = 0x11,
    ITEM_RED_WINGS = 0x12,
    ITEM_BLACK_WINGS = 0x13
};

s32 yOffset = 16;
s32 xOffset = 15;

s32 rootXPos = 260;
s32 rootYPos = 190;

s32 ifDrawCustom = 0;
s32 warpCooldown = 0;

Gfx* drawRgba16ImageScaled(Gfx* gfx, int x, int y, int width, int height, 
                           u16* texture, float scaleX, float scaleY);

extern s32 HUD_XOffset;
extern unsigned char dpadImage[];
extern unsigned char dpadPalette[];
extern unsigned short whiteWingsRgba16[];
extern unsigned short yellowWingsRgba16[];
extern unsigned short blueWingsRgba16[];
extern unsigned short greenWingsRgba16[];
extern unsigned short redWingsRgba16[];
extern unsigned short blackWingsRgba16[];
extern unsigned short dpadRgba16[];

s32 func_800212E4_Hook(u8 itemID);

void DoWarpToLocation(u8 itemID) {
    func_800212E4_Hook(itemID);
    warpCooldown = 56;
}

void func_8001EBDC_Hook(unk1ebdcs* arg0) {
    s32 i;
    void* HUDTex;

    ifDrawCustom = 1;

    HUDTex = &gTex_HUD_and_Menu;
    func_800210FC(HUDTex, iconPositionsTriangle[0].x - 6 , iconPositionsTriangle[0].y - 6, 0xC, 0xC, 0x20, 0x10, 0x400, 0x400);
    func_800210FC(HUDTex, iconPositionsTriangle[1].x - 6 , iconPositionsTriangle[1].y - 6, 0xC, 0xC, 0x2C, 0x10, 0x400, 0x400);
    func_800210FC(HUDTex, iconPositionsTriangle[2].x - 6 , iconPositionsTriangle[2].y - 6, 0xC, 0xC, 0x38, 0x10, 0x400, 0x400);
    func_800210FC(HUDTex, iconPositionsTriangle[3].x - 6 , iconPositionsTriangle[3].y - 6, 0xC, 0xC, 0x44, 0x10, 0x400, 0x400);

    func_80020E2C(HUDTex, 0x20, 0x1D, 0x80, 0xA); //something for setting up font
    //graphics_func(0x20, 0x1D, 0x80, 0xA);

    
    for (i = 0; i < 4; i++) {
        func_80020D4C(1, iconPositionsTriangle[i].x, iconPositionsTriangle[i].y, arg0->unk24[i]);
    }
}

u8 wingItemList[] = {
    ITEM_WHITE_WINGS, ITEM_YELLOW_WINGS,
    ITEM_BLUE_WINGS, ITEM_GREEN_WINGS,
    ITEM_RED_WINGS, ITEM_BLACK_WINGS
};

//pass an empty array to store wing amounts to
u8* FindOwnedWings(u8* wingsArray){ 
    s32 i, j;

    for (i = 0; i < 150; i++) {
        u8 itemID = gInventory[i];
        for (j = 0; j < ARRAY_COUNT(wingItemList); j++) {
            if (itemID == wingItemList[j]) {
                s32 offset = itemID - ITEM_WHITE_WINGS;
                wingsArray[offset]++;
                break;
            }
        }
    }
    return wingsArray;
}

void DrawImages(void) {
    s32 i;
    s32 width = 32;
    s32 height = 32;
    f32 scaleX = 0.5f;
    f32 scaleY = 0.5f;

    s32 wingWidth = 16;
    s32 wingHeight = 16;
    f32 wingScaleX = 1.0f;
    f32 wingScaleY = 1.0f;

    u8 items[6];
    u8* itemPtr = items;
    s32 totalItems = 0;

    for (i = 0; i < ARRAY_COUNT(items); i++) {
        items[i] = 0;
    }

    s32 hudOffsetPlusRootX = HUD_XOffset + rootXPos;

    if (ifDrawCustom != 1) {
        ifDrawCustom = 0;
        return;
    }

    itemPtr = FindOwnedWings(itemPtr);

    for (i = 0; i < ARRAY_COUNT(items); i++) {
        totalItems += items[i];
    }


    if (totalItems == 0) {
        ifDrawCustom = 0;
        return;
    }

    gMainGfxPos = drawRgba16ImageScaled(gMainGfxPos, hudOffsetPlusRootX, rootYPos, width, height, dpadRgba16, scaleX, scaleY);

    if (buttonsHeld & 0x20) { //if holding L draw the last 2 wings of the total 6
        if (items[4] > 0) {
            /* 0x12 */ gMainGfxPos = drawRgba16ImageScaled(gMainGfxPos, hudOffsetPlusRootX, rootYPos - yOffset, wingWidth, wingHeight, redWingsRgba16, wingScaleX, wingScaleY);
        }
        if (items[5] > 0) {
            /* 0x13 */ gMainGfxPos = drawRgba16ImageScaled(gMainGfxPos, hudOffsetPlusRootX + xOffset + 1, rootYPos, wingWidth, wingHeight, blackWingsRgba16, wingScaleX, wingScaleY);
        }
    
    } else {
        if (items[0] > 0) {
            /* 0xE */ gMainGfxPos = drawRgba16ImageScaled(gMainGfxPos, hudOffsetPlusRootX, rootYPos - yOffset, wingWidth, wingHeight, whiteWingsRgba16, wingScaleX, wingScaleY);
        }
        if (items[1] > 0) {
            /* 0xF */ gMainGfxPos = drawRgba16ImageScaled(gMainGfxPos, hudOffsetPlusRootX + xOffset + 1, rootYPos, wingWidth, wingHeight, yellowWingsRgba16, wingScaleX, wingScaleY);
        }
        if (items[2] > 0) {
            /* 0x10 */ gMainGfxPos = drawRgba16ImageScaled(gMainGfxPos, hudOffsetPlusRootX, rootYPos + yOffset, wingWidth, wingHeight, blueWingsRgba16, wingScaleX, wingScaleY);
        }
        if (items[3] > 0) {
            /* 0x11 */ gMainGfxPos = drawRgba16ImageScaled(gMainGfxPos, hudOffsetPlusRootX - xOffset, rootYPos, wingWidth, wingHeight, greenWingsRgba16, wingScaleX, wingScaleY);
        }
    }

    warpCooldown--;
    if (warpCooldown < 0) {
        warpCooldown = 0;
    }

    if (warpCooldown != 0) {
        return;
    }

    //check if button was pressed and item is owned, to then use said item (doesn't remove from inventory)

    if (buttonsHeld & 0x20) { //if holding L draw the last 2 wings of the total 6
        if (buttonsPressed & 0x0800) { //dpad up
            if (items[4] > 0 && func_800212E4_Hook(ITEM_RED_WINGS) != 0) {
                DoWarpToLocation(ITEM_RED_WINGS);
            }
        } else if (buttonsPressed & 0x0100) { //dpad right
            if (items[5] > 0 && func_800212E4_Hook(ITEM_BLACK_WINGS) != 0) {
                DoWarpToLocation(ITEM_BLACK_WINGS);
            }
        }
    } else {
        if (buttonsPressed & 0x0800) { //dpad up
            if (items[0] > 0 && func_800212E4_Hook(ITEM_WHITE_WINGS) != 0) {
                DoWarpToLocation(ITEM_WHITE_WINGS);
            }
        } else if (buttonsPressed & 0x0100) { //dpad right
            if (items[1] > 0 && func_800212E4_Hook(ITEM_YELLOW_WINGS) != 0) {
                DoWarpToLocation(ITEM_YELLOW_WINGS);
            }
        } else if (buttonsPressed & 0x0400) { //dpad down
            if (items[2] > 0 && func_800212E4_Hook(ITEM_BLUE_WINGS) != 0) {
                DoWarpToLocation(ITEM_BLUE_WINGS);
            }
        } else if (buttonsPressed & 0x0200) { //dpad left
            if (items[3] > 0 && func_800212E4_Hook(ITEM_GREEN_WINGS) != 0) {
                DoWarpToLocation(ITEM_GREEN_WINGS);
            }
        }
    }

    ifDrawCustom = 0;
}