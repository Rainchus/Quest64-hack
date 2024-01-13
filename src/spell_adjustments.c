#include "../include/Quest64.h"

extern SpellData* SpellTablePointers[5];
extern SpellData* SpellTablePointersBrian[5];

#define FIRE 0
#define EARTH 1
#define WATER 2
#define WIND 3
#define BOSS 4


void ChangeBrianFireSpells(void) {
    if (gPlayerData.elements.fire >= 4) {
        SpellTablePointersBrian[FIRE][0].attackCount = 2;
        SpellTablePointersBrian[FIRE][0].damage_base = 190;
    }
    if (gPlayerData.elements.fire >= 16) {
        SpellTablePointersBrian[FIRE][0].attackCount = 3;
        SpellTablePointersBrian[FIRE][0].damage_base = 168;
    }
    if (gPlayerData.elements.fire >= 32) {
        SpellTablePointersBrian[FIRE][0].attackCount = 4;
        SpellTablePointersBrian[FIRE][0].damage_base = 168; 
    }
    if (gPlayerData.elements.fire >= 50) {
        SpellTablePointersBrian[FIRE][0].attackCount = 5;
        SpellTablePointersBrian[FIRE][0].damage_base = 168;
    }       
    if (gPlayerData.elements.earth >= 7) {
        SpellTablePointersBrian[FIRE][2].ifVampsTouch = 1;
    }
    if (gPlayerData.elements.fire >= 22) {
        SpellTablePointersBrian[FIRE][2].ifPowerStaff = 2;
    }
    if (gPlayerData.elements.fire >= 28) {
        SpellTablePointersBrian[FIRE][3].attackCount = 5;
    }
    if (gPlayerData.elements.fire >= 50) {
        SpellTablePointersBrian[FIRE][3].attackCount = 7;
    }
    if (gPlayerData.elements.fire >= 38) {
        SpellTablePointersBrian[FIRE][4].damage_base = 450;
    }
    if (gPlayerData.elements.water >= 15) {
        SpellTablePointersBrian[FIRE][4].size = 30.0f;
    }
    if (gPlayerData.elements.fire >= 44) {
        SpellTablePointersBrian[FIRE][4].damage_base = 520;
    }
    if (gPlayerData.elements.fire >= 66) {
        SpellTablePointersBrian[FIRE][5].attackCount = 24;
    }
    if (gPlayerData.elements.fire >= 88) {
        SpellTablePointersBrian[FIRE][5].attackCount = 32;
    }
    if (gPlayerData.elements.earth >= 7) {
        SpellTablePointersBrian[FIRE][7].damage_base = 8;   
    }
    if (gPlayerData.elements.earth >= 21) {
        SpellTablePointersBrian[FIRE][7].damage_base = 12;  
    }
    if (gPlayerData.elements.wind >= 21) {
        SpellTablePointersBrian[FIRE][9].attackCount = 15;  
    }
    if (gPlayerData.elements.wind >= 31) {
        SpellTablePointersBrian[FIRE][9].attackCount = 23;  
    }
    if (gPlayerData.elements.fire >= 35) {
        SpellTablePointersBrian[FIRE][9].defenseType = 2;   
    }
    if (gPlayerData.elements.fire >= 70) {
        SpellTablePointersBrian[FIRE][10].attackCount = 2;  
    }
    if (gPlayerData.elements.fire >= 100) {
        SpellTablePointersBrian[FIRE][10].attackCount = 3;  
    }
    if (gPlayerData.elements.earth >= 51) {
        SpellTablePointersBrian[FIRE][10].defenseType = 1;  
    }
}

