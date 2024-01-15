#include "../include/Quest64.h"

extern SpellData* SpellTablePointers[5];
extern SpellData* SpellTablePointersBrian[5];

#define FIRE 0
#define EARTH 1
#define WATER 2
#define WIND 3
#define BOSS 4


void ChangeBrianFireSpells(void) {
	//Fire Ball
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
	//Unused
	//Power Staff
	if (gPlayerData.elements.earth >= 7) {
		SpellTablePointersBrian[FIRE][2].ifVampsTouch = 1;
	}
	if (gPlayerData.elements.fire >= 22) {
		SpellTablePointersBrian[FIRE][2].ifPowerStaff = 2;
	}
	//Homing Arrow
	if (gPlayerData.elements.fire >= 28) {
        SpellTablePointersBrian[FIRE][3].attackCount = 5;
    }
	if (gPlayerData.elements.fire >= 50) {
        SpellTablePointersBrian[FIRE][3].attackCount = 7;
    }
	//Hot Steam
	if (gPlayerData.elements.fire >= 38) {
		SpellTablePointersBrian[FIRE][4].damage_base = 450;
    }
	if (gPlayerData.elements.water >= 15) {
        SpellTablePointersBrian[FIRE][4].size = 30.0f;
	}
	if (gPlayerData.elements.fire >= 44) {
		SpellTablePointersBrian[FIRE][4].damage_base = 520;
    }
	//Magma Rain
	if (gPlayerData.elements.fire >= 66) {
        SpellTablePointersBrian[FIRE][5].attackCount = 24;
    }
	if (gPlayerData.elements.fire >= 88) {
        SpellTablePointersBrian[FIRE][5].attackCount = 32;
    }
	//Drain Attack
	//Healing Aura
	if (gPlayerData.elements.earth >= 7) {
		SpellTablePointersBrian[FIRE][7].damage_base = 8;	
	}
	if (gPlayerData.elements.earth >= 21) {
		SpellTablePointersBrian[FIRE][7].damage_base = 12;	
	}
	//Fire Pillar
	//Searing Missile
	if (gPlayerData.elements.wind >= 21) {
		SpellTablePointersBrian[FIRE][9].attackCount = 15;	
	}
	if (gPlayerData.elements.wind >= 31) {
		SpellTablePointersBrian[FIRE][9].attackCount = 23;	
	}
	if (gPlayerData.elements.fire >= 35) {
		SpellTablePointersBrian[FIRE][9].defenseType = 2;	
	}
	//Meteor
	if (gPlayerData.elements.fire >= 70) {
		SpellTablePointersBrian[FIRE][10].attackCount = 2;	
	}
	if (gPlayerData.elements.fire >= 100) {
		SpellTablePointersBrian[FIRE][10].attackCount = 3;	
	}
	if (gPlayerData.elements.earth >= 51) {
		SpellTablePointersBrian[FIRE][10].defenseType = 1;	
	}
	//Unused
	//Magma Ball
	//Overload
	//Unused
}

void ChangeBrianEarthSpells(void) {
	//Rock
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
	//Unused
	//Spirit Armor
	if (gPlayerData.elements.earth >= 21) {
		SpellTablePointersBrian[EARTH][2].defenseType = 4;
    }
	if (gPlayerData.elements.water >= 15) {
		SpellTablePointersBrian[EARTH][2].accuracy = 95;
    }
	if (gPlayerData.elements.water >= 29) {
		SpellTablePointersBrian[EARTH][2].accuracy = 100;
    }
	//Rolling Rock
	if (gPlayerData.elements.earth >= 29) {
        SpellTablePointersBrian[EARTH][3].size = 12.0f;
		SpellTablePointersBrian[EARTH][3].damage_base = 300;
    }
	if (gPlayerData.elements.earth >= 39) {
        SpellTablePointersBrian[EARTH][3].size = 18.0f;
		SpellTablePointersBrian[EARTH][3].damage_base = 400;
    }
	//Weakness
	if (gPlayerData.elements.earth >= 21) {
		SpellTablePointersBrian[EARTH][4].defenseType = 1;	
	}
	if (gPlayerData.elements.earth >= 35) {
		SpellTablePointersBrian[EARTH][4].autoHitBool = 1;	
		SpellTablePointersBrian[EARTH][4].ifAttackDisappearOnHit = 5;
		SpellTablePointersBrian[EARTH][4].target = 0;
		SpellTablePointersBrian[EARTH][4].range = 8;
	}
	if (gPlayerData.elements.water >= 15) {
		SpellTablePointersBrian[EARTH][4].accuracy = 95;	
	}
	if (gPlayerData.elements.water >= 35) {
		SpellTablePointersBrian[EARTH][4].accuracy = 100;	
	}
	//Unused
	//Magnet Rock
	if (gPlayerData.elements.earth >= 25) {
		SpellTablePointersBrian[EARTH][6].agilityType = 3;	
	}
	if (gPlayerData.elements.earth >= 31) {
		SpellTablePointersBrian[EARTH][6].movementType = 1;	
	}
	if (gPlayerData.elements.wind >= 20) {
		SpellTablePointersBrian[EARTH][6].autoHitBool = 1;	
	}
	//Unused
	//Avalanche
	if (gPlayerData.elements.earth >= 51) {
        SpellTablePointersBrian[EARTH][8].attackCount = 40;
		SpellTablePointersBrian[EARTH][8].damage_base = 100;
    }
	//Mag Absorb
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
	//Frozen Blade
	//Rock Storm
	if (gPlayerData.elements.wind >= 20) {
        SpellTablePointersBrian[EARTH][11].attackCount = 4;
		SpellTablePointersBrian[EARTH][11].damage_base = 91;
    }
	if (gPlayerData.elements.earth >= 40) {
		SpellTablePointersBrian[EARTH][11].damage_base = 105;
    }
	//Blessing
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
	//Hell Spikes
	if (gPlayerData.elements.wind >= 45) {
        SpellTablePointersBrian[EARTH][13].attackCount = 8;
		SpellTablePointersBrian[EARTH][13].damage_base = 165;
    }
	//Unused
}

