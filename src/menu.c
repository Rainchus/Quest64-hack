#include "Quest64.h"

s32 menuRootXPos = 10;
s32 menuRootYPos = 70;
s32 currPageNo = 0;
s32 currOptionNo = 0;
s32 isMenuActive = 1;

s32 toggleHideSavestateText(void);
s32 toggleHideLoadstateText(void);

char string_ON[] = {
    "ON"
};

char string_OFF[] = {
    "OFF"
};

char* ONAndOFF[] = {
    string_OFF,
    string_ON,
};

char** page0Strings[] = {
    ONAndOFF, //
    ONAndOFF, //
    ONAndOFF, //
};

menuPage page0 = {
    3, //optionCount
    0, //pageIndex
    { //options
        "OPTION 0",
        "OPTION 1",
        "OPTION 2"
    },
    { //menuProc
        &toggleHideSavestateText,
        &toggleHideLoadstateText,
        &toggleHideLoadstateText,
    },
    { //flags
        TOGGLE_HIDE_SAVESTATE_TEXT,
        TOGGLE_HIDE_LOADSTATE_TEXT,
        TOGGLE_HIDE_LOADSTATE_TEXT,
    },

    page0Strings,
    
};

menuPage* pageList[] = {
    &page0
};

s32 pageListTotal = ARRAY_COUNT(pageList);

s8 toggles[] = {
    2,  // NO_TOGGLE
    //page 0
    1,  // TOGGLE_HIDE_SAVESTATE_TEXT
    1,  // TOGGLE_HIDE_SAVESTATE_TEXT
    1,  // TOGGLE_HIDE_SAVESTATE_TEXT
};

s32 toggleHideSavestateText(void) {
    toggles[TOGGLE_HIDE_SAVESTATE_TEXT] ^= 1;
    return 1;
}

s32 toggleHideLoadstateText(void) {
    toggles[TOGGLE_HIDE_LOADSTATE_TEXT] ^= 1;
    return 1;
}

void pageMainDisplay(s32 currPageNo, s32 currOptionNo) {
    int i;
    menuPage* currPage = pageList[currPageNo];
    s32 xPos = menuRootXPos;
    s32 yPos = menuRootYPos;

    s32 strLength;
    char menuOptionBuffer[64];
    s32 color = BLACK;
    
    for (i = 0; i < currPage->optionCount; i++) {
        _sprintf(menuOptionBuffer, "%s", currPage->options[i]);
        strLength = strlen(menuOptionBuffer);

        if (i == currOptionNo) {
            //colorTextWrapper(textCyanColor);
            color = GREEN;
        } else {
            color = BLACK;
        }

        if (currPage->flags[i] == -1) {
            func_80020B4C(xPos, (yPos + (i * 10)), color, menuOptionBuffer);
            continue;
        }

        func_80020B4C(xPos, (yPos + (i * 10)), color, menuOptionBuffer);
        
        // //clear buffer
        // _bzero(&menuOptionBuffer, sizeof(menuOptionBuffer));

        // if (toggles[currPage->flags[i]] == 0) {
        //     color = RED;
        // } else {
        //     color = GREEN;
        // }

        // if (currPage->selectionText[i][toggles[currPage->flags[i]]] != 0) {
        //     _sprintf(menuOptionBuffer, currPage->selectionText[i][toggles[currPage->flags[i]]]);
        // }

        // func_80020B4C(xPos + (strLength * X_COORD_PER_LETTER), (yPos + (i * 15.0f)), color, menuOptionBuffer); 

    }
}

////////
void updateMenuInput(void) {
    if (buttonsPressed & CONT_UP) {
        if (currOptionNo > 0) {
            currOptionNo--;
        } else {
            currOptionNo = pageList[currPageNo]->optionCount - 1; //wrap menu
        }
    }
    else if (buttonsPressed & CONT_DOWN) {
        if (currOptionNo < pageList[currPageNo]->optionCount - 1) {
            currOptionNo++;
            //playSound(0x2A, (void*)0x80168DA8, 0);
        } else {
            currOptionNo = 0; //wrap menu
        }
    }
    else if (buttonsPressed & CONT_LEFT) {
        if (currPageNo > 0) {
            currPageNo--;
            currOptionNo = 0;
        }
    }
    else if (buttonsPressed & CONT_RIGHT) {
        if (currPageNo < pageListTotal - 1) {
            currPageNo++;
            currOptionNo = 0;
        }
    }
    else if (buttonsPressed & CONT_B) {
        isMenuActive = 0;
    }
    else if (buttonsPressed & CONT_A) {
        pageList[currPageNo]->menuProc[currOptionNo]();
    }
}

typedef struct BoxStruct {
    void* unk_00;
    s32 xPos;
    s32 yPos;
    s32 width;
    s32 height;
    s32 unk_14;
    s32 unk_18;
    s32 unk_1C;
    s32 unk_20;
} BoxStruct;

BoxStruct Box1 = {
    .unk_00 = (void*)0x803A6F60,
    .xPos = 0,
    .yPos = 0,
    .width = 94,
    .height = 10,
    .unk_14 = 0x64,
    .unk_18 = 0x2C,
    .unk_1C = 0x400,
    .unk_20 = 0x400
};

void DrawBoxBackgroundForText(void) {
    s32 xPos = menuRootXPos;
    s32 yPos = menuRootYPos;

    xPos -= 5;
    yPos -= 3;

    drawBoxBehindEnemyName(Box1.unk_00, Box1.xPos + xPos, Box1.yPos + yPos,
        Box1.width, Box1.height, Box1.unk_14, Box1.unk_18, Box1.unk_1C, Box1.unk_20);
        yPos += 10;
    drawBoxBehindEnemyName(Box1.unk_00, Box1.xPos + xPos, Box1.yPos + yPos,
        Box1.width, Box1.height, Box1.unk_14, Box1.unk_18, Box1.unk_1C, Box1.unk_20);
        yPos += 10;
    drawBoxBehindEnemyName(Box1.unk_00, Box1.xPos + xPos, Box1.yPos + yPos,
        Box1.width, Box1.height, Box1.unk_14, Box1.unk_18, Box1.unk_1C, Box1.unk_20);
        yPos += 10;
    drawBoxBehindEnemyName(Box1.unk_00, Box1.xPos + xPos, Box1.yPos + yPos,
        Box1.width, Box1.height, Box1.unk_14, Box1.unk_18, Box1.unk_1C, Box1.unk_20);
        yPos += 10;
    drawBoxBehindEnemyName(Box1.unk_00, Box1.xPos + xPos, Box1.yPos + yPos,
        Box1.width, Box1.height, Box1.unk_14, Box1.unk_18, Box1.unk_1C, Box1.unk_20);
        yPos += 10;
    drawBoxBehindEnemyName(Box1.unk_00, Box1.xPos + xPos, Box1.yPos + yPos,
        Box1.width, Box1.height, Box1.unk_14, Box1.unk_18, Box1.unk_1C, Box1.unk_20);
        yPos += 10;
    drawBoxBehindEnemyName(Box1.unk_00, Box1.xPos + xPos, Box1.yPos + yPos,
        Box1.width, Box1.height, Box1.unk_14, Box1.unk_18, Box1.unk_1C, Box1.unk_20);
        yPos += 10;
    drawBoxBehindEnemyName(Box1.unk_00, Box1.xPos + xPos, Box1.yPos + yPos,
        Box1.width, Box1.height, Box1.unk_14, Box1.unk_18, Box1.unk_1C, Box1.unk_20);
}