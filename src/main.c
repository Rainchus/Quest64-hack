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

SpiritData MelrodeTownSpirits[] = {
    {-188.5f, -503.5f, 0},
};

SpiritData OutsideMonasterySpirits[] = {
    {1165.0f, 754.5f, 1},
};

SpiritData DondoranCastleTownSpirits[] = {
    {-108.0f, 9.0f, 2},
};

SpiritData HolyPlainSpirits[] = {
    {70.0f, -982.5f, 3},
    {812.5f, 175.0f, 4},
};

SpiritData DondoranFlatsSpirits[] = {
    {-472.5f, 882.5f, 5},
    {157.5f, 7.5f, 6},
    {2.5f, 1250.0f, 7},
};

SpiritData DrainedLowerLarapoolSpirits[] = {
    {243.0f, -133.0f, 8},
    {16.0f, 366.0f, 9},
    {597.0f, 199.0f, 10},
};

SpiritData WestCarmaghSpirits[] = {
    {705.0f, -55.0f, 11},
    {55.0f, 515.0f, 12},
    {-415.0f, -650.0f, 13},
};

SpiritData NormoonSpirits[] = {
    {200.0f, 152.5f, 14},
    {195.0f, 5.0f, 15},
    {220.0f, -107.5f, 16},
};

SpiritData EastLimelinSpirits[] = {
    {1105.0f, -1535.0f, 17},
    {1180.0f, -720.0f, 18},
    {-800.0f, -155.0f, 19},
    {1040.0f, -1760.0f, 20},
};

SpiritData LimelinCastleTownSpirits[] = {
    {-768.0f, 462.0f, 21},
    {-412.0f, -339.0f, 22},
    {189.0f, -405.0f, 23},
    {670.0f, 239.0f, 24},
};

SpiritData LimelinCastleFrontSpirits[] = {
    {0.0f, 170.0f, 25},
};

SpiritData DindomDriesSpirits[] = {
    {-1990.0f, -415.0f, 26},
    {-1740.0f, -520.0f, 27},
    {325.0f, -310.0f, 28},
    {-680.0f, 350.0f, 29},
    {2700.0f, -2100.0f, 30},
    {-2010.0f, 200.0f, 31},
};

SpiritData ShamwoodSpirits[] = {
    {-120.0f, 460.0f, 32},
    {-82.5f, -1037.5f, 33},
};

SpiritData ShamwoodUnkSpirits[] = {
    {-115.0f, 122.5f, 34},
    {30.0f, 225.0f, 35},
};

SpiritData BrannochCastleFrontSpirits[] = {
    {-2140.0f, 325.0f, 36},
};

SpiritData BrannochMoorSpirits[] = {
    {484.5f, 153.0f, 37},
    {336.0f, 34.0f, 38},
    {-586.0f, 220.5f, 39},
    {-325.0f, -324.0f, 40},
};

SpiritData IsleOfSkyeSpirits[] = {
    {622.5f, -30.0f, 41},
    {450.0f, 20.0f, 42},
    {977.5f, 465.0f, 43},
    {207.5f, -77.5f, 44},
};

SpiritData BlueCaveSpirits[] = {
    {-800.0f, 1920.0f, 45},
    {-10.0f, 1000.0f, 46},
    {1260.0f, 1060.0f, 47},
    {1312.5f, 4992.5f, 48},
    {2090.0f, 5192.5f, 49},
    {1797.5f, 5685.0f, 50},
};

SpiritData BlueCaveBuildingAreaSpirits[] = {
    {-13.5f, 179.5f, 51},
};

SpiritData CullHazardSpirits[] = {
    {1085.0f, 1320.0f, 52},
    {1422.5f, 1260.0f, 53},
};

SpiritData BaragoonTunnelSpirits[] = {
    {-2880.0f, -335.0f, 54},
    {4725.0f, 1800.0f, 55},
    {3012.5f, 1620.0f, 56},
    {2847.0f, 1960.0f, 57},
    {-197.5f, 972.5f, 58},
};

SpiritData BoilHoleSpirits[] = {
    {7174.0f, -1274.0f, 59},
    {5272.0f, 1038.0f, 60},
};

SpiritData SecretRoomSpirits[] = {
    {100.0f, -100.0f, 61},
};

SpiritData PrinceLeonardoArrivedSpirits[] = {
    {76.5f, -43.5f, 62},
};