void ChangeBrianWaterSpells(void) {
	//Water Pillar
    if (gPlayerData.elements.water >= 4) {
        SpellTablePointersBrian[WATER][0].size = 10.0f;
		SpellTablePointersBrian[WATER][0].damage_base = 374;
    }
	if (gPlayerData.elements.water >= 13) {
        SpellTablePointersBrian[WATER][0].size = 15.0f;
		SpellTablePointersBrian[WATER][0].damage_base = 382;
    }
	if (gPlayerData.elements.water >= 31) {
        SpellTablePointersBrian[WATER][0].size = 20.0f;
		SpellTablePointersBrian[WATER][0].damage_base = 400;
    }
	if (gPlayerData.elements.water >= 50) {
        SpellTablePointersBrian[WATER][0].size = 25.0f;
		SpellTablePointersBrian[WATER][0].damage_base = 425;
    }
	//Unused
	//Healing
	if (gPlayerData.elements.earth >= 7) {
		SpellTablePointersBrian[WATER][2].damage_base = 5;
	}
	if (gPlayerData.elements.earth >= 21) {
		SpellTablePointersBrian[WATER][2].damage_base = 7;
	}
	if (gPlayerData.elements.water >= 25) {
		SpellTablePointersBrian[WATER][2].attackCount = 3;
		SpellTablePointersBrian[WATER][2].frameDelayBetweenHits = 1;
	}
	//Soul Searcher
	if (gPlayerData.elements.water >= 33) {
		SpellTablePointersBrian[WATER][3].autoHitBool = 1;	
		SpellTablePointersBrian[WATER][3].ifAttackDisappearOnHit = 5;
		SpellTablePointersBrian[WATER][3].target = 0;
		SpellTablePointersBrian[WATER][3].range = 8;
	}
	if (gPlayerData.elements.fire >= 15) {
		SpellTablePointersBrian[WATER][3].attackCount = 2;	
	}
	if (gPlayerData.elements.fire >= 35) {
		SpellTablePointersBrian[WATER][3].attackCount = 3;	
	}
	//Tidal Wave
	if (gPlayerData.elements.water >= 18) {
		SpellTablePointersBrian[WATER][4].agilityType = 3;
	}
	if (gPlayerData.elements.water >= 25) {
		SpellTablePointersBrian[WATER][4].movementType = 1;
	}
	//Blizzard
	//Ice Knife
	if (gPlayerData.elements.wind >= 17) {
		SpellTablePointersBrian[WATER][6].attackCount = 2;
	}
	if (gPlayerData.elements.wind >= 31) {
		SpellTablePointersBrian[WATER][6].attackCount = 3;
	}
	//Bubble
	if (gPlayerData.elements.wind >= 19) {
		SpellTablePointersBrian[WATER][7].attackCount = 4;
	}
	if (gPlayerData.elements.wind >= 38) {
		SpellTablePointersBrian[WATER][7].attackCount = 5;
	}
	//Escape
	if (gPlayerData.elements.earth >= 11) {
		SpellTablePointersBrian[WATER][8].accuracy = 60;	
	}
	if (gPlayerData.elements.earth >= 21) {
		SpellTablePointersBrian[WATER][8].accuracy = 70;	
	}
	if (gPlayerData.elements.earth >= 31) {
		SpellTablePointersBrian[WATER][8].accuracy = 80;	
	}
	if (gPlayerData.elements.earth >= 41) {
		SpellTablePointersBrian[WATER][8].accuracy = 90;	
	}
	if (gPlayerData.elements.earth >= 50) {
		SpellTablePointersBrian[WATER][8].accuracy = 100;	
	}
	//Teleport
	//Unused
	//Shadow Prison
	if (gPlayerData.elements.water >= 86) {
		SpellTablePointersBrian[WATER][11].autoHitBool = 1;	
		SpellTablePointersBrian[WATER][11].ifAttackDisappearOnHit = 5;
		SpellTablePointersBrian[WATER][11].target = 0;
		SpellTablePointersBrian[WATER][11].range = 8;
	}
	//Stalking Water
	if (gPlayerData.elements.fire >= 33) {
		SpellTablePointersBrian[WATER][12].attackCount = 2;
	}
	if (gPlayerData.elements.fire >= 44) {
		SpellTablePointersBrian[WATER][12].attackCount = 3;
	}
	if (gPlayerData.elements.fire >= 55) {
		SpellTablePointersBrian[WATER][12].attackCount = 4;
	}
	if (gPlayerData.elements.fire >= 66) {
		SpellTablePointersBrian[WATER][12].attackCount = 5;
	}
	//Drain Magic
	if (gPlayerData.elements.earth >= 30) {
		SpellTablePointersBrian[WATER][13].accuracy = 75;	
	}
	if (gPlayerData.elements.earth >= 40) {
		SpellTablePointersBrian[WATER][13].accuracy = 80;	
	}
	if (gPlayerData.elements.earth >= 50) {
		SpellTablePointersBrian[WATER][13].accuracy = 90;	
	}
	if (gPlayerData.elements.earth >= 60) {
		SpellTablePointersBrian[WATER][13].accuracy = 100;	
	}
	//Restore
}

