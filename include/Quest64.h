#ifndef _QUEST64_H_
#define _QUEST64_H_

#include "types.h"
#include "functions.h"
#include "enums.h"
#include "macros.h"

#define FUNCS_PER_PAGE 7
#define X_COORD_PER_LETTER 4.5

typedef struct SpellData {
/* 0x00 */ u16 levelRequirement;
/* 0x02 */ u16 ifAttackDisappearOnHit;
/* 0x04 */ u16 spellMenuInputs; //determines how unk_06 and unk_08 are read
/* 0x06 */ u16 firstAndSecondSpellInputDirections;
/* 0x08 */ u16 thirdAndFourthSpellInputDirections;
/* 0x0A */ u16 range;
/* 0x0C */ u16 damage_base;
/* 0x0E */ u16 accuracy;
/* 0x10 */ u16 type;
/* 0x12 */ u16 projectileType;
/* 0x14 */ u16 projectileTravelHeight;
/* 0x16 */ u16 autoHitBool;
/* 0x18 */ u16 target; 
/* 0x1A */ u16 unk_1A; //0x1A is padding probably
/* 0x1C */ f32 size;
/* 0x20 */ u16 attackCount; //0x20
/* 0x22 */ u16 frameDelayBetweenHits; //this value / 2 is actual frame delay
/* 0x24 */ u16 frameDelaySpellEffect; // this value / 2 is actual frame delay
/* 0x26 */ u16 startingPoint; //?
/* 0x28 */ u16 homingType;
/* 0x2A */ u16 angle; //?
/* 0x2C */ u16 attackDirection; //?
/* 0x2E */ u16 speed1; //?
/* 0x30 */ u16 speed2; //?
/* 0x32 */ u8 ifCompression; //0 if not used, 1 if so
/* 0x33 */ u8 ifVampsTouch; //0 if not used, 1 if so
/* 0x34 */ u8 ifPowerStaff; //0 not used, 1 is lv1, 2 is lvl 2
/* 0x35 */ u8 ifRestriction; //0 if not used, 1 if so
/* 0x36 */ u8 movementType; //0 not used, 1 slow enemy, 2 wind walk
/* 0x37 */ u8 agilityType; //0 not used, 1 evade lvl1, 2 evade lvl2, 3 slow enemy
/* 0x38 */ u8 ifSilence; //0 if not used, 1 if so
/* 0x39 */ u8 ifSoulSearch; //0 if not used, 1 if so
/* 0x3A */ u8 ifMagicBarrier; //0 if not used, 1 if so
/* 0x3B */ u8 ifConfusion; //0 if not used, 1 if so
/* 0x3C */ u8 defenseType; //0 not used, 1 is weak lvl2, 2 is weak lv1, 3 is armor lvl1, 4 is armor lvl2
/* 0x3D */ u8 unk_3D;
/* 0x3E */ u16 unk_3E;
/* 0x40 */ u16 unk_40;
/* 0x42 */ u16 unkInvalidity;
} SpellData;

typedef struct NpcData {
/* 0x00 */ u16 unk_00;
/* 0x02 */ u16 unk_02;
/* 0x04 */ u8 unk_04;
/* 0x05 */ u8 unk_05;
/* 0x06 */ u8 unk06; ///
/* 0x06 */ u8 unk07; ///
/* 0x08 */ u16 textOffset1;
/* 0x0A */ u16 textOffset2;
/* 0x0C */ s32 unkC; //unknown type (unused?)
/* 0x10 */ u8* modelData;
/* 0x14 */ u8* npcName;
/* 0x18 */ s32 unk18; //unknown type (unused?)
/* 0x1C */ Vec2f pos; //x,y position
/* 0x24 */ f32 rotation;
/* 0x28 */ f32 sizeScaler;
} NpcData; //sizeof 0x2C

typedef struct Unk_D_8007BD30 {
    char unk0[0x80];
    NpcData* npcData;
} Unk_D_8007BD30;

extern Unk_D_8007BD30 D_8007BD30;

extern s32 gTimeOfDay;
extern s32 gCurrentMap;
extern s32 gNextSubmap;
extern u16 buttonsHeld;
extern u16 buttonsPressed;
extern u32 rng_seed;
extern s32 menuRootXPos;
extern s32 menuRootYPos;
extern char** page0Strings[];

enum TextColor {
    BLACK = 0,
    RED = 1,
    GRAY = 2,
    GREEN = 3,
    //custom colors beyond this point
    LIGHT_BLUE = 4,
};

typedef struct menuPage {
    /* 0x00 */ s32 optionCount;
    /* 0x04 */ s32 pageIndex;
    /* 0x08 */ char* options[FUNCS_PER_PAGE];
    /* 0x28 */ s32 (*menuProc[FUNCS_PER_PAGE]) (void);
    /* 0x48 */ s8 flags[FUNCS_PER_PAGE];
    /* 0x50 */ char*** selectionText;
} menuPage;

enum Toggles {
    NO_TOGGLE = 0,
    //page 0
    TOGGLE_HIDE_SAVESTATE_TEXT,
    TOGGLE_HIDE_LOADSTATE_TEXT,
};

#define CONT_A      0x8000
#define CONT_B      0x4000
#define CONT_G	    0x2000
#define CONT_START  0x1000
#define CONT_UP     0x0800
#define CONT_DOWN   0x0400
#define CONT_LEFT   0x0200
#define CONT_RIGHT  0x0100
#define CONT_L      0x0020
#define CONT_R      0x0010
#define CONT_E      0x0008
#define CONT_D      0x0004
#define CONT_C      0x0002
#define CONT_F      0x0001

#endif
