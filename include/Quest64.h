#ifndef _QUEST64_H_
#define _QUEST64_H_

#include "types.h"
#include "functions.h"
#include "enums.h"
#include "macros.h"

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

extern s32 gCurrentMap;
extern s32 gNextSubmap;
extern s8 gEventflag1;
extern s8 gEventflag2;
extern s8 gEventflag3;
extern s8 gEventflag4;
extern s8 gEventflag5;
extern s8 gEventflag6;
extern s8 gEventflag7;
extern s8 gEventflag8;
extern s8 gEventflag9;
extern s8 gEventflag10;
extern s8 gEventflag11;
extern s8 gEventflag12;
extern s8 gEventflag13;
extern s8 gEventflag14;
extern s8 gEventflag15;
extern s8 gEventflag16;
extern s8 gEventflag17;
extern s8 gEventflag18;
extern s8 gEventflag19;
extern s8 gEventflag20;
extern s8 gSpiritflagforest;
extern s32 eTextlookup;
extern s16 eClairetext;
extern s16 eArkarttext;
extern s16 eHershtext;
extern s16 eLeonardotext;
extern s16 eEponatext;
extern s32 eClairespirit;
extern s32 eClairespirit2;
extern s16 sBrianMAXHP;
extern s16 sBrianHP;
extern s16 sBrianMAXMP;
extern s16 sBrianMP;
extern s16 sBrianHPEXP;
extern s16 sBrianMPEXP;
extern s16 sBrianDEFEXP;
extern s16 sBrianAGIEXP;
extern s32 sBrianELEEXP;
extern s8 sBrianItemPickup;
extern s16 sSolvaMHP;
extern s16 sSolvaCHP;
extern s16 sSolvaDEF;
extern s16 sSolvaAGI;
extern s16 sSolvaATK;
extern s16 sSolvaELE;
extern s16 sZelseMHP;
extern s16 sZelseCHP;
extern s16 sZelseDEF;
extern s16 sZelseAGI;
extern s16 sZelseATK;
extern s16 sZelseELE;
extern s16 sNeptyMHP;
extern s16 sNeptyCHP;
extern s16 sNeptyDEF;
extern s16 sNeptyAGI;
extern s16 sNeptyATK;
extern s16 sNeptyELE;
extern s16 sShilfMHP;
extern s16 sShilfCHP;
extern s16 sShilfDEF;
extern s16 sShilfAGI;
extern s16 sShilfATK;
extern s16 sShilfELE;
extern s16 sFargoMHP;
extern s16 sFargoCHP;
extern s16 sFargoDEF;
extern s16 sFargoAGI;
extern s16 sFargoATK;
extern s16 sFargoELE;
extern s16 sGuiltyMHP;
extern s16 sGuiltyCHP;
extern s16 sGuiltyDEF;
extern s16 sGuiltyAGI;
extern s16 sGuiltyATK;
extern s16 sGuiltyELE;
extern s16 sBeigisMHP;
extern s16 sBeigisCHP;
extern s16 sBeigisDEF;
extern s16 sBeigisAGI;
extern s16 sBeigisATK;
extern s16 sBeigisELE;
extern s16 sMammonMHP;
extern s16 sMammonCHP;
extern s16 sMammonDEF;
extern s16 sMammonAGI;
extern s16 sMammonATK;
extern s16 sMammonELE;
extern s8 sCurrentenemy;
extern s16 sEnemyHP;

#endif