SpiritData ConnorFortressSpirits[] = {
    {-142.0f, 304.0f, 63},
    {1374.0f, -940.0f, 64},
    {2030.0f, -142.0f, 65},
    {-582.0f, 310.0f, 66},
};

SpiritData FortressBuildingSpirits[] = {
    {5.15f, 2.85f, 67},
};

SpiritData GlencoeForestSpirits[] = {
    {452.0f, 439.0f, 68},
    {-298.0f, 333.0f, 69},
    {-721.0f, 326.0f, 70},
    {-873.0f, -722.0f, 71},
    {-1077.0f, 141.0f, 72},
    {-1330.0f, 177.0f, 73},
};

SpiritData WindwardForestSpirits[] = {
    {301.0f, -159.0f, 74},
    {-494.0f, 189.0f, 75},
    {450.0f, 225.0f, 76},
};

SpiritData CabinSpirits[] = {
    {-4.0f, 25.0f, 77},
};

SpiritData SecretRoomSecretSpirits[] = {
    {16.0f, 0.0f, 78},
};

SpiritData KingsSecretRoomSpirits[] = {
    {-22.5f, 31.5f, 79},
};

SpiritData MarionsSpirits[] = {
    {-22.0f, -19.0f, 80},
};

SpiritData LimelinCastleEntranceSpirits[] = {
    {-5.0f, 80.0f, 81},
    {5.0f, 80.0f, 82},
};

SpiritData LibrarySpirits[] = {
    {-53.0f, 28.0f, 83},
};

SpiritData JailRoomSpirits[] = {
    {0.0f, 0.0f, 84},
};

SpiritData MineCabinSpirits[] = {
    {-5.0f, 25.0f, 85},
    {-32.0f, -20.5f, 86},
};

SpiritData DesertTentSpirits[] = {
    {27.0f, 27.5f, 87},
};

SpiritData UpstairsSpirits[] = {
   {4.5f, 5.5f, 88},
};

SpiritData LavaarsTreasureChamberSpirits[] = {
    {-25.0f, 25.0f, 89},
    {25.0f, 25.0f, 90},
    {-25.0f, -25.0f, 91},
    {25.0f, -25.0f, 92},
};

SpiritData TreasureTombJackpotSpirits[] = {
    {10.0f, 80.0f, 93},
    {-10.0f, 80.0f, 94},
};

SpiritData SkyePortalSpirits[] = {
    {27.0f, 13.5f, 95},
};

SpiritData MacrensShipRoomSpirits[] = {
    {18.0f, -7.0f, 96},
};

SpiritData InsideDondoranShip[] = {
    {-34.0f, 25.0f, 97},
};

