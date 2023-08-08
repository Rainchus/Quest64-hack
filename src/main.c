#include "../include/Quest64.h"

extern void bossSpellsDpadRight(void);

#define ARRAY_COUNT(arr) (sizeof(arr) / sizeof(arr[0]))

BGMData bgmTable[] = {
    {0, 2, 33},
    {0, 3, 33},
    {0, 4, 33},
    {11, 4, 255},
    {11, 3, 255},
    {11, 5, 255},
    {11, 7, 255},
    {11, 6, 255},
    {0, 65535, 2},
    {1, 65535, 25},
    {2, 65535, 21},
    {3, 65535, 21},
    {4, 65535, 34},
    {5, 65535, 21},
    {6, 65535, 37},
    {7, 65535, 21},
    {8, 65535, 36},
    {9, 65535, 22},
    {10, 65535, 5},
    {11, 65535, 39},
    {12, 65535, 26},
    {14, 13, 33},
    {15, 13, 33},
    {22, 24, 33},
    {22, 25, 33},
    {23, 0, 7},
    {23, 1, 7},
    {23, 2, 7},
    {23, 3, 7},
    {23, 4, 7},
    {23, 5, 7},
    {23, 19, 7},
    {23, 20, 7},
    {23, 21, 7},
    {25, 6, 33},
    {25, 7, 33},
    {13, 65535, 15},
    {14, 65535, 3},
    {15, 65535, 7},
    {16, 65535, 7},
    {17, 65535, 7},
    {18, 65535, 7},
    {19, 65535, 7},
    {20, 65535, 7},
    {21, 65535, 8},
    {22, 65535, 7},
    {23, 65535, 39},
    {24, 65535, 5},
    {25, 65535, 6},
    {26, 2, 9},
    {26, 3, 11},
    {26, 4, 11},
    {30, 6, 255},
    {31, 1, 35},
    {31, 2, 24},
    {32, 1, 12},
    {32, 2, 12},
    {33, 1, 12},
    {33, 2, 12},
    {34, 1, 38},
    {26, 65535, 23},
    {27, 65535, 10},
    {28, 65535, 1},
    {29, 65535, 18},
    {30, 65535, 31},
    {31, 65535, 12},
    {32, 65535, 24},
    {33, 65535, 24},
    {34, 65535, 33},
    {35, 65535, 14},
};