void ChangeBrianWindSpells(void) {
	//Wind Cutter
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
	//Unused
	//Restriction
	if (gPlayerData.elements.wind >= 16) {
		SpellTablePointersBrian[WIND][2].autoHitBool = 1;	
		SpellTablePointersBrian[WIND][2].ifAttackDisappearOnHit = 5;
		SpellTablePointersBrian[WIND][2].target = 0;
		SpellTablePointersBrian[WIND][2].range = 8;
	}
	if (gPlayerData.elements.fire >= 38) {
		SpellTablePointersBrian[WIND][2].accuracy = 85;	
	}
	if (gPlayerData.elements.fire >= 45) {
		SpellTablePointersBrian[WIND][2].accuracy = 95;	
	}
	if (gPlayerData.elements.fire >= 51) {
		SpellTablePointersBrian[WIND][2].accuracy = 100;	
	}
	//Evade
	if (gPlayerData.elements.wind >= 37) {
		SpellTablePointersBrian[WIND][3].movementType = 2;	
	}
	if (gPlayerData.elements.water >= 40) {
		SpellTablePointersBrian[WIND][3].agilityType = 2;	
	}
	//Silence
	if (gPlayerData.elements.wind >= 42) {
		SpellTablePointersBrian[WIND][4].autoHitBool = 1;	
		SpellTablePointersBrian[WIND][4].ifAttackDisappearOnHit = 5;
		SpellTablePointersBrian[WIND][4].target = 0;
		SpellTablePointersBrian[WIND][4].range = 8;
	}
	if (gPlayerData.elements.earth >= 38) {
		SpellTablePointersBrian[WIND][4].accuracy = 85;	
	}
	if (gPlayerData.elements.earth >= 45) {
		SpellTablePointersBrian[WIND][4].accuracy = 95;	
	}
	if (gPlayerData.elements.earth >= 51) {
		SpellTablePointersBrian[WIND][4].accuracy = 100;	
	}
	//Unused
	//Large Cutter
	//Unused
	//Wind Bomb
	if (gPlayerData.elements.water >= 25) {
		SpellTablePointersBrian[WIND][8].agilityType = 3;
	}
	if (gPlayerData.elements.water >= 31) {
		SpellTablePointersBrian[WIND][8].movementType = 1;
	}
	if (gPlayerData.elements.wind >= 31) {
        SpellTablePointersBrian[WIND][8].size = 30.0f;
		SpellTablePointersBrian[WIND][8].damage_base = 275;
	}
	//Unused
	//Tornado
	if (gPlayerData.elements.wind >= 36) {
        SpellTablePointersBrian[WIND][10].attackCount = 4;
    }
	if (gPlayerData.elements.wind >= 48) {
        SpellTablePointersBrian[WIND][10].attackCount = 6;
    }
	//Unused
	//Unused
	//Debilitate
	//Ultimate Wind
}

void ChangeBrianBossSpells(void) {
	//Sol_Panch
	//Sol_Toge
	//Zel_Cat
	//Zel_Beam
	//Npt_Ball
	//Npt_Turn
	//Fag_Ball
	//Fag_Bom
	//Sil_Laser
	//Sil_Cat
	//Gil_Punch
	//Gil_Crow
	//Ges_Cat
	//Ges_Beam
	//On_Light
	//On_Wave
	//On_Needle
}

