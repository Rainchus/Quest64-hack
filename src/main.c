#include "../include/Quest64.h"

extern void bossSpellsDpadRight(void);

#define ARRAY_COUNT(arr) (sizeof(arr) / sizeof(arr[0]))

// BGMData originalBgmTable[] = {
//     {0, 2, 33},
//     {0, 3, 33},
//     {0, 4, 33},
//     {11, 4, 255},
//     {11, 3, 255},
//     {11, 5, 255},
//     {11, 7, 255},
//     {11, 6, 255},
//     {0, -1, 2},
//     {1, -1, 25},
//     {2, -1, 21},
//     {3, -1, 21},
//     {4, -1, 34},
//     {5, -1, 21},
//     {6, -1, 37},
//     {7, -1, 21},
//     {8, -1, 36},
//     {9, -1, 22},
//     {10, -1, 5},
//     {11, -1, 39},
//     {12, -1, 26},
//     {14, 13, 33},
//     {15, 13, 33},
//     {22, 24, 33},
//     {22, 25, 33},
//     {23, 0, 7},
//     {23, 1, 7},
//     {23, 2, 7},
//     {23, 3, 7},
//     {23, 4, 7},
//     {23, 5, 7},
//     {23, 19, 7},
//     {23, 20, 7},
//     {23, 21, 7},
//     {25, 6, 33},
//     {25, 7, 33},
//     {13, -1, 15},
//     {14, -1, 3},
//     {15, -1, 7},
//     {16, -1, 7},
//     {17, -1, 7},
//     {18, -1, 7},
//     {19, -1, 7},
//     {20, -1, 7},
//     {21, -1, 8},
//     {22, -1, 7},
//     {23, -1, 39},
//     {24, -1, 5},
//     {25, -1, 6},
//     {26, 2, 9},
//     {26, 3, 11},
//     {26, 4, 11},
//     {30, 6, 255},
//     {31, 1, 35},
//     {31, 2, 24},
//     {32, 1, 12},
//     {32, 2, 12},
//     {33, 1, 12},
//     {33, 2, 12},
//     {34, 1, 38},
//     {26, -1, 23},
//     {27, -1, 10},
//     {28, -1, 1},
//     {29, -1, 18},
//     {30, -1, 31},
//     {31, -1, 12},
//     {32, -1, 24},
//     {33, -1, 24},
//     {34, -1, 33},
//     {35, -1, 14},
// };
BGMData newBgmTable[] = {
{0, 2, 33},
{0, 3, 17},
{0, 4, 17},
{11, 4, 255},
{11, 3, 255},
{11, 5, 255},
{11, 7, 255},
{11, 6, 255},
{0, -1, 16},
{1, -1, 25},
{2, -1, 21},
{3, -1, 21},
{4, -1, 34},
{5, -1, 21},
{6, -1, 37},
{7, -1, 21},
{8, -1, 36},
{9, -1, 22},
{10, -1, 5},
{11, -1, 39},
{12, -1, 26},
{14, 13, 33},
{15, 13, 17},
{22, 24, 33},
{22, 25, 33},
{23, 0, 7},
{23, 1, 7},
{23, 2, 7},
{13, 16, 33},
{13, 13, 33},
{23, 5, 7},
{23, 19, 7},
{23, 20, 7},
{23, 21, 7},
{25, 6, 33},
{25, 7, 33},
{13, 14, 33},
{14, -1, 3},
{15, -1, 7},
{16, -1, 7},
{17, -1, 7},
{18, -1, 7},
{19, -1, 7},
{20, -1, 7},
{21, -1, 8},
{22, -1, 7},
{23, -1, 39},
{24, -1, 5},
{25, -1, 6},
{26, 2, 9},
{26, 3, 11},
{26, 4, 11},
{13, -1, 15},
{31, 1, 35},
{31, 2, 24},
{32, 1, 12},
{32, 2, 12},
{33, 1, 12},
{33, 2, 12},
{34, 1, 38},
{26, -1, 23},
{27, -1, 10},
{28, -1, 1},
{29, -1, 18},
{30, -1, 31},
{31, -1, 12},
{32, -1, 24},
{33, -1, 24},
{34, -1, 33},
{35, -1, 14},
};

typedef struct SpiritData {
    f32 xPos;
    f32 zPos;
    u8 id;
} SpiritData;

