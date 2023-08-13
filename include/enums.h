#ifndef _ENUMS_H_
#define _ENUMS_H_

enum GameStates {
    NONE = 0,
    ITEM_MENU = 1,
    TALKING_TO_NPC = 2,
    SPELL_MENU = 4,
    LEVEL_UP_MENU = 8,
};

// enum BrianStates {
//     IDLE = 0,
//     WALKING = 1,
//     RUNNING = 2,
//     LOCKED = 3,
//     SLIDING = 4,
//     CASTING = 0xE,
//     VICTORY_ANIMATION = 0xF,
// } BrianStates;

// 0000 = Normal
// 0001 = Item Menu
// 0002 = Talking to NPC
// 0004 = Spell Menu
// 0008 = Spirit Placement
// 0012 = Talking to INN
// 0080 = Interacting with a Door
// 0160 = Title Screen
// 01E0 = Load Screen transition
// 0480 = Loading Memory Card
// 05A0 = Save Menu
// 0880 = Dying

#endif