SpiritTable newSpiritTable[] = {
    {0x0000, 0x0000, 0x0001, 0x0000, (void*)0x80154860},
    {0x0000, 0x0001, 0x0001, 0x0000, (void*)0x80154870},
    {0x0001, 0x0000, 0x0001, 0x0000, (void*)0x80141CB0},
    {0x0002, 0x0000, 0x0002, 0x0000, (void*)0x80146140},
    {0x0003, 0x0000, 0x0003, 0x0000, (void*)0x8013E480},
    {0x0004, 0x0002, 0x0003, 0x0000, (void*)0x8014C1F0},
    {0x0005, 0x0000, 0x0003, 0x0000, (void*)0x8015AD50},
    {0x0006, 0x0000, 0x0003, 0x0000, (void*)0x801348C0},
    {0x0007, 0x0000, 0x0004, 0x0000, (void*)0x801419F0},
    {0x0008, 0x0000, 0x0004, 0x0000, (void*)0x8015DB70},
    {0x0008, 0x0001, 0x0001, 0x0000, (void*)0x8015DBA0},
    {0x0009, 0x0000, 0x0006, 0x0000, (void*)0x8015F1F0},
    {0x000A, 0x0000, 0x0002, 0x0000, (void*)0x80135DD0},
    {0x000A, 0x0001, 0x0002, 0x0000, (void*)0x80135DF0},
    {0x000B, 0x0001, 0x0001, 0x0000, (void*)0x8016DA10},
    {0x000B, 0x0002, 0x0004, 0x0000, (void*)0x8016DA20},
    {0x000C, 0x0000, 0x0004, 0x0000, (void*)0x80127990},
    {0x001A, 0x0000, 0x0006, 0x0000, (void*)0x8016DAE0},
    {0x001A, 0x0002, 0x0001, 0x0000, (void*)0x8016DB30},
    {0x001B, 0x0000, 0x0002, 0x0000, (void*)0x8016EFF0},
    {0x001C, 0x0000, 0x0005, 0x0000, (void*)0x8016A130},
    {0x001D, 0x0000, 0x0002, 0x0000, (void*)0x80133AF0},
    {0x001E, 0x0008, 0x0001, 0x0000, (void*)0x80152C10},
    {0x001E, 0x000F, 0x0001, 0x0000, (void*)0x80152C20},
    {0x001F, 0x0000, 0x0004, 0x0000, (void*)0x8014C410},
    {0x001F, 0x0002, 0x0001, 0x0000, (void*)0x8014C440},
    {0x0020, 0x0000, 0x0006, 0x0000, (void*)0x8013D9C0},
    {0x0021, 0x0000, 0x0003, 0x0000, (void*)0x80143680},
    {0x0021, 0x0001, 0x0001, 0x0000, (void*)0x801436B0},
    {0x000E, 0x000F, 0x0001, 0x0000, (void*)0x801A3BD0},
    {0x000E, 0x000C, 0x0001, 0x0000, (void*)0x801A3BE0},
    {0x0010, 0x0015, 0x0001, 0x0000, (void*)0x80183190},
    {0x0015, 0x0000, 0x0002, 0x0000, (void*)0x801A6C80},
    {0x0015, 0x0006, 0x0001, 0x0000, (void*)0x801A6CA0},
    {0x0016, 0x0001, 0x0001, 0x0000, (void*)0x801832D0},
    {0x0016, 0x0017, 0x0002, 0x0000, (void*)0x801832E0},
    {0x0017, 0x0013, 0x0001, 0x0000, (void*)0x8018CC80},
    {0x0017, 0x0017, 0x0001, 0x0000, (void*)0x8018CC90},
    {0x0018, 0x0000, 0x0004, 0x0000, (void*)0x80166620},
    {0x0018, 0x0002, 0x0002, 0x0000, (void*)0x80166650},
    {0x0019, 0x0001, 0x0001, 0x0000, (void*)0x801717F0},
    {0x0019, 0x0004, 0x0001, 0x0000, (void*)0x80171800},
    {0x0019, 0x0009, 0x0001, 0x0000, (void*)0x80171810},
};

void func_8002684C_Hook(s32 nextMap, s32 nextSubmap, u16 delay) {
    s32 mapNum;
    BGMData* bgmData;

    bgmData = bgmTable;
    //bgmData = &D_80053B00;

    for (mapNum = ARRAY_COUNT(bgmTable); mapNum != 0; mapNum--) {
        if ((nextMap == bgmData->map) && ((nextSubmap == bgmData->subMap) || (bgmData->subMap == -1))) {
            break;
        }
        bgmData++;
    }
    if (mapNum != 0) {
        if (gCurrentBGM != bgmData->BGM_ID) {
            gCurrentBGM = bgmData->BGM_ID;
            gPlayBGM |= 1;
            gBGMDelay = delay;
        }
    }
}

void func_80012220_Hook(void) {
    s32 var_s2_2;
    unkStruct* var_s0;
    unkStruct2* var_s1;
    s32 i;

    for (i = 0; i < ARRAY_COUNT(newSpiritTable); i++) {
        if ((D_80084EE4 != D_8004C510[i].map) || (gNextSubmap != D_8004C510[i].subMap)) {
            continue;
        } else {
            break;
        }
    }
    
    if (i < ARRAY_COUNT(newSpiritTable)) {
        var_s2_2 = D_8004C510[i].spiritCount;
        var_s1 = D_8004C510[i].spiritData;
        var_s0 = D_80086A08;
        D_80086A00 = var_s2_2;
        for (; var_s2_2 != 0; var_s2_2--) {
            var_s0->unk_12 = -1;
            var_s0->unk_10 = func_80012700(var_s1->unk_08);
            var_s0->pos.x = var_s1->unk_00;
            var_s0->pos.z = -var_s1->unk_04;
            func_8000EE60(var_s0->pos.x, 0.0f, var_s0->pos.z, 0xA00, &D_80086AC8);
            var_s0->pos.y = D_80086AC8.y;
            var_s0->pos.w = 0.0f;
            var_s0->unk_14 = var_s1->unk_08;
            var_s1++;
            var_s0++;
                      
        }
    } else {
        D_80086A00 = 0;
    }
}

int cBootMain(void) { //ran once on boot
    return 1;
}

void mainCFunction(void) { //ran every frame
    //bossSpellsDpadRight();
}