SpiritData spiritLocations[] = {
    //&spiritLocations[0]
    {-188.5f, -503.5f, 0},

    //&spiritLocations[1]
    {1165.0f, 754.5f, 1},

    //&spiritLocations[2]
    {-108.0f, 9.0f, 2},

    //&spiritLocations[3]
    {70.0f, -982.5f, 3},
    {812.5f, 175.0f, 4},

    //&spiritLocations[5]
    {-472.5f, 882.5f, 5},
    {157.5f, 7.5f, 6},
    {2.5f, 1250.0f, 7},

    //&spiritLocations[8]
    {243.0f, -133.0f, 8},
    {16.0f, 366.0f, 9},
    {597.0f, 199.0f, 10},

    //&spiritLocations[11]
    {705.0f, -55.0f, 11},
    {55.0f, 515.0f, 12},
    {-415.0f, -650.0f, 13},

    //&spiritLocations[14]
    {200.0f, 152.5f, 14},
    {195.0f, 5.0f, 15},
    {220.0f, -107.5f, 16},

    //&spiritLocations[17]
    {1105.0f, -1535.0f, 17},
    {1180.0f, -720.0f, 18},
    {-800.0f, -155.0f, 19},
    {1040.0f, -1760.0f, 20},

    //&spiritLocations[21]
    {-768.0f, 462.0f, 21},
    {-412.0f, -339.0f, 22},
    {189.0f, -405.0f, 23},
    {670.0f, 239.0f, 24},

    //&spiritLocations[25]
    {0.0f, 170.0f, 25},

    //&spiritLocations[26]
    {-1990.0f, -415.0f, 26},
    {-1740.0f, -520.0f, 27},
    {325.0f, -310.0f, 28},
    {-680.0f, 350.0f, 29},
    {2700.0f, -2100.0f, 30},
    {-2010.0f, 200.0f, 31},

    //&spiritLocations[32]
    {-120.0f, 460.0f, 32},
    {-82.5f, -1037.5f, 33},

    //&spiritLocations[34]
    {-115.0f, 122.5f, 34},
    {30.0f, 225.0f, 35},

    //&spiritLocations[36]
    {-2140.0f, 325.0f, 36},

    //&spiritLocations[37]
    {484.5f, 153.0f, 37},
    {336.0f, 34.0f, 38},
    {-586.0f, 220.5f, 39},
    {-325.0f, -324.0f, 40},

    //&spiritLocations[41]
    {622.5f, -30.0f, 41},
    {450.0f, 20.0f, 42},
    {977.5f, 465.0f, 43},
    {207.5f, -77.5f, 44},

    //&spiritLocations[45]
    {-800.0f, 1920.0f, 45},
    {-10.0f, 1000.0f, 46},
    {1260.0f, 1060.0f, 47},
    {1312.5f, 4992.5f, 48},
    {2090.0f, 5192.5f, 49},
    {1797.5f, 5685.0f, 50},

    //&spiritLocations[51]
    {-13.5f, 179.5f, 51},

    //&spiritLocations[52]
    {1085.0f, 1320.0f, 52},
    {1422.5f, 1260.0f, 53},

    //&spiritLocations[54]
    {-2880.0f, -335.0f, 54},
    {4725.0f, 1800.0f, 55},
    {3012.5f, 1620.0f, 56},
    {2847.0f, 1960.0f, 57},
    {-197.5f, 972.5f, 58},

    //&spiritLocations[59]
    {7174.0f, -1274.0f, 59},
    {5272.0f, 1038.0f, 60},

    //&spiritLocations[61]
    {100.0f, -100.0f, 61},

    //&spiritLocations[62]
    {76.5f, -43.5f, 62},

    //&spiritLocations[63]
    {-142.0f, 304.0f, 63},
    {1374.0f, -940.0f, 64},
    {2030.0f, -142.0f, 65},
    {-582.0f, 310.0f, 66},

    //&spiritLocations[67]
    {5.15f, 2.85f, 67},

    //&spiritLocations[68]
    {452.0f, 439.0f, 68},
    {-298.0f, 333.0f, 69},
    {-721.0f, 326.0f, 70},
    {-873.0f, -722.0f, 71},
    {-1077.0f, 141.0f, 72},
    {-1330.0f, 177.0f, 73},

    //&spiritLocations[74]
    {301.0f, -159.0f, 74},
    {-494.0f, 189.0f, 75},
    {450.0f, 225.0f, 76},

    //&spiritLocations[77]
    {-4.0f, 25.0f, 77},

    //&spiritLocations[78]
    {16.0f, 0.0f, 78},

    //&spiritLocations[79]
    {-22.5f, 31.5f, 79},

    //&spiritLocations[80]
    {-22.0f, -19.0f, 80},

    //&spiritLocations[81]
    {-5.0f, 80.0f, 81},
    {5.0f, 80.0f, 82},

    //&spiritLocations[83]
    {-53.0f, 28.0f, 83},

    //&spiritLocations[84]
    {0.0f, 0.0f, 84},

    //&spiritLocations[85]
    {-5.0f, 25.0f, 85},
    {-32.0f, -20.5f, 86},

    //&spiritLocations[87]
    {27.0f, 27.5f, 87},

    //&spiritLocations[88]
    {4.5f, 5.5f, 88},

    //&spiritLocations[89]
    {-25.0f, 25.0f, 89},
    {25.0f, 25.0f, 90},
    {-25.0f, -25.0f, 91},
    {25.0f, -25.0f, 92},

    //&spiritLocations[93]
    {10.0f, 80.0f, 93},
    {-10.0f, 80.0f, 94},

    //&spiritLocations[95]
    {27.0f, 13.5f, 95},

    //&spiritLocations[96]
    {18.0f, -7.0f, 96},

    //&spiritLocations[97]
    {-34.0f, 25.0f, 97},
};

