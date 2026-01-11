//Payload related information
.definelabel PAYLOAD_START_ROM, 0x1000000

//hook game entry to dma our stuff from ROM to RAM
.headersize 0x7FFFF400 //ran once on boot
.org 0x80000400
    //load our custom code/data into ram
    LUI sp, 0x8007
    ADDIU sp, sp, 0x4E90
    ADDU a0, r0, r0
    LI a1, PAYLOAD_START_ROM
    //these ram symbols are defined in main.asm
    LI a2, PAYLOAD_START_RAM
    LI a3, PAYLOAD_END_RAM - PAYLOAD_START_RAM
    JAL osPiRawStartDma
    NOP

    dmaBusyLoop:
    LUI t0, 0xA460
    LW t1, 0x0010 (t0)
    ANDI t1, t1, 0x0001
    BNEZ t1, dmaBusyLoop
    NOP

    JAL ClearBSS
    NOP
    //jump where the game normally goes after clearing bss
    J 0x80000450
    NOP

.org 0x80024FC0
    J mainCFunctionWrapper
    ADDIU a0, sp, 0x1A0 //restore from hook

.org 0x80024FF8
    J mainCFunctionWrapper
    SH t6, 0x005C (sp) //restore from hook

//extends the color palettes for a font
.org 0x80020BA8
    LUI t6, hi(ExtendedColorPalettes)

.org 0x80020BBC
    LW t6, lo(ExtendedColorPalettes) (t6)

//dont remove wings when used through normal item menu
.org 0x800220DC
    J dontRemoveWings
    NOP

//sort items to front of inventory when obtained
.org 0x800212A0
    J newAddItemToInventory
    NOP

.org 0x8000173C
    J DrawImagesAsm
    NOP

//custom dpad drawing and wing usage stuff
.org 0x8001EBDC
    J func_8001EBDC_Hook
    NOP
.org 0x800212E4
    J func_800212E4_Hook
    NOP

.org 0x80023AC0
    J zeroCheck
    NOP