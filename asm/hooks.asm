DrawImagesAsm:
    JAL DrawImages
    NOP
    LUI t6, 0xE900
    LW v1, 0x0000 (s0)
    J 0x80001744
    LUI a0, 0x0200

dontRemoveWings:
    BEQZ v0, noItemConsumption
    NOP
    //was 1, item will be consumed. check if it should actually be consumed

    //all of this to get the item id chosen
    LUI t8, 0x8009
    LHU t8, 0x2876 (t8)

    LUI t9, 0x8009
    LUI t6, 0x8009
    LW t9, 0xC760 (t9)
    LW t6, 0xC764 (t6)

    LUI a0, 0x8009
    ADDU t8, t9, t6
    ADDU a0, a0, t8
    JAL PreventWingsConsumption
    LBU a0, 0xCF78 (a0) //load selected item

    //if 1, is wings, skip usage
    BNEZ v0, noItemConsumption
    NOP

    //isn't wings, proceed as normal consumed item
    J 0x800220E4
    LUI t5, 0x8009 //restore from hook

    noItemConsumption:
    J 0x80022214
    LUI t5, 0x8009 //restore from hook