SpiritTable newSpiritTable[] = {
    //mapID, submap, spiritCount, pad, spiritLocations
    {0x0000, 0x0000, 0x0001, 0x0000, &spiritLocations[0]},
    {0x0000, 0x0001, 0x0001, 0x0000, &spiritLocations[1]},
    {0x0001, 0x0000, 0x0001, 0x0000, &spiritLocations[2]},
    {0x0002, 0x0000, 0x0002, 0x0000, &spiritLocations[3]},
    {0x0003, 0x0000, 0x0003, 0x0000, &spiritLocations[5]},
    {0x0004, 0x0002, 0x0003, 0x0000, &spiritLocations[8]},
    {0x0005, 0x0000, 0x0003, 0x0000, &spiritLocations[11]},
    {0x0006, 0x0000, 0x0003, 0x0000, &spiritLocations[14]},
    {0x0007, 0x0000, 0x0004, 0x0000, &spiritLocations[17]},
    {0x0008, 0x0000, 0x0004, 0x0000, &spiritLocations[21]},
    {0x0008, 0x0001, 0x0001, 0x0000, &spiritLocations[25]},
    {0x0009, 0x0000, 0x0006, 0x0000, &spiritLocations[26]},
    {0x000A, 0x0000, 0x0002, 0x0000, &spiritLocations[32]},
    {0x000A, 0x0001, 0x0002, 0x0000, &spiritLocations[34]},
    {0x000B, 0x0001, 0x0001, 0x0000, &spiritLocations[36]},
    {0x000B, 0x0002, 0x0004, 0x0000, &spiritLocations[37]},
    {0x000C, 0x0000, 0x0004, 0x0000, &spiritLocations[41]},
    {0x001A, 0x0000, 0x0006, 0x0000, &spiritLocations[45]},
    {0x001A, 0x0002, 0x0001, 0x0000, &spiritLocations[51]},
    {0x001B, 0x0000, 0x0002, 0x0000, &spiritLocations[52]},
    {0x001C, 0x0000, 0x0005, 0x0000, &spiritLocations[54]},
    {0x001D, 0x0000, 0x0002, 0x0000, &spiritLocations[59]},
    {0x001E, 0x0008, 0x0001, 0x0000, &spiritLocations[61]},
    {0x001E, 0x000F, 0x0001, 0x0000, &spiritLocations[62]},
    {0x001F, 0x0000, 0x0004, 0x0000, &spiritLocations[63]},
    {0x001F, 0x0002, 0x0001, 0x0000, &spiritLocations[67]},
    {0x0020, 0x0000, 0x0006, 0x0000, &spiritLocations[68]},
    {0x0021, 0x0000, 0x0003, 0x0000, &spiritLocations[74]},
    {0x0021, 0x0001, 0x0001, 0x0000, &spiritLocations[77]},
    {0x000E, 0x000F, 0x0001, 0x0000, &spiritLocations[78]},
    {0x000E, 0x000C, 0x0001, 0x0000, &spiritLocations[79]},
    {0x0010, 0x0015, 0x0001, 0x0000, &spiritLocations[80]},
    {0x0015, 0x0000, 0x0002, 0x0000, &spiritLocations[81]},
    {0x0015, 0x0006, 0x0001, 0x0000, &spiritLocations[83]},
    {0x0016, 0x0001, 0x0001, 0x0000, &spiritLocations[84]},
    {0x0016, 0x0017, 0x0002, 0x0000, &spiritLocations[85]},
    {0x0017, 0x0013, 0x0001, 0x0000, &spiritLocations[87]},
    {0x0017, 0x0017, 0x0001, 0x0000, &spiritLocations[88]},
    {0x0018, 0x0000, 0x0004, 0x0000, &spiritLocations[89]},
    {0x0018, 0x0002, 0x0002, 0x0000, &spiritLocations[93]},
    {0x0019, 0x0001, 0x0001, 0x0000, &spiritLocations[95]},
    {0x0019, 0x0004, 0x0001, 0x0000, &spiritLocations[96]},
    {0x0019, 0x0009, 0x0001, 0x0000, &spiritLocations[97]},
};

void func_8002684C_Hook(s32 nextMap, s32 nextSubmap, u16 delay) {
    s32 mapNum;
    BGMData* bgmData;

    bgmData = newBgmTable;
    //bgmData = &D_80053B00;

    for (mapNum = ARRAY_COUNT(newBgmTable); mapNum != 0; mapNum--) {
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