void ChangeBrianEarthSpells(void) {
    if (gPlayerData.elements.earth >= 4) {
        SpellTablePointersBrian[EARTH][0].size = 10.0f;
        SpellTablePointersBrian[EARTH][0].damage_base = 310;
    }
    if (gPlayerData.elements.earth >= 16) {
        SpellTablePointersBrian[EARTH][0].size = 15.0f;
        SpellTablePointersBrian[EARTH][0].damage_base = 360;
    }
    if (gPlayerData.elements.earth >= 31) {
        SpellTablePointersBrian[EARTH][0].attackCount = 3;
        SpellTablePointersBrian[EARTH][0].damage_base = 141;
    }
    if (gPlayerData.elements.earth >= 21) {
        SpellTablePointersBrian[EARTH][2].defenseType = 4;
    }
    if (gPlayerData.elements.water >= 15) {
        SpellTablePointersBrian[EARTH][2].accuracy = 95;
    }
    if (gPlayerData.elements.water >= 29) {
        SpellTablePointersBrian[EARTH][2].accuracy = 100;
    }
    if (gPlayerData.elements.earth >= 29) {
        SpellTablePointersBrian[EARTH][3].size = 12.0f;
        SpellTablePointersBrian[EARTH][3].damage_base = 300;
    }
    if (gPlayerData.elements.earth >= 39) {
        SpellTablePointersBrian[EARTH][3].size = 18.0f;
        SpellTablePointersBrian[EARTH][3].damage_base = 400;
    }
    if (gPlayerData.elements.earth >= 21) {
        SpellTablePointersBrian[EARTH][4].defenseType = 4;  
    }
    if (gPlayerData.elements.earth >= 35) {
        SpellTablePointersBrian[EARTH][4].autoHitBool = 1;  
    }
    if (gPlayerData.elements.water >= 15) {
        SpellTablePointersBrian[EARTH][4].accuracy = 95;    
    }
    if (gPlayerData.elements.water >= 35) {
        SpellTablePointersBrian[EARTH][4].accuracy = 100;   
    }
    if (gPlayerData.elements.earth >= 25) {
        SpellTablePointersBrian[EARTH][6].agilityType = 3;  
    }
    if (gPlayerData.elements.earth >= 31) {
        SpellTablePointersBrian[EARTH][6].movementType = 1; 
    }
    if (gPlayerData.elements.wind >= 20) {
        SpellTablePointersBrian[EARTH][6].autoHitBool = 1;  
    }
    if (gPlayerData.elements.earth >= 51) {
        SpellTablePointersBrian[EARTH][8].attackCount = 40;
        SpellTablePointersBrian[EARTH][8].damage_base = 100;
    }
    if (gPlayerData.elements.earth >= 30) {
        SpellTablePointersBrian[EARTH][9].defenseType = 3;  
    }
    if (gPlayerData.elements.earth >= 38) {
        SpellTablePointersBrian[EARTH][9].defenseType = 4;  
    }
    if (gPlayerData.elements.water >= 15) {
        SpellTablePointersBrian[EARTH][9].accuracy = 95;    
    }
    if (gPlayerData.elements.water >= 35) {
        SpellTablePointersBrian[EARTH][9].accuracy = 100;   
    }
    if (gPlayerData.elements.wind >= 20) {
        SpellTablePointersBrian[EARTH][11].attackCount = 4;
        SpellTablePointersBrian[EARTH][11].damage_base = 91;
    }
    if (gPlayerData.elements.earth >= 40) {
        SpellTablePointersBrian[EARTH][11].damage_base = 105;
    }
    if (gPlayerData.elements.fire >= 20) {
        SpellTablePointersBrian[EARTH][12].defenseType = 3; 
        SpellTablePointersBrian[EARTH][12].ifPowerStaff = 1;    
    }
    if (gPlayerData.elements.wind >= 20) {
        SpellTablePointersBrian[EARTH][12].movementType = 2;    
        SpellTablePointersBrian[EARTH][12].agilityType = 1; 
    }
    if (gPlayerData.elements.water >= 25) {
        SpellTablePointersBrian[EARTH][12].damage_base = 16;
    }
    if (gPlayerData.elements.water >= 51) {
        SpellTablePointersBrian[EARTH][12].damage_base = 20;
    }
    if (gPlayerData.elements.earth >= 38) {
        SpellTablePointersBrian[EARTH][12].accuracy = 95;   
    }
    if (gPlayerData.elements.earth >= 50) {
        SpellTablePointersBrian[EARTH][12].accuracy = 100;  
    }
    if (gPlayerData.elements.earth >= 100) {
        SpellTablePointersBrian[EARTH][12].ifMagicBarrier = 1;
    }
    if (gPlayerData.elements.wind >= 45) {
        SpellTablePointersBrian[EARTH][13].attackCount = 8;
        SpellTablePointersBrian[EARTH][13].damage_base = 165;
    }
}

void ChangeBrianWaterSpells(void) {
    
}

void ChangeBrianWindSpells(void) {
    if (gPlayerData.elements.wind >= 4) {
        SpellTablePointersBrian[WIND][0].attackCount = 3;
    }
    if (gPlayerData.elements.wind >= 12) {
        SpellTablePointersBrian[WIND][0].attackCount = 6;
        SpellTablePointersBrian[WIND][0].damage_base = 100;
    }
    if (gPlayerData.elements.wind >= 18) {
        SpellTablePointersBrian[WIND][0].ifAttackDisappearOnHit = 5;
        SpellTablePointersBrian[WIND][0].damage_base = 80;
    }
    if (gPlayerData.elements.wind >= 50) {
        SpellTablePointersBrian[WIND][0].attackCount = 9;
    }
}

void ChangeBrianBossSpells(void) {
    
}