SpiritTable newSpiritTable[] = {
    //mapID, submap, spiritCount, pad, spiritLocations
    {0, 0,  ARRAY_COUNT(MelrodeTownSpirits),            MelrodeTownSpirits},
    {0, 1,  ARRAY_COUNT(OutsideMonasterySpirits),       OutsideMonasterySpirits},
    {1, 0,  ARRAY_COUNT(DondoranCastleTownSpirits),     DondoranCastleTownSpirits},
    {2, 0,  ARRAY_COUNT(HolyPlainSpirits),              HolyPlainSpirits},
    {3, 0,  ARRAY_COUNT(DondoranFlatsSpirits),          DondoranFlatsSpirits},
    {4, 2,  ARRAY_COUNT(DrainedLowerLarapoolSpirits),   DrainedLowerLarapoolSpirits},
    {5, 0,  ARRAY_COUNT(WestCarmaghSpirits),            WestCarmaghSpirits},
    {6, 0,  ARRAY_COUNT(NormoonSpirits),                NormoonSpirits},
    {7, 0,  ARRAY_COUNT(EastLimelinSpirits),            EastLimelinSpirits},
    {8, 0,  ARRAY_COUNT(LimelinCastleTownSpirits),      LimelinCastleTownSpirits},
    {8, 1,  ARRAY_COUNT(LimelinCastleFrontSpirits),     LimelinCastleFrontSpirits},
    {9, 0,  ARRAY_COUNT(DindomDriesSpirits),            DindomDriesSpirits},
    {0xA, 0, ARRAY_COUNT(ShamwoodSpirits),              ShamwoodSpirits},
    {0xA, 1, ARRAY_COUNT(ShamwoodUnkSpirits),           ShamwoodUnkSpirits},
    {0xB, 1, ARRAY_COUNT(BrannochCastleFrontSpirits),   BrannochCastleFrontSpirits},
    {0xB, 2, ARRAY_COUNT(BrannochMoorSpirits),          BrannochMoorSpirits},
    {0xC, 0, ARRAY_COUNT(IsleOfSkyeSpirits),            IsleOfSkyeSpirits},
    {0x1A, 0, ARRAY_COUNT(BlueCaveSpirits),             BlueCaveSpirits},
    {0x1A, 2, ARRAY_COUNT(BlueCaveBuildingAreaSpirits), BlueCaveBuildingAreaSpirits},
    {0x1B, 0, ARRAY_COUNT(CullHazardSpirits),           CullHazardSpirits},
    {0x1C, 0, ARRAY_COUNT(BaragoonTunnelSpirits),       BaragoonTunnelSpirits},
    {0x1D, 0, ARRAY_COUNT(BoilHoleSpirits),             BoilHoleSpirits},
    {0x1E, 8, ARRAY_COUNT(SecretRoomSpirits),           SecretRoomSpirits},
    {0x1E, 0xF, ARRAY_COUNT(PrinceLeonardoArrivedSpirits), PrinceLeonardoArrivedSpirits},
    {0x1F, 0, ARRAY_COUNT(ConnorFortressSpirits),       ConnorFortressSpirits},
    {0x1F, 2, ARRAY_COUNT(FortressBuildingSpirits),     FortressBuildingSpirits},
    {0x20, 0, ARRAY_COUNT(GlencoeForestSpirits),        GlencoeForestSpirits},
    {0x21, 0, ARRAY_COUNT(WindwardForestSpirits),       WindwardForestSpirits},
    {0x21, 1, ARRAY_COUNT(CabinSpirits),                CabinSpirits},
    {0xE, 0xF, ARRAY_COUNT(SecretRoomSecretSpirits),    SecretRoomSecretSpirits},
    {0xE, 0xC, ARRAY_COUNT(KingsSecretRoomSpirits),     KingsSecretRoomSpirits},
    {0x10, 0x15, ARRAY_COUNT(MarionsSpirits),           MarionsSpirits},
    {0x15, 0, ARRAY_COUNT(LimelinCastleEntranceSpirits), LimelinCastleEntranceSpirits},
    {0x15, 6, ARRAY_COUNT(LibrarySpirits),              LibrarySpirits},
    {0x16, 1, ARRAY_COUNT(JailRoomSpirits),             JailRoomSpirits},
    {0x16, 0x17, ARRAY_COUNT(MineCabinSpirits),         MineCabinSpirits},
    {0x17, 0x13, ARRAY_COUNT(DesertTentSpirits),        DesertTentSpirits},
    {0x17, 0x17, ARRAY_COUNT(UpstairsSpirits),          UpstairsSpirits},
    {0x18, 0, ARRAY_COUNT(LavaarsTreasureChamberSpirits), LavaarsTreasureChamberSpirits},
    {0x18, 2, ARRAY_COUNT(TreasureTombJackpotSpirits),  TreasureTombJackpotSpirits},
    {0x19, 1, ARRAY_COUNT(SkyePortalSpirits),           SkyePortalSpirits},
    {0x19, 4, ARRAY_COUNT(MacrensShipRoomSpirits),      MacrensShipRoomSpirits},
    {0x19, 9, ARRAY_COUNT(InsideDondoranShip),          InsideDondoranShip},
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
    SpiritData* var_s1;
    s32 i;

    for (i = 0; i < ARRAY_COUNT(newSpiritTable); i++) {
        if ((gCurrentMap != newSpiritTable[i].map) || (gNextSubmap != newSpiritTable[i].subMap)) {
            continue;
        } else {
            break;
        }
    }
    
    if (i < ARRAY_COUNT(newSpiritTable)) {
        var_s2_2 = newSpiritTable[i].spiritCount;
        var_s1 = newSpiritTable[i].spiritData;
        var_s0 = D_80086A08;
        D_80086A00 = var_s2_2;
        for (; var_s2_2 != 0; var_s2_2--) {
            var_s0->unk_12 = -1;
            var_s0->unk_10 = func_80012700(var_s1->id);
            var_s0->pos.x = var_s1->xPos;
            var_s0->pos.z = -var_s1->zPos;
            func_8000EE60(var_s0->pos.x, 0.0f, var_s0->pos.z, 0xA00, &D_80086AC8);
            var_s0->pos.y = D_80086AC8.y;
            var_s0->pos.w = 0.0f;
            var_s0->unk_14 = var_s1->id;
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