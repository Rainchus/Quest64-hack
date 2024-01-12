#include "../include/Quest64.h"

extern SpellData* SpellTablePointers[5];
extern SpellData* SpellTablePointersBrian[5];

#define FIRE 0
#define EARTH 1
#define WATER 2
#define WIND 3
#define BOSS 4


void ChangeBrianFireSpells(void) {

}

void ChangeBrianEarthSpells(void) {
    
}

void ChangeBrianWaterSpells(void) {
    
}

void ChangeBrianWindSpells(void) {
    if (gPlayerData.elements.wind >= 4) {
        SpellTablePointersBrian[WIND][0].attackCount = 3;
    }
}

void ChangeBrianBossSpells(void) {
    
}

