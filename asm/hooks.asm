storeBattleRandomRollHook:
    LI t2, storedRandValue
    SW v0, 0x0000 (t2) //store the rand value rolled
    LI t2, storedRandDisplayTimer
    ORI t3, r0, 0x005A
    SW t3, 0x0000 (t2)
    LUI t2, 0x8009
    J 0x8001C6A0
    LHU t2, 0xC578 (t2)


CheckIfItemShouldBeRemovedFromInventory: //a0 holds item id
    LI t0, itemToNotRemoveFromInventory
    ORI t1, r0, 0x00FF
    checkItemLoop:
    LBU t2, 0x0000 (t0)
    BEQ t1, t2, endOfList
     ORI v1, r0, 0
    BEQ a0, t2, dontRemoveItem
     ORI v1, r0, 1 //return dont remove item
    BEQ r0, r0, checkItemLoop
    ADDIU t0, t0, 1

    endOfList:
    dontRemoveItem:
    JR RA
    NOP

itemCheck:
    LUI t9, 0x8009
    LW t0, 0xC760 (t9)
    LW t1, 0xC764 (t9)
    LUI a0, 0x8009
    ADDU t2, t0, t1
    ADDU a0, a0, t2
    JAL CheckIfItemShouldBeRemovedFromInventory //returns to v1 as a test
    LBU a0, 0xCF78 (a0) //load item chosen

    LUI t5, 0x8009 //restore from hook
    LW t5, 0xC760 (t5) //restore from hook
    
    BEQZ v1, normalExit
    NOP

    //shouldn't remove item
    J 0x80022214
    LUI v0, 0x8009  //restore from hook

    normalExit:
    J 0x800220EC
    LUI v0, 0x8009  //restore from hook



itemToNotRemoveFromInventory:
    .byte 0x0E
    .byte 0x0F
    .byte 0xFF