// #include "../include/Quest64.h"

// NpcData npc_data_array[] = {

// /* Edgar (Melrode) */
// {
// /* .unk_00 */ 		0x0000,
// /* .unk_02 */ 		0x0001,
// /* .unk_04 */ 		0x01,
// /* .unk_05 */ 		0x00,
// /* .unk06 */ 		0x00,
// /* .unk07 */ 		0x00,
// /* .textOffset1 */ 	0x1300,
// /* .textOffset2 */ 	0x0000,
// /* .unkC */ 		0x00000000, //unknown type (unused?)
// /* .modelData */ 	0x80215074,
// /* .npcName */ 		0x8026E210,
// /* .unk18 */ 		0x00000000, //unknown type (unused?)
// /* .pos */ 			{ -57.0f, -535.0f },
// /* .rotation */ 	-3.1415998935699463f,
// /* .sizeScaler */ 	0.07000000029802322f,
// },

// /* Kain (Melrode) */
// {
// /* .unk_00 */ 		0x0000,
// /* .unk_02 */ 		0x0001,
// /* .unk_04 */ 		0x02,
// /* .unk_05 */ 		0x00,
// /* .unk06 */ 		0x00,
// /* .unk07 */ 		0x00,
// /* .textOffset1 */ 	0x1418,
// /* .textOffset2 */ 	0x0000,
// /* .unkC */ 		0x00000000, //unknown type (unused?)
// /* .modelData */ 	0x802176B0,
// /* .npcName */ 		0x8026E21C,
// /* .unk18 */ 		0x00000000, //unknown type (unused?)
// /* .pos */ 			{ -341.0f, -209.0f },
// /* .rotation */ 	-0.6980999708175659f,
// /* .sizeScaler */ 	0.07000000029802322f,
// },

// /* Sandra (Melrode) */
// {
// /* .unk_00 */ 		0x0000,
// /* .unk_02 */ 		0x0001,
// /* .unk_04 */ 		0x01,
// /* .unk_05 */ 		0x00,
// /* .unk06 */ 		0x00,
// /* .unk07 */ 		0x00,
// /* .textOffset1 */ 	0x1638,
// /* .textOffset2 */ 	0x0000,
// /* .unkC */ 		0x00000000, //unknown type (unused?)
// /* .modelData */ 	0x8021B978,
// /* .npcName */ 		0x8026E230,
// /* .unk18 */ 		0x00030000, //unknown type (unused?)
// /* .pos */ 			{ 15.0f, -233.0f },
// /* .rotation */ 	1.5707999467849731f,
// /* .sizeScaler */ 	0.07000000029802322f,
// },

// /* Amanda (Melrode) */
// {
// /* .unk_00 */ 		0x0000,
// /* .unk_02 */ 		0x0001,
// /* .unk_04 */ 		0x01,
// /* .unk_05 */ 		0x00,
// /* .unk06 */ 		0x00,
// /* .unk07 */ 		0x00,
// /* .textOffset1 */ 	0x1740,
// /* .textOffset2 */ 	0x0000,
// /* .unkC */ 		0x00000000, //unknown type (unused?)
// /* .modelData */ 	0x8021E56C,
// /* .npcName */ 		0x8026E23C,
// /* .unk18 */ 		0x00030000, //unknown type (unused?)
// /* .pos */ 			{ 31.0f, -233.0f },
// /* .rotation */ 	-1.5707999467849731f,
// /* .sizeScaler */ 	0.07000000029802322f,
// },

// /* Frank (Melrode) */
// {
// /* .unk_00 */ 		0x0000,
// /* .unk_02 */ 		0x0001,
// /* .unk_04 */ 		0x01,
// /* .unk_05 */ 		0x00,
// /* .unk06 */ 		0x00,
// /* .unk07 */ 		0x00,
// /* .textOffset1 */ 	0x17A0,
// /* .textOffset2 */ 	0x0000,
// /* .unkC */ 		0x00000000, //unknown type (unused?)
// /* .modelData */ 	0x80220930,
// /* .npcName */ 		0x8026E248,
// /* .unk18 */ 		0x00000000, //unknown type (unused?)
// /* .pos */ 			{ -50.0f, -23.0f },
// /* .rotation */ 	-3.1415998935699463f,
// /* .sizeScaler */ 	0.07000000029802322f,
// },

// /* Billy (Melrode) */
// {
// /* .unk_00 */ 		0x0000,
// /* .unk_02 */ 		0x0001,
// /* .unk_04 */ 		0x01,
// /* .unk_05 */ 		0x00,
// /* .unk06 */ 		0x00,
// /* .unk07 */ 		0x00,
// /* .textOffset1 */ 	0x17E8,
// /* .textOffset2 */ 	0x0000,
// /* .unkC */ 		0x00000000, //unknown type (unused?)
// /* .modelData */ 	0x80223370,
// /* .npcName */ 		0x8026E254,
// /* .unk18 */ 		0x00000000, //unknown type (unused?)
// /* .pos */ 			{ -21.0f, -46.0f },
// /* .rotation */ 	-1.5707999467849731f,
// /* .sizeScaler */ 	0.07000000029802322f,
// },

// /* Todd (Melrode) */
// {
// /* .unk_00 */ 		0x0000,
// /* .unk_02 */ 		0x0001,
// /* .unk_04 */ 		0x01,
// /* .unk_05 */ 		0x00,
// /* .unk06 */ 		0x00,
// /* .unk07 */ 		0x00,
// /* .textOffset1 */ 	0x1830,
// /* .textOffset2 */ 	0x0000,
// /* .unkC */ 		0x00000000, //unknown type (unused?)
// /* .modelData */ 	0x8022528C,
// /* .npcName */ 		0x8026E260,
// /* .unk18 */ 		0x00000000, //unknown type (unused?)
// /* .pos */ 			{ -76.0f, -17.0f },
// /* .rotation */ 	-3.1415998935699463f,
// /* .sizeScaler */ 	0.07000000029802322f,
// },

// /* Pete (Melrode) */
// {
// /* .unk_00 */ 		0x0000,
// /* .unk_02 */ 		0x0001,
// /* .unk_04 */ 		0x01,
// /* .unk_05 */ 		0x00,
// /* .unk06 */ 		0x00,
// /* .unk07 */ 		0x00,
// /* .textOffset1 */ 	0x1868,
// /* .textOffset2 */ 	0x0000,
// /* .unkC */ 		0x00000000, //unknown type (unused?)
// /* .modelData */ 	0x80227240,
// /* .npcName */ 		0x8026E26C,
// /* .unk18 */ 		0x00000000, //unknown type (unused?)
// /* .pos */ 			{ -76.0f, -44.0f },
// /* .rotation */ 	1.5707999467849731f,
// /* .sizeScaler */ 	0.07000000029802322f,
// },

// /* Ralph (Melrode) */
// {
// /* .unk_00 */ 		0x0000,
// /* .unk_02 */ 		0x0001,
// /* .unk_04 */ 		0x01,
// /* .unk_05 */ 		0x00,
// /* .unk06 */ 		0x00,
// /* .unk07 */ 		0x00,
// /* .textOffset1 */ 	0x1940,
// /* .textOffset2 */ 	0x0000,
// /* .unkC */ 		0x00000000, //unknown type (unused?)
// /* .modelData */ 	0x8022CA74,
// /* .npcName */ 		0x8026E284,
// /* .unk18 */ 		0x00000000, //unknown type (unused?)
// /* .pos */ 			{ 75.0f, -286.0f },
// /* .rotation */ 	1.5707999467849731f,
// /* .sizeScaler */ 	0.07000000029802322f,
// },

// /* Sheep (Melrode) */
// {
// /* .unk_00 */ 		0x0000,
// /* .unk_02 */ 		0x0001,
// /* .unk_04 */ 		0x02,
// /* .unk_05 */ 		0x00,
// /* .unk06 */ 		0x00,
// /* .unk07 */ 		0x00,
// /* .textOffset1 */ 	0x1A38,
// /* .textOffset2 */ 	0x0000,
// /* .unkC */ 		0x00000000, //unknown type (unused?)
// /* .modelData */ 	0x802107D0,
// /* .npcName */ 		0x8026E290,
// /* .unk18 */ 		0x00000000, //unknown type (unused?)
// /* .pos */ 			{ -372.0f, -350.0f },
// /* .rotation */ 	-0.5934000015258789f,
// /* .sizeScaler */ 	0.09799999743700027f,
// },

// /* Sheep (Melrode) */
// {
// /* .unk_00 */ 		0x0000,
// /* .unk_02 */ 		0x0001,
// /* .unk_04 */ 		0x02,
// /* .unk_05 */ 		0x00,
// /* .unk06 */ 		0x00,
// /* .unk07 */ 		0x00,
// /* .textOffset1 */ 	0x1A50,
// /* .textOffset2 */ 	0x0000,
// /* .unkC */ 		0x00000000, //unknown type (unused?)
// /* .modelData */ 	0x8021081C,
// /* .npcName */ 		0x8026E29C,
// /* .unk18 */ 		0x00000000, //unknown type (unused?)
// /* .pos */ 			{ -370.0f, -273.0f },
// /* .rotation */ 	1.3614000082015991f,
// /* .sizeScaler */ 	0.07000000029802322f,
// },

// /* Horse (Monestary) */
// {
// /* .unk_00 */ 		0x0001,
// /* .unk_02 */ 		0x0001,
// /* .unk_04 */ 		0x01,
// /* .unk_05 */ 		0x02,
// /* .unk06 */ 		0x00,
// /* .unk07 */ 		0x00,
// /* .textOffset1 */ 	0x2A10,
// /* .textOffset2 */ 	0x0000,
// /* .unkC */ 		0x00000000, //unknown type (unused?)
// /* .modelData */ 	0x8023E8E4,
// /* .npcName */ 		0x8026E34C,
// /* .unk18 */ 		0x00000000, //unknown type (unused?)
// /* .pos */ 			{ 1109.0f, -721.0f },
// /* .rotation */ 	0.0f,
// /* .sizeScaler */ 	0.07000000029802322f,
// },

// /* Rufus (Dondoran) */
// {
// /* .unk_00 */ 		0x0000,
// /* .unk_02 */ 		0x0005,
// /* .unk_04 */ 		0x02,
// /* .unk_05 */ 		0x00,
// /* .unk06 */ 		0x00,
// /* .unk07 */ 		0x00,
// /* .textOffset1 */ 	0x2A28,
// /* .textOffset2 */ 	0x2AE0,
// /* .unkC */ 		0x00000000, //unknown type (unused?)
// /* .modelData */ 	0x80217C20,
// /* .npcName */ 		0x8026388C,
// /* .unk18 */ 		0x00000000, //unknown type (unused?)
// /* .pos */ 			{ 0.0f, -210.0f },
// /* .rotation */ 	0.0f,
// /* .sizeScaler */ 	0.07000000029802322f,
// },

// /* Kathrin (Dondoran) */
// {
// /* .unk_00 */ 		0x0000,
// /* .unk_02 */ 		0x0001,
// /* .unk_04 */ 		0x01,
// /* .unk_05 */ 		0x00,
// /* .unk06 */ 		0x00,
// /* .unk07 */ 		0x00,
// /* .textOffset1 */ 	0x2EB0,
// /* .textOffset2 */ 	0x0000,
// /* .unkC */ 		0x00000000, //unknown type (unused?)
// /* .modelData */ 	0x802202C0,
// /* .npcName */ 		0x802638BC,
// /* .unk18 */ 		0x00000000, //unknown type (unused?)
// /* .pos */ 			{ -79.0f, -55.0f },
// /* .rotation */ 	0.0f,
// /* .sizeScaler */ 	0.07000000029802322f,
// },

// /* Elena (Dondoran) */
// {
// /* .unk_00 */ 		0x0000,
// /* .unk_02 */ 		0x0005,
// /* .unk_04 */ 		0x01,
// /* .unk_05 */ 		0x00,
// /* .unk06 */ 		0x00,
// /* .unk07 */ 		0x00,
// /* .textOffset1 */ 	0x3248,
// /* .textOffset2 */ 	0x3358,
// /* .unkC */ 		0x00000000, //unknown type (unused?)
// /* .modelData */ 	0x80227C48,
// /* .npcName */ 		0x802638E8,
// /* .unk18 */ 		0x00000000, //unknown type (unused?)
// /* .pos */ 			{ -79.0f, -39.0f },
// /* .rotation */ 	-3.1415998935699463f,
// /* .sizeScaler */ 	0.07000000029802322f,
// },

// /* Morague (Don Flats Boat) */
// {
// /* .unk_00 */ 		0x0001,
// /* .unk_02 */ 		0x0005,
// /* .unk_04 */ 		0x01,
// /* .unk_05 */ 		0x00,
// /* .unk06 */ 		0x00,
// /* .unk07 */ 		0x02,
// /* .textOffset1 */ 	0xA1C0,
// /* .textOffset2 */ 	0xA2A0,
// /* .unkC */ 		0x00000000, //unknown type (unused?)
// /* .modelData */ 	0x802188EC,
// /* .npcName */ 		0x8026A7E4,
// /* .unk18 */ 		0x00000000, //unknown type (unused?)
// /* .pos */ 			{ 220.0f, 1233.0f },
// /* .rotation */ 	-1.5707999467849731f,
// /* .sizeScaler */ 	0.07000000029802322f,
// },

// /* Leonitis (Larapool) */
// {
// /* .unk_00 */ 		0x0000,
// /* .unk_02 */ 		0x0001,
// /* .unk_04 */ 		0x01,
// /* .unk_05 */ 		0x00,
// /* .unk06 */ 		0x00,
// /* .unk07 */ 		0x00,
// /* .textOffset1 */ 	0x49B0,
// /* .textOffset2 */ 	0x0000,
// /* .unkC */ 		0x00000000, //unknown type (unused?)
// /* .modelData */ 	0x802162A8,
// /* .npcName */ 		0x80244F2C,
// /* .unk18 */ 		0x00000000, //unknown type (unused?)
// /* .pos */ 			{ -50.0f, -29.0f },
// /* .rotation */ 	2.3561999797821045f,
// /* .sizeScaler */ 	0.07000000029802322f,
// },

// /* Russel (Larapool) */
// {
// /* .unk_00 */ 		0x0000,
// /* .unk_02 */ 		0x0001,
// /* .unk_04 */ 		0x01,
// /* .unk_05 */ 		0x00,
// /* .unk06 */ 		0x00,
// /* .unk07 */ 		0x00,
// /* .textOffset1 */ 	0x4C30,
// /* .textOffset2 */ 	0x0000,
// /* .unkC */ 		0x00000000, //unknown type (unused?)
// /* .modelData */ 	0x80219534,
// /* .npcName */ 		0x80244F48,
// /* .unk18 */ 		0x00000000, //unknown type (unused?)
// /* .pos */ 			{ 198.0f, -183.0f },
// /* .rotation */ 	1.0471999645233154f,
// /* .sizeScaler */ 	0.07000000029802322f,
// },

// /* Ellis (Larapool) */
// {
// /* .unk_00 */ 		0x0000,
// /* .unk_02 */ 		0x0001,
// /* .unk_04 */ 		0x01,
// /* .unk_05 */ 		0x00,
// /* .unk06 */ 		0x00,
// /* .unk07 */ 		0x00,
// /* .textOffset1 */ 	0x4D18,
// /* .textOffset2 */ 	0x0000,
// /* .unkC */ 		0x00000000, //unknown type (unused?)
// /* .modelData */ 	0x8021D3BC,
// /* .npcName */ 		0x80244F60,
// /* .unk18 */ 		0x00000000, //unknown type (unused?)
// /* .pos */ 			{ -35.0f, -44.0f },
// /* .rotation */ 	-0.7853999733924866f,
// /* .sizeScaler */ 	0.07000000029802322f,
// },

// /* Morague (West Carmagh Boat) */
// {
// /* .unk_00 */ 		0x0001,
// /* .unk_02 */ 		0x0005,
// /* .unk_04 */ 		0x01,
// /* .unk_05 */ 		0x00,
// /* .unk06 */ 		0x00,
// /* .unk07 */ 		0x02,
// /* .textOffset1 */ 	0xA2D8,
// /* .textOffset2 */ 	0xA3B0,
// /* .unkC */ 		0x00000000, //unknown type (unused?)
// /* .modelData */ 	0x802188EC,
// /* .npcName */ 		0x8026A7E4,
// /* .unk18 */ 		0x00000000, //unknown type (unused?)
// /* .pos */ 			{ 1542.0f, 70.0f },
// /* .rotation */ 	0.7678999900817871f,
// /* .sizeScaler */ 	0.07000000029802322f,
// },

// /* Rick (Normoon) */
// {
// /* .unk_00 */ 		0x0000,
// /* .unk_02 */ 		0x0005,
// /* .unk_04 */ 		0x02,
// /* .unk_05 */ 		0x00,
// /* .unk06 */ 		0x00,
// /* .unk07 */ 		0x01,
// /* .textOffset1 */ 	0x6228,
// /* .textOffset2 */ 	0x62A0,
// /* .unkC */ 		0x00000000, //unknown type (unused?)
// /* .modelData */ 	0x802104AC,
// /* .npcName */ 		0x80239740,
// /* .unk18 */ 		0x00000000, //unknown type (unused?)
// /* .pos */ 			{ 63.0f, 220.0f },
// /* .rotation */ 	1.4835000038146973f,
// /* .sizeScaler */ 	0.07000000029802322f,
// },

// /* Kevin (Normoon) */
// {
// /* .unk_00 */ 		0x0000,
// /* .unk_02 */ 		0x0005,
// /* .unk_04 */ 		0x02,
// /* .unk_05 */ 		0x00,
// /* .unk06 */ 		0x00,
// /* .unk07 */ 		0x01,
// /* .textOffset1 */ 	0x6318,
// /* .textOffset2 */ 	0x63A0,
// /* .unkC */ 		0x00000000, //unknown type (unused?)
// /* .modelData */ 	0x80212050,
// /* .npcName */ 		0x8023974C,
// /* .unk18 */ 		0x00000000, //unknown type (unused?)
// /* .pos */ 			{ -5.0f, -520.0f },
// /* .rotation */ 	2.8798000812530518f,
// /* .sizeScaler */ 	0.07000000029802322f,
// },

// /* Oscar (Normoon) */
// {
// /* .unk_00 */ 		0x0000,
// /* .unk_02 */ 		0x0005,
// /* .unk_04 */ 		0x02,
// /* .unk_05 */ 		0x00,
// /* .unk06 */ 		0x00,
// /* .unk07 */ 		0x01,
// /* .textOffset1 */ 	0x6418,
// /* .textOffset2 */ 	0x6520,
// /* .unkC */ 		0x00000000, //unknown type (unused?)
// /* .modelData */ 	0x802139C4,
// /* .npcName */ 		0x80239758,
// /* .unk18 */ 		0x00000000, //unknown type (unused?)
// /* .pos */ 			{ 20.0f, 32.0f },
// /* .rotation */ 	-1.5707999467849731f,
// /* .sizeScaler */ 	0.07000000029802322f,
// },

// /* Morague (Limelin Boat) */
// {
// /* .unk_00 */ 		0x0001,
// /* .unk_02 */ 		0x0001,
// /* .unk_04 */ 		0x01,
// /* .unk_05 */ 		0x00,
// /* .unk06 */ 		0x00,
// /* .unk07 */ 		0x00,
// /* .textOffset1 */ 	0xA448,
// /* .textOffset2 */ 	0x0000,
// /* .unkC */ 		0x00000000, //unknown type (unused?)
// /* .modelData */ 	0x802188EC,
// /* .npcName */ 		0x8026A7E4,
// /* .unk18 */ 		0x00000000, //unknown type (unused?)
// /* .pos */ 			{ -2105.0f, -252.0f },
// /* .rotation */ 	-2.3561999797821045f,
// /* .sizeScaler */ 	0.07000000029802322f,
// },

// /* Nick (Limelin) */
// {
// /* .unk_00 */ 		0x0000,
// /* .unk_02 */ 		0x0001,
// /* .unk_04 */ 		0x01,
// /* .unk_05 */ 		0x00,
// /* .unk06 */ 		0x00,
// /* .unk07 */ 		0x00,
// /* .textOffset1 */ 	0x6BE0,
// /* .textOffset2 */ 	0x0000,
// /* .unkC */ 		0x00000000, //unknown type (unused?)
// /* .modelData */ 	0x8021886C,
// /* .npcName */ 		0x80267700,
// /* .unk18 */ 		0x00000000, //unknown type (unused?)
// /* .pos */ 			{ -59.0f, 522.0f },
// /* .rotation */ 	-1.5707999467849731f,
// /* .sizeScaler */ 	0.07000000029802322f,
// },

// /* Jade (Limelin) */
// {
// /* .unk_00 */ 		0x0000,
// /* .unk_02 */ 		0x0005,
// /* .unk_04 */ 		0x01,
// /* .unk_05 */ 		0x00,
// /* .unk06 */ 		0x00,
// /* .unk07 */ 		0x03,
// /* .textOffset1 */ 	0x6E28,
// /* .textOffset2 */ 	0x6ED8,
// /* .unkC */ 		0x00000000, //unknown type (unused?)
// /* .modelData */ 	0x80224A5C,
// /* .npcName */ 		0x80267724,
// /* .unk18 */ 		0x00000000, //unknown type (unused?)
// /* .pos */ 			{ -81.0f, 522.0f },
// /* .rotation */ 	1.5707999467849731f,
// /* .sizeScaler */ 	0.07000000029802322f,
// },

// /* Sheldon (Limelin) */
// {
// /* .unk_00 */ 		0x0000,
// /* .unk_02 */ 		0x0005,
// /* .unk_04 */ 		0x02,
// /* .unk_05 */ 		0x00,
// /* .unk06 */ 		0x00,
// /* .unk07 */ 		0x04,
// /* .textOffset1 */ 	0x7018,
// /* .textOffset2 */ 	0x71B0,
// /* .unkC */ 		0x00000000, //unknown type (unused?)
// /* .modelData */ 	0x8021A27C,
// /* .npcName */ 		0x8026773C,
// /* .unk18 */ 		0x00000000, //unknown type (unused?)
// /* .pos */ 			{ -134.0f, 222.0f },
// /* .rotation */ 	0.0f,
// /* .sizeScaler */ 	0.07000000029802322f,
// },

// /* Elgin (Limelin) */
// {
// /* .unk_00 */ 		0x0000,
// /* .unk_02 */ 		0x0005,
// /* .unk_04 */ 		0x02,
// /* .unk_05 */ 		0x00,
// /* .unk06 */ 		0x00,
// /* .unk07 */ 		0x04,
// /* .textOffset1 */ 	0x7330,
// /* .textOffset2 */ 	0x73D8,
// /* .unkC */ 		0x00000000, //unknown type (unused?)
// /* .modelData */ 	0x80221070,
// /* .npcName */ 		0x80267754,
// /* .unk18 */ 		0x00000000, //unknown type (unused?)
// /* .pos */ 			{ 159.0f, 346.0f },
// /* .rotation */ 	0.0f,
// /* .sizeScaler */ 	0.07000000029802322f,
// },

// /* Roy (Limelin) */
// {
// /* .unk_00 */ 		0x0000,
// /* .unk_02 */ 		0x0005,
// /* .unk_04 */ 		0x02,
// /* .unk_05 */ 		0x00,
// /* .unk06 */ 		0x00,
// /* .unk07 */ 		0x04,
// /* .textOffset1 */ 	0x74B8,
// /* .textOffset2 */ 	0x7520,
// /* .unkC */ 		0x00000000, //unknown type (unused?)
// /* .modelData */ 	0x80222C20,
// /* .npcName */ 		0x80267768,
// /* .unk18 */ 		0x00000000, //unknown type (unused?)
// /* .pos */ 			{ 158.0f, 366.0f },
// /* .rotation */ 	-3.1415998935699463f,
// /* .sizeScaler */ 	0.07000000029802322f,
// },

// /* Shannon (Brannoch Castle Roof) */
// {
// /* .unk_00 */ 		0x0004,
// /* .unk_02 */ 		0x0002,
// /* .unk_04 */ 		0x01,
// /* .unk_05 */ 		0x00,
// /* .unk06 */ 		0x00,
// /* .unk07 */ 		0x18,
// /* .textOffset1 */ 	0x0C98,
// /* .textOffset2 */ 	0x0E58,
// /* .unkC */ 		0x00000000, //unknown type (unused?)
// /* .modelData */ 	0x802A2A24,
// /* .npcName */ 		0x802A7BB0,
// /* .unk18 */ 		0x00000000, //unknown type (unused?)
// /* .pos */ 			{ -32.0f, -83.0f },
// /* .rotation */ 	-2.33870005607605f,
// /* .sizeScaler */ 	0.07000000029802322f,
// },

// /* Killiac (Killiacs Ship Sailing) */
// {
// /* .unk_00 */ 		0x0002,
// /* .unk_02 */ 		0x0001,
// /* .unk_04 */ 		0x01,
// /* .unk_05 */ 		0x00,
// /* .unk06 */ 		0x00,
// /* .unk07 */ 		0x00,
// /* .textOffset1 */ 	0x9D28,
// /* .textOffset2 */ 	0x0000,
// /* .unkC */ 		0x00000000, //unknown type (unused?)
// /* .modelData */ 	0x80216A6C,
// /* .npcName */ 		0x8026A790,
// /* .unk18 */ 		0x00000000, //unknown type (unused?)
// /* .pos */ 			{ -15.0f, -53.0f },
// /* .rotation */ 	0.0f,
// /* .sizeScaler */ 	0.07000000029802322f,
// },

// /* Auden (Monestary) */
// {
// /* .unk_00 */ 		0x000A,
// /* .unk_02 */ 		0x0001,
// /* .unk_04 */ 		0x02,
// /* .unk_05 */ 		0x00,
// /* .unk06 */ 		0x00,
// /* .unk07 */ 		0x00,
// /* .textOffset1 */ 	0x2068,
// /* .textOffset2 */ 	0x0000,
// /* .unkC */ 		0x00000000, //unknown type (unused?)
// /* .modelData */ 	0x8022F56C,
// /* .npcName */ 		0x8026E2E4,
// /* .unk18 */ 		0x00000000, //unknown type (unused?)
// /* .pos */ 			{ 11.0f, 0.0f },
// /* .rotation */ 	-1.5707999467849731f,
// /* .sizeScaler */ 	0.07000000029802322f,
// },

// /* Gylmyne (Monestary) */
// {
// /* .unk_00 */ 		0x000A,
// /* .unk_02 */ 		0x0001,
// /* .unk_04 */ 		0x02,
// /* .unk_05 */ 		0x00,
// /* .unk06 */ 		0x00,
// /* .unk07 */ 		0x00,
// /* .textOffset1 */ 	0x2160,
// /* .textOffset2 */ 	0x0000,
// /* .unkC */ 		0x00000000, //unknown type (unused?)
// /* .modelData */ 	0x80230734,
// /* .npcName */ 		0x8026E2F0,
// /* .unk18 */ 		0x00000000, //unknown type (unused?)
// /* .pos */ 			{ -11.0f, 0.0f },
// /* .rotation */ 	1.5707999467849731f,
// /* .sizeScaler */ 	0.07000000029802322f,
// },

// /* Marmaduke (Monestary) */
// {
// /* .unk_00 */ 		0x0000,
// /* .unk_02 */ 		0x0001,
// /* .unk_04 */ 		0x03,
// /* .unk_05 */ 		0x00,
// /* .unk06 */ 		0x00,
// /* .unk07 */ 		0x00,
// /* .textOffset1 */ 	0x2268,
// /* .textOffset2 */ 	0x0000,
// /* .unkC */ 		0x00000000, //unknown type (unused?)
// /* .modelData */ 	0x802127FC,
// /* .npcName */ 		0x8026E2FC,
// /* .unk18 */ 		0x00000000, //unknown type (unused?)
// /* .pos */ 			{ 22.0f, 227.0f },
// /* .rotation */ 	-3.1415998935699463f,
// /* .sizeScaler */ 	0.07000000029802322f,
// },

// /* Pat (Monestary) */
// {
// /* .unk_00 */ 		0x0007,
// /* .unk_02 */ 		0x0002,
// /* .unk_04 */ 		0x02,
// /* .unk_05 */ 		0x00,
// /* .unk06 */ 		0x00,
// /* .unk07 */ 		0x01,
// /* .textOffset1 */ 	0x2340,
// /* .textOffset2 */ 	0x23D0,
// /* .unkC */ 		0x00000000, //unknown type (unused?)
// /* .modelData */ 	0x80230784,
// /* .npcName */ 		0x8026E30C,
// /* .unk18 */ 		0x00000000, //unknown type (unused?)
// /* .pos */ 			{ -100.0f, 104.0f },
// /* .rotation */ 	0.0f,
// /* .sizeScaler */ 	0.07000000029802322f,
// },

// /* Cerius (Monestary) */
// {
// /* .unk_00 */ 		0x0008,
// /* .unk_02 */ 		0x0001,
// /* .unk_04 */ 		0x01,
// /* .unk_05 */ 		0x00,
// /* .unk06 */ 		0x00,
// /* .unk07 */ 		0x00,
// /* .textOffset1 */ 	0x2430,
// /* .textOffset2 */ 	0x0000,
// /* .unkC */ 		0x00000000, //unknown type (unused?)
// /* .modelData */ 	0x80236824,
// /* .npcName */ 		0x8026E314,
// /* .unk18 */ 		0x00000000, //unknown type (unused?)
// /* .pos */ 			{ 0.0f, -30.0f },
// /* .rotation */ 	-3.1415998935699463f,
// /* .sizeScaler */ 	0.07000000029802322f,
// },

// /* Grand Abbott (Monestary) */
// {
// /* .unk_00 */ 		0x0011,
// /* .unk_02 */ 		0x0005,
// /* .unk_04 */ 		0x01,
// /* .unk_05 */ 		0x00,
// /* .unk06 */ 		0x00,
// /* .unk07 */ 		0x00,
// /* .textOffset1 */ 	0x24C0,
// /* .textOffset2 */ 	0x2620,
// /* .unkC */ 		0x00000000, //unknown type (unused?)
// /* .modelData */ 	0x80213094,
// /* .npcName */ 		0x8026E320,
// /* .unk18 */ 		0x00000000, //unknown type (unused?)
// /* .pos */ 			{ 0.0f, 0.0f },
// /* .rotation */ 	-1.5707999467849731f,
// /* .sizeScaler */ 	0.07000000029802322f,
// },

// /* Gelis (Monestary) */
// {
// /* .unk_00 */ 		0x000F,
// /* .unk_02 */ 		0x0001,
// /* .unk_04 */ 		0x02,
// /* .unk_05 */ 		0x00,
// /* .unk06 */ 		0x00,
// /* .unk07 */ 		0x00,
// /* .textOffset1 */ 	0x2748,
// /* .textOffset2 */ 	0x0000,
// /* .unkC */ 		0x00000000, //unknown type (unused?)
// /* .modelData */ 	0x8022F5B4,
// /* .npcName */ 		0x8026E334,
// /* .unk18 */ 		0x00000000, //unknown type (unused?)
// /* .pos */ 			{ -26.0f, -15.0f },
// /* .rotation */ 	-3.1415998935699463f,
// /* .sizeScaler */ 	0.07000000029802322f,
// },

// /* Fergus (Monestary) */
// {
// /* .unk_00 */ 		0x0006,
// /* .unk_02 */ 		0x0001,
// /* .unk_04 */ 		0x01,
// /* .unk_05 */ 		0x00,
// /* .unk06 */ 		0x00,
// /* .unk07 */ 		0x00,
// /* .textOffset1 */ 	0x2950,
// /* .textOffset2 */ 	0x0000,
// /* .unkC */ 		0x00000000, //unknown type (unused?)
// /* .modelData */ 	0x8022F604,
// /* .npcName */ 		0x8026E340,
// /* .unk18 */ 		0x00000000, //unknown type (unused?)
// /* .pos */ 			{ 4.0f, 0.0f },
// /* .rotation */ 	1.5707999467849731f,
// /* .sizeScaler */ 	0.07000000029802322f,
// },

// /* Cristole (Dondoran Castle) */
// {
// /* .unk_00 */ 		0x0000,
// /* .unk_02 */ 		0x0001,
// /* .unk_04 */ 		0x01,
// /* .unk_05 */ 		0x00,
// /* .unk06 */ 		0x00,
// /* .unk07 */ 		0x00,
// /* .textOffset1 */ 	0x3AC8,
// /* .textOffset2 */ 	0x0000,
// /* .unkC */ 		0x00000000, //unknown type (unused?)
// /* .modelData */ 	0x8022F694,
// /* .npcName */ 		0x8026393C,
// /* .unk18 */ 		0x00000000, //unknown type (unused?)
// /* .pos */ 			{ 32.0f, 158.0f },
// /* .rotation */ 	-3.1415998935699463f,
// /* .sizeScaler */ 	0.07000000029802322f,
// },

// /* Scottfort (Dondoran Castle) */
// {
// /* .unk_00 */ 		0x0001,
// /* .unk_02 */ 		0x0005,
// /* .unk_04 */ 		0x01,
// /* .unk_05 */ 		0x00,
// /* .unk06 */ 		0x00,
// /* .unk07 */ 		0x00,
// /* .textOffset1 */ 	0x3B58,
// /* .textOffset2 */ 	0x3DD8,
// /* .unkC */ 		0x00000000, //unknown type (unused?)
// /* .modelData */ 	0x80213918,
// /* .npcName */ 		0x8026394C,
// /* .unk18 */ 		0x00000000, //unknown type (unused?)
// /* .pos */ 			{ 0.0f, -65.0f },
// /* .rotation */ 	0.0f,
// /* .sizeScaler */ 	0.07000000029802322f,
// },

// /* Grant (Dondoran Castle) */
// {
// /* .unk_00 */ 		0x0000,
// /* .unk_02 */ 		0x0001,
// /* .unk_04 */ 		0x01,
// /* .unk_05 */ 		0x00,
// /* .unk06 */ 		0x00,
// /* .unk07 */ 		0x00,
// /* .textOffset1 */ 	0x3F60,
// /* .textOffset2 */ 	0x0000,
// /* .unkC */ 		0x00000000, //unknown type (unused?)
// /* .modelData */ 	0x8022F6F0,
// /* .npcName */ 		0x8026395C,
// /* .unk18 */ 		0x00000000, //unknown type (unused?)
// /* .pos */ 			{ -32.0f, 158.0f },
// /* .rotation */ 	-3.1415998935699463f,
// /* .sizeScaler */ 	0.07000000029802322f,
// },

// /* Gibson (Dondoran Castle) */
// {
// /* .unk_00 */ 		0x0003,
// /* .unk_02 */ 		0x0005,
// /* .unk_04 */ 		0x01,
// /* .unk_05 */ 		0x00,
// /* .unk06 */ 		0x00,
// /* .unk07 */ 		0x00,
// /* .textOffset1 */ 	0x3FD0,
// /* .textOffset2 */ 	0x4188,
// /* .unkC */ 		0x00000000, //unknown type (unused?)
// /* .modelData */ 	0x80231A74,
// /* .npcName */ 		0x80263968,
// /* .unk18 */ 		0x00000000, //unknown type (unused?)
// /* .pos */ 			{ 5.0f, -12.0f },
// /* .rotation */ 	1.5707999467849731f,
// /* .sizeScaler */ 	0.07000000029802322f,
// },

// /* Hew (Dondoran Castle) */
// {
// /* .unk_00 */ 		0x0000,
// /* .unk_02 */ 		0x0001,
// /* .unk_04 */ 		0x01,
// /* .unk_05 */ 		0x00,
// /* .unk06 */ 		0x00,
// /* .unk07 */ 		0x00,
// /* .textOffset1 */ 	0x4200,
// /* .textOffset2 */ 	0x0000,
// /* .unkC */ 		0x00000000, //unknown type (unused?)
// /* .modelData */ 	0x80231A10,
// /* .npcName */ 		0x80263974,
// /* .unk18 */ 		0x00000000, //unknown type (unused?)
// /* .pos */ 			{ -21.0f, -267.0f },
// /* .rotation */ 	0.0f,
// /* .sizeScaler */ 	0.07000000029802322f,
// },

// /* Pasart (Dondoran Castle) */
// {
// /* .unk_00 */ 		0x0002,
// /* .unk_02 */ 		0x0005,
// /* .unk_04 */ 		0x02,
// /* .unk_05 */ 		0x00,
// /* .unk06 */ 		0x00,
// /* .unk07 */ 		0x00,
// /* .textOffset1 */ 	0x4270,
// /* .textOffset2 */ 	0x4308,
// /* .unkC */ 		0x00000000, //unknown type (unused?)
// /* .modelData */ 	0x80231AD4,
// /* .npcName */ 		0x8026397C,
// /* .unk18 */ 		0x00000000, //unknown type (unused?)
// /* .pos */ 			{ 2.0f, 12.0f },
// /* .rotation */ 	0.0f,
// /* .sizeScaler */ 	0.07000000029802322f,
// },

// /* Felzen (Dondoran Castle) */
// {
// /* .unk_00 */ 		0x0001,
// /* .unk_02 */ 		0x0005,
// /* .unk_04 */ 		0x01,
// /* .unk_05 */ 		0x00,
// /* .unk06 */ 		0x00,
// /* .unk07 */ 		0x00,
// /* .textOffset1 */ 	0x4370,
// /* .textOffset2 */ 	0x4400,
// /* .unkC */ 		0x00000000, //unknown type (unused?)
// /* .modelData */ 	0x80231B34,
// /* .npcName */ 		0x80263988,
// /* .unk18 */ 		0x00000000, //unknown type (unused?)
// /* .pos */ 			{ -22.0f, -37.0f },
// /* .rotation */ 	1.5707999467849731f,
// /* .sizeScaler */ 	0.07000000029802322f,
// },

// /* Kate (Dondoran Castle) */
// {
// /* .unk_00 */ 		0x000B,
// /* .unk_02 */ 		0x0001,
// /* .unk_04 */ 		0x01,
// /* .unk_05 */ 		0x00,
// /* .unk06 */ 		0x00,
// /* .unk07 */ 		0x00,
// /* .textOffset1 */ 	0x4490,
// /* .textOffset2 */ 	0x0000,
// /* .unkC */ 		0x00000000, //unknown type (unused?)
// /* .modelData */ 	0x802214BC,
// /* .npcName */ 		0x80263994,
// /* .unk18 */ 		0x00000000, //unknown type (unused?)
// /* .pos */ 			{ 15.0f, 15.0f },
// /* .rotation */ 	0.0f,
// /* .sizeScaler */ 	0.07000000029802322f,
// },

// /* Flora (Dondoran Castle) */
// {
// /* .unk_00 */ 		0x000E,
// /* .unk_02 */ 		0x0005,
// /* .unk_04 */ 		0x01,
// /* .unk_05 */ 		0x00,
// /* .unk06 */ 		0x00,
// /* .unk07 */ 		0x00,
// /* .textOffset1 */ 	0x4540,
// /* .textOffset2 */ 	0x4700,
// /* .unkC */ 		0x00000000, //unknown type (unused?)
// /* .modelData */ 	0x802118A4,
// /* .npcName */ 		0x80263880,
// /* .unk18 */ 		0x00000000, //unknown type (unused?)
// /* .pos */ 			{ 20.0f, -27.0f },
// /* .rotation */ 	1.0471999645233154f,
// /* .sizeScaler */ 	0.07000000029802322f,
// },

// /* Shannon (Melrode INN) */
// {
// /* .unk_00 */ 		0x0005,
// /* .unk_02 */ 		0x0005,
// /* .unk_04 */ 		0x01,
// /* .unk_05 */ 		0x00,
// /* .unk06 */ 		0x00,
// /* .unk07 */ 		0x00,
// /* .textOffset1 */ 	0x0000,
// /* .textOffset2 */ 	0x00E0,
// /* .unkC */ 		0x00000000, //unknown type (unused?)
// /* .modelData */ 	0x802A2A24,
// /* .npcName */ 		0x802A7BB0,
// /* .unk18 */ 		0x00000000, //unknown type (unused?)
// /* .pos */ 			{ -16.0f, 18.0f },
// /* .rotation */ 	1.5707999467849731f,
// /* .sizeScaler */ 	0.07000000029802322f,
// },

// /* Tim (Melrode Houses) */
// {
// /* .unk_00 */ 		0x0009,
// /* .unk_02 */ 		0x0001,
// /* .unk_04 */ 		0x01,
// /* .unk_05 */ 		0x00,
// /* .unk06 */ 		0x00,
// /* .unk07 */ 		0x00,
// /* .textOffset1 */ 	0x1588,
// /* .textOffset2 */ 	0x0000,
// /* .unkC */ 		0x00000000, //unknown type (unused?)
// /* .modelData */ 	0x80218D80,
// /* .npcName */ 		0x8026E228,
// /* .unk18 */ 		0x00000000, //unknown type (unused?)
// /* .pos */ 			{ 0.0f, -8.0f },
// /* .rotation */ 	0.0f,
// /* .sizeScaler */ 	0.07000000029802322f,
// },

// /* Katie (Melrode Houses) */
// {
// /* .unk_00 */ 		0x0004,
// /* .unk_02 */ 		0x0001,
// /* .unk_04 */ 		0x01,
// /* .unk_05 */ 		0x00,
// /* .unk06 */ 		0x00,
// /* .unk07 */ 		0x00,
// /* .textOffset1 */ 	0x18C0,
// /* .textOffset2 */ 	0x0000,
// /* .unkC */ 		0x00000000, //unknown type (unused?)
// /* .modelData */ 	0x80228F7C,
// /* .npcName */ 		0x8026E278,
// /* .unk18 */ 		0x00000000, //unknown type (unused?)
// /* .pos */ 			{ 18.0f, 17.0f },
// /* .rotation */ 	2.618000030517578f,
// /* .sizeScaler */ 	0.07000000029802322f,
// },

// /* Elspet (Melrode Houses) */
// {
// /* .unk_00 */ 		0x0001,
// /* .unk_02 */ 		0x0001,
// /* .unk_04 */ 		0x01,
// /* .unk_05 */ 		0x00,
// /* .unk06 */ 		0x00,
// /* .unk07 */ 		0x00,
// /* .textOffset1 */ 	0x1A68,
// /* .textOffset2 */ 	0x0000,
// /* .unkC */ 		0x00000000, //unknown type (unused?)
// /* .modelData */ 	0x8022E040,
// /* .npcName */ 		0x8026E2A8,
// /* .unk18 */ 		0x00000000, //unknown type (unused?)
// /* .pos */ 			{ -5.0f, -18.0f },
// /* .rotation */ 	1.0471999645233154f,
// /* .sizeScaler */ 	0.07000000029802322f,
// },

// /* Agnes (Melrode INN) */
// {
// /* .unk_00 */ 		0x0005,
// /* .unk_02 */ 		0x0006,
// /* .unk_04 */ 		0x01,
// /* .unk_05 */ 		0x01,
// /* .unk06 */ 		0x00,
// /* .unk07 */ 		0x00,
// /* .textOffset1 */ 	0x1B20,
// /* .textOffset2 */ 	0x0000,
// /* .unkC */ 		0x00000000, //unknown type (unused?)
// /* .modelData */ 	0x80219BF0,
// /* .npcName */ 		0x8026E2B4,
// /* .unk18 */ 		0x00000000, //unknown type (unused?)
// /* .pos */ 			{ 29.0f, 0.0f },
// /* .rotation */ 	-1.5707999467849731f,
// /* .sizeScaler */ 	0.07000000029802322f,
// },

// /* Ingram (Melrode White Wing Shop) */
// {
// /* .unk_00 */ 		0x000B,
// /* .unk_02 */ 		0x0002,
// /* .unk_04 */ 		0x01,
// /* .unk_05 */ 		0x01,
// /* .unk06 */ 		0x00,
// /* .unk07 */ 		0x0E,
// /* .textOffset1 */ 	0x1BB0,
// /* .textOffset2 */ 	0x1CA0,
// /* .unkC */ 		0x00000000, //unknown type (unused?)
// /* .modelData */ 	0x8022A7F4,
// /* .npcName */ 		0x8026E2C0,
// /* .unk18 */ 		0x00000000, //unknown type (unused?)
// /* .pos */ 			{ 0.0f, -14.0f },
// /* .rotation */ 	0.0f,
// /* .sizeScaler */ 	0.07000000029802322f,
// },

// /* Holly (Melrode Houses) */
// {
// /* .unk_00 */ 		0x0002,
// /* .unk_02 */ 		0x0001,
// /* .unk_04 */ 		0x01,
// /* .unk_05 */ 		0x00,
// /* .unk06 */ 		0x00,
// /* .unk07 */ 		0x00,
// /* .textOffset1 */ 	0x1D08,
// /* .textOffset2 */ 	0x0000,
// /* .unkC */ 		0x00000000, //unknown type (unused?)
// /* .modelData */ 	0x8021C88C,
// /* .npcName */ 		0x8026E2CC,
// /* .unk18 */ 		0x00000000, //unknown type (unused?)
// /* .pos */ 			{ -10.0f, -18.0f },
// /* .rotation */ 	1.5707999467849731f,
// /* .sizeScaler */ 	0.07000000029802322f,
// },

// /* Epona (Floating Monestary) */
// {
// /* .unk_00 */ 		0x000D,
// /* .unk_02 */ 		0x0006,
// /* .unk_04 */ 		0x01,
// /* .unk_05 */ 		0x00,
// /* .unk06 */ 		0x00,
// /* .unk07 */ 		0x00,
// /* .textOffset1 */ 	0xAE08,
// /* .textOffset2 */ 	0x0000,
// /* .unkC */ 		0x00000000, //unknown type (unused?)
// /* .modelData */ 	0x80213FB0,
// /* .npcName */ 		0x8026A82C,
// /* .unk18 */ 		0x00000000, //unknown type (unused?)
// /* .pos */ 			{ 11.0f, 0.0f },
// /* .rotation */ 	0.7678999900817871f,
// /* .sizeScaler */ 	0.07000000029802322f,
// },

// /* Shannon (Dondoran INN) */
// {
// /* .unk_00 */ 		0x0007,
// /* .unk_02 */ 		0x0005,
// /* .unk_04 */ 		0x01,
// /* .unk_05 */ 		0x00,
// /* .unk06 */ 		0x00,
// /* .unk07 */ 		0x00,
// /* .textOffset1 */ 	0x0150,
// /* .textOffset2 */ 	0x0288,
// /* .unkC */ 		0x00000000, //unknown type (unused?)
// /* .modelData */ 	0x802A2A24,
// /* .npcName */ 		0x802A7BB0,
// /* .unk18 */ 		0x00000000, //unknown type (unused?)
// /* .pos */ 			{ -16.0f, 18.0f },
// /* .rotation */ 	1.5707999467849731f,
// /* .sizeScaler */ 	0.07000000029802322f,
// },

// /* Shannon (Dondoran Flatts INN) */
// {
// /* .unk_00 */ 		0x000F,
// /* .unk_02 */ 		0x0001,
// /* .unk_04 */ 		0x01,
// /* .unk_05 */ 		0x00,
// /* .unk06 */ 		0x00,
// /* .unk07 */ 		0x00,
// /* .textOffset1 */ 	0x0328,
// /* .textOffset2 */ 	0x0000,
// /* .unkC */ 		0x00000000, //unknown type (unused?)
// /* .modelData */ 	0x802A2A24,
// /* .npcName */ 		0x802A7BB0,
// /* .unk18 */ 		0x00000000, //unknown type (unused?)
// /* .pos */ 			{ -16.0f, 18.0f },
// /* .rotation */ 	1.5707999467849731f,
// /* .sizeScaler */ 	0.07000000029802322f,
// },

// /* Marion (Dondoran Houses) */
// {
// /* .unk_00 */ 		0x0015,
// /* .unk_02 */ 		0x0005,
// /* .unk_04 */ 		0x01,
// /* .unk_05 */ 		0x03,
// /* .unk06 */ 		0x00,
// /* .unk07 */ 		0x00,
// /* .textOffset1 */ 	0x1D70,
// /* .textOffset2 */ 	0x1EA0,
// /* .unkC */ 		0x00000000, //unknown type (unused?)
// /* .modelData */ 	0x8022E090,
// /* .npcName */ 		0x8026E2D8,
// /* .unk18 */ 		0x00000000, //unknown type (unused?)
// /* .pos */ 			{ 0.0f, -24.0f },
// /* .rotation */ 	0.0f,
// /* .sizeScaler */ 	0.07699999958276749f,
// },

// /* Curtis (Dondoran Houses) */
// {
// /* .unk_00 */ 		0x0005,
// /* .unk_02 */ 		0x0005,
// /* .unk_04 */ 		0x01,
// /* .unk_05 */ 		0x00,
// /* .unk06 */ 		0x00,
// /* .unk07 */ 		0x00,
// /* .textOffset1 */ 	0x1F68,
// /* .textOffset2 */ 	0x1FF0,
// /* .unkC */ 		0x00000000, //unknown type (unused?)
// /* .modelData */ 	0x8021DA94,
// /* .npcName */ 		0x8026A79C,
// /* .unk18 */ 		0x00000000, //unknown type (unused?)
// /* .pos */ 			{ -11.0f, 0.0f },
// /* .rotation */ 	1.5707999467849731f,
// /* .sizeScaler */ 	0.07000000029802322f,
// },

// /* Davy (Dondoran Bar) */
// {
// /* .unk_00 */ 		0x000D,
// /* .unk_02 */ 		0x0005,
// /* .unk_04 */ 		0x01,
// /* .unk_05 */ 		0x00,
// /* .unk06 */ 		0x00,
// /* .unk07 */ 		0x00,
// /* .textOffset1 */ 	0x2B88,
// /* .textOffset2 */ 	0x2C20,
// /* .unkC */ 		0x00000000, //unknown type (unused?)
// /* .modelData */ 	0x80219190,
// /* .npcName */ 		0x80263898,
// /* .unk18 */ 		0x00030000, //unknown type (unused?)
// /* .pos */ 			{ -33.0f, 0.0f },
// /* .rotation */ 	0.7853999733924866f,
// /* .sizeScaler */ 	0.07000000029802322f,
// },

// /* Rocks (Dondoran Bar) */
// {
// /* .unk_00 */ 		0x000D,
// /* .unk_02 */ 		0x0005,
// /* .unk_04 */ 		0x01,
// /* .unk_05 */ 		0x00,
// /* .unk06 */ 		0x00,
// /* .unk07 */ 		0x00,
// /* .textOffset1 */ 	0x2C88,
// /* .textOffset2 */ 	0x2D00,
// /* .unkC */ 		0x00000000, //unknown type (unused?)
// /* .modelData */ 	0x8021A6F0,
// /* .npcName */ 		0x802638A4,
// /* .unk18 */ 		0x00030000, //unknown type (unused?)
// /* .pos */ 			{ -33.0f, 16.0f },
// /* .rotation */ 	2.3561999797821045f,
// /* .sizeScaler */ 	0.07000000029802322f,
// },

// /* Clay (Dondoran Houses) */
// {
// /* .unk_00 */ 		0x0006,
// /* .unk_02 */ 		0x0005,
// /* .unk_04 */ 		0x01,
// /* .unk_05 */ 		0x00,
// /* .unk06 */ 		0x00,
// /* .unk07 */ 		0x00,
// /* .textOffset1 */ 	0x2D78,
// /* .textOffset2 */ 	0x2E10,
// /* .unkC */ 		0x00000000, //unknown type (unused?)
// /* .modelData */ 	0x8021DED0,
// /* .npcName */ 		0x802638B0,
// /* .unk18 */ 		0x00000000, //unknown type (unused?)
// /* .pos */ 			{ 0.0f, -20.0f },
// /* .rotation */ 	2.3561999797821045f,
// /* .sizeScaler */ 	0.07000000029802322f,
// },

// /* Annnabell (Dondoran Houses) */
// {
// /* .unk_00 */ 		0x0003,
// /* .unk_02 */ 		0x0005,
// /* .unk_04 */ 		0x01,
// /* .unk_05 */ 		0x00,
// /* .unk06 */ 		0x00,
// /* .unk07 */ 		0x00,
// /* .textOffset1 */ 	0x2F80,
// /* .textOffset2 */ 	0x3098,
// /* .unkC */ 		0x00000000, //unknown type (unused?)
// /* .modelData */ 	0x802232A0,
// /* .npcName */ 		0x802638CC,
// /* .unk18 */ 		0x00030000, //unknown type (unused?)
// /* .pos */ 			{ -17.0f, -4.0f },
// /* .rotation */ 	1.5707999467849731f,
// /* .sizeScaler */ 	0.07000000029802322f,
// },

// /* Mable (Dondoran Bar) */
// {
// /* .unk_00 */ 		0x000D,
// /* .unk_02 */ 		0x0002,
// /* .unk_04 */ 		0x01,
// /* .unk_05 */ 		0x00,
// /* .unk06 */ 		0x00,
// /* .unk07 */ 		0x05,
// /* .textOffset1 */ 	0x3130,
// /* .textOffset2 */ 	0x31C8,
// /* .unkC */ 		0x00000000, //unknown type (unused?)
// /* .modelData */ 	0x80224B28,
// /* .npcName */ 		0x802638DC,
// /* .unk18 */ 		0x00000000, //unknown type (unused?)
// /* .pos */ 			{ 5.0f, 0.0f },
// /* .rotation */ 	0.7853999733924866f,
// /* .sizeScaler */ 	0.07000000029802322f,
// },

// /* Claire (Dondoran Houses) */
// {
// /* .unk_00 */ 		0x0001,
// /* .unk_02 */ 		0x0005,
// /* .unk_04 */ 		0x01,
// /* .unk_05 */ 		0x00,
// /* .unk06 */ 		0x00,
// /* .unk07 */ 		0x00,
// /* .textOffset1 */ 	0x33C0,
// /* .textOffset2 */ 	0x34A0,
// /* .unkC */ 		0x00000000, //unknown type (unused?)
// /* .modelData */ 	0x8022B268,
// /* .npcName */ 		0x802638F4,
// /* .unk18 */ 		0x00000000, //unknown type (unused?)
// /* .pos */ 			{ 17.0f, 0.0f },
// /* .rotation */ 	1.5707999467849731f,
// /* .sizeScaler */ 	0.07000000029802322f,
// },

// /* Walter (Dondoran Houses) */
// {
// /* .unk_00 */ 		0x0004,
// /* .unk_02 */ 		0x0005,
// /* .unk_04 */ 		0x01,
// /* .unk_05 */ 		0x00,
// /* .unk06 */ 		0x00,
// /* .unk07 */ 		0x00,
// /* .textOffset1 */ 	0x3508,
// /* .textOffset2 */ 	0x3640,
// /* .unkC */ 		0x00000000, //unknown type (unused?)
// /* .modelData */ 	0x8022CAF4,
// /* .npcName */ 		0x80263900,
// /* .unk18 */ 		0x00000000, //unknown type (unused?)
// /* .pos */ 			{ -10.0f, -5.0f },
// /* .rotation */ 	0.7853999733924866f,
// /* .sizeScaler */ 	0.07699999958276749f,
// },

// /* Thom (Dondoran Yellow Wing Shop) */
// {
// /* .unk_00 */ 		0x000E,
// /* .unk_02 */ 		0x0002,
// /* .unk_04 */ 		0x01,
// /* .unk_05 */ 		0x01,
// /* .unk06 */ 		0x00,
// /* .unk07 */ 		0x0F,
// /* .textOffset1 */ 	0x36B8,
// /* .textOffset2 */ 	0x37A8,
// /* .unkC */ 		0x00000000, //unknown type (unused?)
// /* .modelData */ 	0x8022E8DC,
// /* .npcName */ 		0x8026390C,
// /* .unk18 */ 		0x00000000, //unknown type (unused?)
// /* .pos */ 			{ -2.0f, -14.0f },
// /* .rotation */ 	0.0f,
// /* .sizeScaler */ 	0.08399999886751175f,
// },

// /* Gilbert (Dondoran INN) */
// {
// /* .unk_00 */ 		0x0007,
// /* .unk_02 */ 		0x0006,
// /* .unk_04 */ 		0x01,
// /* .unk_05 */ 		0x01,
// /* .unk06 */ 		0x00,
// /* .unk07 */ 		0x00,
// /* .textOffset1 */ 	0x3818,
// /* .textOffset2 */ 	0x0000,
// /* .unkC */ 		0x00000000, //unknown type (unused?)
// /* .modelData */ 	0x8022E92C,
// /* .npcName */ 		0x80263918,
// /* .unk18 */ 		0x00000000, //unknown type (unused?)
// /* .pos */ 			{ 29.0f, 0.0f },
// /* .rotation */ 	-1.5707999467849731f,
// /* .sizeScaler */ 	0.08399999886751175f,
// },

// /* Steve (Dondoran INN) */
// {
// /* .unk_00 */ 		0x000A,
// /* .unk_02 */ 		0x0005,
// /* .unk_04 */ 		0x01,
// /* .unk_05 */ 		0x00,
// /* .unk06 */ 		0x00,
// /* .unk07 */ 		0x00,
// /* .textOffset1 */ 	0x38A0,
// /* .textOffset2 */ 	0x3938,
// /* .unkC */ 		0x00000000, //unknown type (unused?)
// /* .modelData */ 	0x8021DF2C,
// /* .npcName */ 		0x80263924,
// /* .unk18 */ 		0x00000000, //unknown type (unused?)
// /* .pos */ 			{ -6.0f, -10.0f },
// /* .rotation */ 	-0.7678999900817871f,
// /* .sizeScaler */ 	0.07000000029802322f,
// },

// /* Maggie (Dondoran Bar) */
// {
// /* .unk_00 */ 		0x000D,
// /* .unk_02 */ 		0x0002,
// /* .unk_04 */ 		0x01,
// /* .unk_05 */ 		0x01,
// /* .unk06 */ 		0x00,
// /* .unk07 */ 		0x01,
// /* .textOffset1 */ 	0x39C8,
// /* .textOffset2 */ 	0x3A68,
// /* .unkC */ 		0x00000000, //unknown type (unused?)
// /* .modelData */ 	0x80221470,
// /* .npcName */ 		0x80263930,
// /* .unk18 */ 		0x00000000, //unknown type (unused?)
// /* .pos */ 			{ 0.0f, -34.0f },
// /* .rotation */ 	0.0f,
// /* .sizeScaler */ 	0.07000000029802322f,
// },

// /* Teruma (Dondoran Flats INN) */
// {
// /* .unk_00 */ 		0x000F,
// /* .unk_02 */ 		0x0006,
// /* .unk_04 */ 		0x01,
// /* .unk_05 */ 		0x01,
// /* .unk06 */ 		0x00,
// /* .unk07 */ 		0x00,
// /* .textOffset1 */ 	0x47B8,
// /* .textOffset2 */ 	0x0000,
// /* .unkC */ 		0x00000000, //unknown type (unused?)
// /* .modelData */ 	0x8021AF4C,
// /* .npcName */ 		0x8026A7B4,
// /* .unk18 */ 		0x00000000, //unknown type (unused?)
// /* .pos */ 			{ 32.0f, 0.0f },
// /* .rotation */ 	-1.5707999467849731f,
// /* .sizeScaler */ 	0.07000000029802322f,
// },

// /* Arkart (Dondoran Flats INN) */
// {
// /* .unk_00 */ 		0x0013,
// /* .unk_02 */ 		0x0001,
// /* .unk_04 */ 		0x01,
// /* .unk_05 */ 		0x00,
// /* .unk06 */ 		0x00,
// /* .unk07 */ 		0x00,
// /* .textOffset1 */ 	0x4808,
// /* .textOffset2 */ 	0x0000,
// /* .unkC */ 		0x00000000, //unknown type (unused?)
// /* .modelData */ 	0x8021889C,
// /* .npcName */ 		0x8026A7A8,
// /* .unk18 */ 		0x00000000, //unknown type (unused?)
// /* .pos */ 			{ 5.0f, -8.0f },
// /* .rotation */ 	-0.7678999900817871f,
// /* .sizeScaler */ 	0.07000000029802322f,
// },

// /* Shannon (Larapool INN) */
// {
// /* .unk_00 */ 		0x0000,
// /* .unk_02 */ 		0x0005,
// /* .unk_04 */ 		0x01,
// /* .unk_05 */ 		0x00,
// /* .unk06 */ 		0x00,
// /* .unk07 */ 		0x02,
// /* .textOffset1 */ 	0x03E0,
// /* .textOffset2 */ 	0x0540,
// /* .unkC */ 		0x00000000, //unknown type (unused?)
// /* .modelData */ 	0x802A2A24,
// /* .npcName */ 		0x802A7BB0,
// /* .unk18 */ 		0x00000000, //unknown type (unused?)
// /* .pos */ 			{ 35.0f, -2.0f },
// /* .rotation */ 	-3.1415998935699463f,
// /* .sizeScaler */ 	0.07000000029802322f,
// },

// /* Naltese (Larapool INN) */
// {
// /* .unk_00 */ 		0x0003,
// /* .unk_02 */ 		0x0001,
// /* .unk_04 */ 		0x01,
// /* .unk_05 */ 		0x00,
// /* .unk06 */ 		0x00,
// /* .unk07 */ 		0x00,
// /* .textOffset1 */ 	0x4A80,
// /* .textOffset2 */ 	0x0000,
// /* .unkC */ 		0x00000000, //unknown type (unused?)
// /* .modelData */ 	0x80216C8C,
// /* .npcName */ 		0x80244F3C,
// /* .unk18 */ 		0x00000000, //unknown type (unused?)
// /* .pos */ 			{ 0.0f, 0.0f },
// /* .rotation */ 	-3.1415998935699463f,
// /* .sizeScaler */ 	0.07000000029802322f,
// },

// /* Leila (Larapool INN) */
// {
// /* .unk_00 */ 		0x0006,
// /* .unk_02 */ 		0x0005,
// /* .unk_04 */ 		0x01,
// /* .unk_05 */ 		0x00,
// /* .unk06 */ 		0x00,
// /* .unk07 */ 		0x01,
// /* .textOffset1 */ 	0x5010,
// /* .textOffset2 */ 	0x5268,
// /* .unkC */ 		0x00000000, //unknown type (unused?)
// /* .modelData */ 	0x80211498,
// /* .npcName */ 		0x80244F94,
// /* .unk18 */ 		0x00000000, //unknown type (unused?)
// /* .pos */ 			{ 7.0f, -6.0f },
// /* .rotation */ 	-2.3561999797821045f,
// /* .sizeScaler */ 	0.07000000029802322f,
// },

// /* Leila (Larapool Well Room) */
// {
// /* .unk_00 */ 		0x0007,
// /* .unk_02 */ 		0x0005,
// /* .unk_04 */ 		0x01,
// /* .unk_05 */ 		0x00,
// /* .unk06 */ 		0x00,
// /* .unk07 */ 		0x02,
// /* .textOffset1 */ 	0x5488,
// /* .textOffset2 */ 	0x5680,
// /* .unkC */ 		0x00000000, //unknown type (unused?)
// /* .modelData */ 	0x80211498,
// /* .npcName */ 		0x80244F94,
// /* .unk18 */ 		0x00000000, //unknown type (unused?)
// /* .pos */ 			{ -9.0f, -25.0f },
// /* .rotation */ 	-0.7853999733924866f,
// /* .sizeScaler */ 	0.07000000029802322f,
// },

// /* Donovan (Larapool INN) */
// {
// /* .unk_00 */ 		0x0000,
// /* .unk_02 */ 		0x0005,
// /* .unk_04 */ 		0x01,
// /* .unk_05 */ 		0x00,
// /* .unk06 */ 		0x00,
// /* .unk07 */ 		0x02,
// /* .textOffset1 */ 	0x5710,
// /* .textOffset2 */ 	0x5788,
// /* .unkC */ 		0x00000000, //unknown type (unused?)
// /* .modelData */ 	0x80226C9C,
// /* .npcName */ 		0x80244FA0,
// /* .unk18 */ 		0x00000000, //unknown type (unused?)
// /* .pos */ 			{ 42.0f, -54.0f },
// /* .rotation */ 	0.0f,
// /* .sizeScaler */ 	0.07000000029802322f,
// },

// /* Alexandir (Larapool INN) */
// {
// /* .unk_00 */ 		0x0000,
// /* .unk_02 */ 		0x0006,
// /* .unk_04 */ 		0x01,
// /* .unk_05 */ 		0x01,
// /* .unk06 */ 		0x00,
// /* .unk07 */ 		0x00,
// /* .textOffset1 */ 	0x5998,
// /* .textOffset2 */ 	0x0000,
// /* .unkC */ 		0x00000000, //unknown type (unused?)
// /* .modelData */ 	0x80213B7C,
// /* .npcName */ 		0x80244FB8,
// /* .unk18 */ 		0x00000000, //unknown type (unused?)
// /* .pos */ 			{ -34.0f, -42.0f },
// /* .rotation */ 	1.5707999467849731f,
// /* .sizeScaler */ 	0.07000000029802322f,
// },

// /* Galita (Larapool INN) */
// {
// /* .unk_00 */ 		0x0000,
// /* .unk_02 */ 		0x0002,
// /* .unk_04 */ 		0x01,
// /* .unk_05 */ 		0x00,
// /* .unk06 */ 		0x00,
// /* .unk07 */ 		0x06,
// /* .textOffset1 */ 	0x5A18,
// /* .textOffset2 */ 	0x5AD0,
// /* .unkC */ 		0x00000000, //unknown type (unused?)
// /* .modelData */ 	0x8021BFCC,
// /* .npcName */ 		0x80244FC8,
// /* .unk18 */ 		0x00000000, //unknown type (unused?)
// /* .pos */ 			{ -14.0f, -14.0f },
// /* .rotation */ 	1.5707999467849731f,
// /* .sizeScaler */ 	0.07699999958276749f,
// },

// /* Olden (Larapool Houses) */
// {
// /* .unk_00 */ 		0x0002,
// /* .unk_02 */ 		0x0001,
// /* .unk_04 */ 		0x01,
// /* .unk_05 */ 		0x00,
// /* .unk06 */ 		0x00,
// /* .unk07 */ 		0x00,
// /* .textOffset1 */ 	0x4890,
// /* .textOffset2 */ 	0x0000,
// /* .unkC */ 		0x00000000, //unknown type (unused?)
// /* .modelData */ 	0x80213B1C,
// /* .npcName */ 		0x80244F20,
// /* .unk18 */ 		0x00000000, //unknown type (unused?)
// /* .pos */ 			{ 20.0f, -10.0f },
// /* .rotation */ 	0.3490999937057495f,
// /* .sizeScaler */ 	0.07000000029802322f,
// },

// /* Rosa (Larapool Houses) */
// {
// /* .unk_00 */ 		0x0002,
// /* .unk_02 */ 		0x0001,
// /* .unk_04 */ 		0x01,
// /* .unk_05 */ 		0x00,
// /* .unk06 */ 		0x00,
// /* .unk07 */ 		0x00,
// /* .textOffset1 */ 	0x4CA0,
// /* .textOffset2 */ 	0x0000,
// /* .unkC */ 		0x00000000, //unknown type (unused?)
// /* .modelData */ 	0x8021ACB0,
// /* .npcName */ 		0x80244F54,
// /* .unk18 */ 		0x00000000, //unknown type (unused?)
// /* .pos */ 			{ 3.0f, 5.0f },
// /* .rotation */ 	2.44350004196167f,
// /* .sizeScaler */ 	0.07000000029802322f,
// },

// /* Camelia (Larapool Houses) */
// {
// /* .unk_00 */ 		0x0000,
// /* .unk_02 */ 		0x0001,
// /* .unk_04 */ 		0x01,
// /* .unk_05 */ 		0x00,
// /* .unk06 */ 		0x00,
// /* .unk07 */ 		0x00,
// /* .textOffset1 */ 	0x4DA8,
// /* .textOffset2 */ 	0x0000,
// /* .unkC */ 		0x00000000, //unknown type (unused?)
// /* .modelData */ 	0x8021DAD0,
// /* .npcName */ 		0x80244F6C,
// /* .unk18 */ 		0x00000000, //unknown type (unused?)
// /* .pos */ 			{ 2.0f, -10.0f },
// /* .rotation */ 	0.7853999733924866f,
// /* .sizeScaler */ 	0.07000000029802322f,
// },

// /* Margeret (Larapool Houses) */
// {
// /* .unk_00 */ 		0x0000,
// /* .unk_02 */ 		0x0001,
// /* .unk_04 */ 		0x01,
// /* .unk_05 */ 		0x00,
// /* .unk06 */ 		0x00,
// /* .unk07 */ 		0x00,
// /* .textOffset1 */ 	0x4E10,
// /* .textOffset2 */ 	0x0000,
// /* .unkC */ 		0x00000000, //unknown type (unused?)
// /* .modelData */ 	0x802203A8,
// /* .npcName */ 		0x80244F78,
// /* .unk18 */ 		0x00000000, //unknown type (unused?)
// /* .pos */ 			{ 2.0f, 7.0f },
// /* .rotation */ 	2.3561999797821045f,
// /* .sizeScaler */ 	0.07000000029802322f,
// },

// /* Gilon (Larapool Houses) */
// {
// /* .unk_00 */ 		0x0003,
// /* .unk_02 */ 		0x0001,
// /* .unk_04 */ 		0x01,
// /* .unk_05 */ 		0x00,
// /* .unk06 */ 		0x00,
// /* .unk07 */ 		0x00,
// /* .textOffset1 */ 	0x4E88,
// /* .textOffset2 */ 	0x0000,
// /* .unkC */ 		0x00000000, //unknown type (unused?)
// /* .modelData */ 	0x802230C4,
// /* .npcName */ 		0x80244F88,
// /* .unk18 */ 		0x00000000, //unknown type (unused?)
// /* .pos */ 			{ -5.0f, 7.0f },
// /* .rotation */ 	1.5707999467849731f,
// /* .sizeScaler */ 	0.07000000029802322f,
// },

// /* Jiryo (Larapool Blue Wings Shop) */
// {
// /* .unk_00 */ 		0x0004,
// /* .unk_02 */ 		0x0002,
// /* .unk_04 */ 		0x01,
// /* .unk_05 */ 		0x01,
// /* .unk06 */ 		0x00,
// /* .unk07 */ 		0x10,
// /* .textOffset1 */ 	0x5880,
// /* .textOffset2 */ 	0x5938,
// /* .unkC */ 		0x00000000, //unknown type (unused?)
// /* .modelData */ 	0x80224EBC,
// /* .npcName */ 		0x80244FAC,
// /* .unk18 */ 		0x00000000, //unknown type (unused?)
// /* .pos */ 			{ 0.0f, -14.0f },
// /* .rotation */ 	0.0f,
// /* .sizeScaler */ 	0.08399999886751175f,
// },

// /* Dorothy (Larapool Houses) */
// {
// /* .unk_00 */ 		0x0007,
// /* .unk_02 */ 		0x0006,
// /* .unk_04 */ 		0x01,
// /* .unk_05 */ 		0x00,
// /* .unk06 */ 		0x00,
// /* .unk07 */ 		0x00,
// /* .textOffset1 */ 	0xA498,
// /* .textOffset2 */ 	0x0000,
// /* .unkC */ 		0x00000000, //unknown type (unused?)
// /* .modelData */ 	0x8021AF08,
// /* .npcName */ 		0x8026A7FC,
// /* .unk18 */ 		0x00000000, //unknown type (unused?)
// /* .pos */ 			{ -18.0f, 5.0f },
// /* .rotation */ 	0.7853999733924866f,
// /* .sizeScaler */ 	0.07000000029802322f,
// },

// /* Lloyd (Lumberjacks House) */
// {
// /* .unk_00 */ 		0x0005,
// /* .unk_02 */ 		0x0005,
// /* .unk_04 */ 		0x01,
// /* .unk_05 */ 		0x00,
// /* .unk06 */ 		0x00,
// /* .unk07 */ 		0x01,
// /* .textOffset1 */ 	0xA540,
// /* .textOffset2 */ 	0xA628,
// /* .unkC */ 		0x00000000, //unknown type (unused?)
// /* .modelData */ 	0x80224164,
// /* .npcName */ 		0x8026A808,
// /* .unk18 */ 		0x00000000, //unknown type (unused?)
// /* .pos */ 			{ 7.0f, -16.0f },
// /* .rotation */ 	0.7853999733924866f,
// /* .sizeScaler */ 	0.07000000029802322f,
// },

// /* Jeff (Lumberjacks House) */
// {
// /* .unk_00 */ 		0x0005,
// /* .unk_02 */ 		0x0005,
// /* .unk_04 */ 		0x01,
// /* .unk_05 */ 		0x00,
// /* .unk06 */ 		0x00,
// /* .unk07 */ 		0x01,
// /* .textOffset1 */ 	0xA680,
// /* .textOffset2 */ 	0xA758,
// /* .unkC */ 		0x00000000, //unknown type (unused?)
// /* .modelData */ 	0x802241C4,
// /* .npcName */ 		0x8026A814,
// /* .unk18 */ 		0x00000000, //unknown type (unused?)
// /* .pos */ 			{ 7.0f, 7.0f },
// /* .rotation */ 	2.44350004196167f,
// /* .sizeScaler */ 	0.07000000029802322f,
// },

// /* Efna (Larapool Houses) */
// {
// /* .unk_00 */ 		0x0006,
// /* .unk_02 */ 		0x0006,
// /* .unk_04 */ 		0x01,
// /* .unk_05 */ 		0x00,
// /* .unk06 */ 		0x00,
// /* .unk07 */ 		0x00,
// /* .textOffset1 */ 	0xA7C8,
// /* .textOffset2 */ 	0x0000,
// /* .unkC */ 		0x00000000, //unknown type (unused?)
// /* .modelData */ 	0x8021AF8C,
// /* .npcName */ 		0x8026A820,
// /* .unk18 */ 		0x00000000, //unknown type (unused?)
// /* .pos */ 			{ 8.0f, 5.0f },
// /* .rotation */ 	0.7853999733924866f,
// /* .sizeScaler */ 	0.07000000029802322f,
// },

// /* Shannon (Normoon INN) */
// {
// /* .unk_00 */ 		0x0005,
// /* .unk_02 */ 		0x0005,
// /* .unk_04 */ 		0x01,
// /* .unk_05 */ 		0x00,
// /* .unk06 */ 		0x00,
// /* .unk07 */ 		0x01,
// /* .textOffset1 */ 	0x05E8,
// /* .textOffset2 */ 	0x0710,
// /* .unkC */ 		0x00000000, //unknown type (unused?)
// /* .modelData */ 	0x802A2A24,
// /* .npcName */ 		0x802A7BB0,
// /* .unk18 */ 		0x00000000, //unknown type (unused?)
// /* .pos */ 			{ -16.0f, 18.0f },
// /* .rotation */ 	1.5707999467849731f,
// /* .sizeScaler */ 	0.07000000029802322f,
// },

// /* Micah (Normoon Houses) */
// {
// /* .unk_00 */ 		0x0000,
// /* .unk_02 */ 		0x0005,
// /* .unk_04 */ 		0x01,
// /* .unk_05 */ 		0x00,
// /* .unk06 */ 		0x00,
// /* .unk07 */ 		0x01,
// /* .textOffset1 */ 	0x5B40,
// /* .textOffset2 */ 	0x5D10,
// /* .unkC */ 		0x00000000, //unknown type (unused?)
// /* .modelData */ 	0x80218408,
// /* .npcName */ 		0x80239710,
// /* .unk18 */ 		0x00000000, //unknown type (unused?)
// /* .pos */ 			{ 0.0f, -4.0f },
// /* .rotation */ 	0.7853999733924866f,
// /* .sizeScaler */ 	0.07000000029802322f,
// },

// /* Gelus (Normoon Houses) */
// {
// /* .unk_00 */ 		0x0001,
// /* .unk_02 */ 		0x0005,
// /* .unk_04 */ 		0x01,
// /* .unk_05 */ 		0x00,
// /* .unk06 */ 		0x00,
// /* .unk07 */ 		0x01,
// /* .textOffset1 */ 	0x5DB8,
// /* .textOffset2 */ 	0x5E90,
// /* .unkC */ 		0x00000000, //unknown type (unused?)
// /* .modelData */ 	0x8021B994,
// /* .npcName */ 		0x8023971C,
// /* .unk18 */ 		0x00000000, //unknown type (unused?)
// /* .pos */ 			{ 0.0f, 15.0f },
// /* .rotation */ 	2.3561999797821045f,
// /* .sizeScaler */ 	0.07000000029802322f,
// },

// /* Byson (Normoon Houses) */
// {
// /* .unk_00 */ 		0x0000,
// /* .unk_02 */ 		0x0005,
// /* .unk_04 */ 		0x01,
// /* .unk_05 */ 		0x00,
// /* .unk06 */ 		0x00,
// /* .unk07 */ 		0x01,
// /* .textOffset1 */ 	0x5FA0,
// /* .textOffset2 */ 	0x6078,
// /* .unkC */ 		0x00000000, //unknown type (unused?)
// /* .modelData */ 	0x80219A20,
// /* .npcName */ 		0x80239728,
// /* .unk18 */ 		0x00000000, //unknown type (unused?)
// /* .pos */ 			{ 0.0f, 16.0f },
// /* .rotation */ 	2.3561999797821045f,
// /* .sizeScaler */ 	0.07000000029802322f,
// },

// /* Hector (Normoon Houses) */
// {
// /* .unk_00 */ 		0x0002,
// /* .unk_02 */ 		0x0002,
// /* .unk_04 */ 		0x01,
// /* .unk_05 */ 		0x00,
// /* .unk06 */ 		0x00,
// /* .unk07 */ 		0x02,
// /* .textOffset1 */ 	0x6128,
// /* .textOffset2 */ 	0x61D0,
// /* .unkC */ 		0x00000000, //unknown type (unused?)
// /* .modelData */ 	0x8021B940,
// /* .npcName */ 		0x80239734,
// /* .unk18 */ 		0x00000000, //unknown type (unused?)
// /* .pos */ 			{ -10.0f, 0.0f },
// /* .rotation */ 	1.5707999467849731f,
// /* .sizeScaler */ 	0.07000000029802322f,
// },

// /* Leonardo (Normoon INN) */
// {
// /* .unk_00 */ 		0x0007,
// /* .unk_02 */ 		0x0005,
// /* .unk_04 */ 		0x01,
// /* .unk_05 */ 		0x00,
// /* .unk06 */ 		0x00,
// /* .unk07 */ 		0x01,
// /* .textOffset1 */ 	0x6598,
// /* .textOffset2 */ 	0x6728,
// /* .unkC */ 		0x00000000, //unknown type (unused?)
// /* .modelData */ 	0x8021DFB4,
// /* .npcName */ 		0x80239764,
// /* .unk18 */ 		0x00000000, //unknown type (unused?)
// /* .pos */ 			{ 2.0f, -1.0f },
// /* .rotation */ 	1.396299958229065f,
// /* .sizeScaler */ 	0.07000000029802322f,
// },

// /* Tilly (Normoon INN) */
// {
// /* .unk_00 */ 		0x0008,
// /* .unk_02 */ 		0x0005,
// /* .unk_04 */ 		0x01,
// /* .unk_05 */ 		0x00,
// /* .unk06 */ 		0x00,
// /* .unk07 */ 		0x01,
// /* .textOffset1 */ 	0x67C0,
// /* .textOffset2 */ 	0x68B8,
// /* .unkC */ 		0x00000000, //unknown type (unused?)
// /* .modelData */ 	0x80215E00,
// /* .npcName */ 		0x80239774,
// /* .unk18 */ 		0x00000000, //unknown type (unused?)
// /* .pos */ 			{ -7.0f, 0.0f },
// /* .rotation */ 	-0.7678999900817871f,
// /* .sizeScaler */ 	0.07699999958276749f,
// },

// /* Anette (Normoon Green Wings Shop) */
// {
// /* .unk_00 */ 		0x000B,
// /* .unk_02 */ 		0x0002,
// /* .unk_04 */ 		0x01,
// /* .unk_05 */ 		0x01,
// /* .unk06 */ 		0x00,
// /* .unk07 */ 		0x11,
// /* .textOffset1 */ 	0x6928,
// /* .textOffset2 */ 	0x69F8,
// /* .unkC */ 		0x00000000, //unknown type (unused?)
// /* .modelData */ 	0x802199D0,
// /* .npcName */ 		0x80239780,
// /* .unk18 */ 		0x00000000, //unknown type (unused?)
// /* .pos */ 			{ 0.0f, -4.0f },
// /* .rotation */ 	0.0f,
// /* .sizeScaler */ 	0.07000000029802322f,
// },

// /* Rysha (Normoon INN) */
// {
// /* .unk_00 */ 		0x0005,
// /* .unk_02 */ 		0x0006,
// /* .unk_04 */ 		0x01,
// /* .unk_05 */ 		0x01,
// /* .unk06 */ 		0x00,
// /* .unk07 */ 		0x00,
// /* .textOffset1 */ 	0x6A48,
// /* .textOffset2 */ 	0x0000,
// /* .unkC */ 		0x00000000, //unknown type (unused?)
// /* .modelData */ 	0x80214B70,
// /* .npcName */ 		0x8023978C,
// /* .unk18 */ 		0x00000000, //unknown type (unused?)
// /* .pos */ 			{ 30.0f, 0.0f },
// /* .rotation */ 	-1.5707999467849731f,
// /* .sizeScaler */ 	0.07000000029802322f,
// },

// /* Deanna (Limelin Castle) */
// {
// /* .unk_00 */ 		0x0005,
// /* .unk_02 */ 		0x0005,
// /* .unk_04 */ 		0x01,
// /* .unk_05 */ 		0x00,
// /* .unk06 */ 		0x00,
// /* .unk07 */ 		0x04,
// /* .textOffset1 */ 	0x7B18,
// /* .textOffset2 */ 	0x7C88,
// /* .unkC */ 		0x00000000, //unknown type (unused?)
// /* .modelData */ 	0x8020F058,
// /* .npcName */ 		0x802677C4,
// /* .unk18 */ 		0x00000000, //unknown type (unused?)
// /* .pos */ 			{ 0.0f, -65.0f },
// /* .rotation */ 	0.0f,
// /* .sizeScaler */ 	0.07000000029802322f,
// },

// /* William (Limelin Castle) */
// {
// /* .unk_00 */ 		0x000B,
// /* .unk_02 */ 		0x0005,
// /* .unk_04 */ 		0x02,
// /* .unk_05 */ 		0x00,
// /* .unk06 */ 		0x00,
// /* .unk07 */ 		0x04,
// /* .textOffset1 */ 	0x7DA0,
// /* .textOffset2 */ 	0x7E40,
// /* .unkC */ 		0x00000000, //unknown type (unused?)
// /* .modelData */ 	0x80229C44,
// /* .npcName */ 		0x802677D0,
// /* .unk18 */ 		0x00000000, //unknown type (unused?)
// /* .pos */ 			{ 24.0f, 0.0f },
// /* .rotation */ 	0.0f,
// /* .sizeScaler */ 	0.07000000029802322f,
// },

// /* Zing (Limelin Castle) */
// {
// /* .unk_00 */ 		0x0006,
// /* .unk_02 */ 		0x0001,
// /* .unk_04 */ 		0x01,
// /* .unk_05 */ 		0x00,
// /* .unk06 */ 		0x00,
// /* .unk07 */ 		0x00,
// /* .textOffset1 */ 	0x7EF0,
// /* .textOffset2 */ 	0x0000,
// /* .unkC */ 		0x00000000, //unknown type (unused?)
// /* .modelData */ 	0x802278F4,
// /* .npcName */ 		0x802677DC,
// /* .unk18 */ 		0x00000000, //unknown type (unused?)
// /* .pos */ 			{ 10.0f, 5.0f },
// /* .rotation */ 	0.7853999733924866f,
// /* .sizeScaler */ 	0.07000000029802322f,
// },

// /* Lenbil (Limelin Castle) */
// {
// /* .unk_00 */ 		0x0005,
// /* .unk_02 */ 		0x0005,
// /* .unk_04 */ 		0x01,
// /* .unk_05 */ 		0x00,
// /* .unk06 */ 		0x00,
// /* .unk07 */ 		0x03,
// /* .textOffset1 */ 	0x7F60,
// /* .textOffset2 */ 	0x80B0,
// /* .unkC */ 		0x00000000, //unknown type (unused?)
// /* .modelData */ 	0x80224AAC,
// /* .npcName */ 		0x802677E8,
// /* .unk18 */ 		0x00000000, //unknown type (unused?)
// /* .pos */ 			{ -30.0f, -30.0f },
// /* .rotation */ 	0.0f,
// /* .sizeScaler */ 	0.07000000029802322f,
// },

// /* Linton (Limelin Castle) */
// {
// /* .unk_00 */ 		0x0005,
// /* .unk_02 */ 		0x0005,
// /* .unk_04 */ 		0x01,
// /* .unk_05 */ 		0x00,
// /* .unk06 */ 		0x00,
// /* .unk07 */ 		0x04,
// /* .textOffset1 */ 	0x81C8,
// /* .textOffset2 */ 	0x8290,
// /* .unkC */ 		0x00000000, //unknown type (unused?)
// /* .modelData */ 	0x80224AFC,
// /* .npcName */ 		0x802677F4,
// /* .unk18 */ 		0x00000000, //unknown type (unused?)
// /* .pos */ 			{ 30.0f, -30.0f },
// /* .rotation */ 	0.0f,
// /* .sizeScaler */ 	0.07000000029802322f,
// },

// /* Zafa (Limelin Castle) */
// {
// /* .unk_00 */ 		0x0001,
// /* .unk_02 */ 		0x0001,
// /* .unk_04 */ 		0x01,
// /* .unk_05 */ 		0x00,
// /* .unk06 */ 		0x00,
// /* .unk07 */ 		0x00,
// /* .textOffset1 */ 	0x8350,
// /* .textOffset2 */ 	0x0000,
// /* .unkC */ 		0x00000000, //unknown type (unused?)
// /* .modelData */ 	0x80227770,
// /* .npcName */ 		0x80267800,
// /* .unk18 */ 		0x00000000, //unknown type (unused?)
// /* .pos */ 			{ -29.0f, -99.0f },
// /* .rotation */ 	0.0f,
// /* .sizeScaler */ 	0.07000000029802322f,
// },

// /* Balu (Limelin Castle) */
// {
// /* .unk_00 */ 		0x0001,
// /* .unk_02 */ 		0x0001,
// /* .unk_04 */ 		0x01,
// /* .unk_05 */ 		0x00,
// /* .unk06 */ 		0x00,
// /* .unk07 */ 		0x00,
// /* .textOffset1 */ 	0x8408,
// /* .textOffset2 */ 	0x0000,
// /* .unkC */ 		0x00000000, //unknown type (unused?)
// /* .modelData */ 	0x80227834,
// /* .npcName */ 		0x8026780C,
// /* .unk18 */ 		0x00000000, //unknown type (unused?)
// /* .pos */ 			{ 29.0f, -99.0f },
// /* .rotation */ 	0.0f,
// /* .sizeScaler */ 	0.07000000029802322f,
// },

// /* Jared (Limelin Castle) */
// {
// /* .unk_00 */ 		0x0004,
// /* .unk_02 */ 		0x0005,
// /* .unk_04 */ 		0x01,
// /* .unk_05 */ 		0x00,
// /* .unk06 */ 		0x00,
// /* .unk07 */ 		0x04,
// /* .textOffset1 */ 	0x8488,
// /* .textOffset2 */ 	0x8500,
// /* .unkC */ 		0x00000000, //unknown type (unused?)
// /* .modelData */ 	0x802277D4,
// /* .npcName */ 		0x80267818,
// /* .unk18 */ 		0x00000000, //unknown type (unused?)
// /* .pos */ 			{ 0.0f, -10.0f },
// /* .rotation */ 	0.7853999733924866f,
// /* .sizeScaler */ 	0.07000000029802322f,
// },

// /* Damon (Limelin Castle) */
// {
// /* .unk_00 */ 		0x0003,
// /* .unk_02 */ 		0x0005,
// /* .unk_04 */ 		0x01,
// /* .unk_05 */ 		0x00,
// /* .unk06 */ 		0x00,
// /* .unk07 */ 		0x03,
// /* .textOffset1 */ 	0x8578,
// /* .textOffset2 */ 	0x86B0,
// /* .unkC */ 		0x00000000, //unknown type (unused?)
// /* .modelData */ 	0x80227894,
// /* .npcName */ 		0x80267824,
// /* .unk18 */ 		0x00000000, //unknown type (unused?)
// /* .pos */ 			{ -10.0f, -8.0f },
// /* .rotation */ 	1.5707999467849731f,
// /* .sizeScaler */ 	0.07000000029802322f,
// },

// /* Ian (Limelin Castle) */
// {
// /* .unk_00 */ 		0x0000,
// /* .unk_02 */ 		0x0001,
// /* .unk_04 */ 		0x01,
// /* .unk_05 */ 		0x00,
// /* .unk06 */ 		0x00,
// /* .unk07 */ 		0x00,
// /* .textOffset1 */ 	0x8750,
// /* .textOffset2 */ 	0x0000,
// /* .unkC */ 		0x00000000, //unknown type (unused?)
// /* .modelData */ 	0x80225454,
// /* .npcName */ 		0x80267830,
// /* .unk18 */ 		0x00000000, //unknown type (unused?)
// /* .pos */ 			{ -27.0f, 118.0f },
// /* .rotation */ 	-3.1415998935699463f,
// /* .sizeScaler */ 	0.07000000029802322f,
// },

// /* Shannon (Limelin INN) */
// {
// /* .unk_00 */ 		0x000E,
// /* .unk_02 */ 		0x0001,
// /* .unk_04 */ 		0x01,
// /* .unk_05 */ 		0x00,
// /* .unk06 */ 		0x00,
// /* .unk07 */ 		0x00,
// /* .textOffset1 */ 	0x07A0,
// /* .textOffset2 */ 	0x0000,
// /* .unkC */ 		0x00000000, //unknown type (unused?)
// /* .modelData */ 	0x802A2A24,
// /* .npcName */ 		0x802A7BB0,
// /* .unk18 */ 		0x00000000, //unknown type (unused?)
// /* .pos */ 			{ -16.0f, 18.0f },
// /* .rotation */ 	1.5707999467849731f,
// /* .sizeScaler */ 	0.07000000029802322f,
// },

// /* Dolgo (Limelin Houses) */
// {
// /* .unk_00 */ 		0x0003,
// /* .unk_02 */ 		0x0001,
// /* .unk_04 */ 		0x01,
// /* .unk_05 */ 		0x00,
// /* .unk06 */ 		0x00,
// /* .unk07 */ 		0x00,
// /* .textOffset1 */ 	0x6B20,
// /* .textOffset2 */ 	0x0000,
// /* .unkC */ 		0x00000000, //unknown type (unused?)
// /* .modelData */ 	0x8021A224,
// /* .npcName */ 		0x802676F4,
// /* .unk18 */ 		0x00000000, //unknown type (unused?)
// /* .pos */ 			{ 0.0f, 5.0f },
// /* .rotation */ 	2.3561999797821045f,
// /* .sizeScaler */ 	0.07000000029802322f,
// },

// /* Opal (Limelin Houses) */
// {
// /* .unk_00 */ 		0x000B,
// /* .unk_02 */ 		0x0001,
// /* .unk_04 */ 		0x01,
// /* .unk_05 */ 		0x00,
// /* .unk06 */ 		0x00,
// /* .unk07 */ 		0x00,
// /* .textOffset1 */ 	0x6CF8,
// /* .textOffset2 */ 	0x0000,
// /* .unkC */ 		0x00000000, //unknown type (unused?)
// /* .modelData */ 	0x8021B5DC,
// /* .npcName */ 		0x8026770C,
// /* .unk18 */ 		0x00000000, //unknown type (unused?)
// /* .pos */ 			{ 0.0f, -10.0f },
// /* .rotation */ 	0.7853999733924866f,
// /* .sizeScaler */ 	0.07000000029802322f,
// },

// /* Coral (Limelin Houses) */
// {
// /* .unk_00 */ 		0x000B,
// /* .unk_02 */ 		0x0001,
// /* .unk_04 */ 		0x01,
// /* .unk_05 */ 		0x00,
// /* .unk06 */ 		0x00,
// /* .unk07 */ 		0x00,
// /* .textOffset1 */ 	0x6DA0,
// /* .textOffset2 */ 	0x0000,
// /* .unkC */ 		0x00000000, //unknown type (unused?)
// /* .modelData */ 	0x8021EFC4,
// /* .npcName */ 		0x80267718,
// /* .unk18 */ 		0x00000000, //unknown type (unused?)
// /* .pos */ 			{ 0.0f, 10.0f },
// /* .rotation */ 	2.3561999797821045f,
// /* .sizeScaler */ 	0.07000000029802322f,
// },

// /* Amber (Limelin Houses) */
// {
// /* .unk_00 */ 		0x0006,
// /* .unk_02 */ 		0x0001,
// /* .unk_04 */ 		0x00,
// /* .unk_05 */ 		0x00,
// /* .unk06 */ 		0x00,
// /* .unk07 */ 		0x00,
// /* .textOffset1 */ 	0x6F78,
// /* .textOffset2 */ 	0x0000,
// /* .unkC */ 		0x00000000, //unknown type (unused?)
// /* .modelData */ 	0x8021C860,
// /* .npcName */ 		0x80267730,
// /* .unk18 */ 		0x00000000, //unknown type (unused?)
// /* .pos */ 			{ -10.0f, 7.0f },
// /* .rotation */ 	1.5707999467849731f,
// /* .sizeScaler */ 	0.07699999958276749f,
// },

// /* Elle (LImelin Houses) */
// {
// /* .unk_00 */ 		0x0009,
// /* .unk_02 */ 		0x0001,
// /* .unk_04 */ 		0x01,
// /* .unk_05 */ 		0x00,
// /* .unk06 */ 		0x00,
// /* .unk07 */ 		0x00,
// /* .textOffset1 */ 	0x7260,
// /* .textOffset2 */ 	0x0000,
// /* .unkC */ 		0x00000000, //unknown type (unused?)
// /* .modelData */ 	0x8021D65C,
// /* .npcName */ 		0x80267748,
// /* .unk18 */ 		0x00000000, //unknown type (unused?)
// /* .pos */ 			{ -10.0f, 0.0f },
// /* .rotation */ 	1.5707999467849731f,
// /* .sizeScaler */ 	0.07000000029802322f,
// },

// /* Dio (Limelin Tavern) */
// {
// /* .unk_00 */ 		0x0014,
// /* .unk_02 */ 		0x0001,
// /* .unk_04 */ 		0x01,
// /* .unk_05 */ 		0x00,
// /* .unk06 */ 		0x00,
// /* .unk07 */ 		0x00,
// /* .textOffset1 */ 	0x7428,
// /* .textOffset2 */ 	0x0000,
// /* .unkC */ 		0x00000000, //unknown type (unused?)
// /* .modelData */ 	0x80215B0C,
// /* .npcName */ 		0x80267760,
// /* .unk18 */ 		0x00000000, //unknown type (unused?)
// /* .pos */ 			{ -20.0f, 14.0f },
// /* .rotation */ 	2.3561999797821045f,
// /* .sizeScaler */ 	0.07000000029802322f,
// },

// /* Roach (Limelin Tavern) */
// {
// /* .unk_00 */ 		0x0014,
// /* .unk_02 */ 		0x0001,
// /* .unk_04 */ 		0x01,
// /* .unk_05 */ 		0x01,
// /* .unk06 */ 		0x00,
// /* .unk07 */ 		0x00,
// /* .textOffset1 */ 	0x7570,
// /* .textOffset2 */ 	0x0000,
// /* .unkC */ 		0x00000000, //unknown type (unused?)
// /* .modelData */ 	0x80216A24,
// /* .npcName */ 		0x80267770,
// /* .unk18 */ 		0x00000000, //unknown type (unused?)
// /* .pos */ 			{ 6.0f, -34.0f },
// /* .rotation */ 	0.0f,
// /* .sizeScaler */ 	0.07000000029802322f,
// },

// /* Cindy (Limelin Tavern) */
// {
// /* .unk_00 */ 		0x0014,
// /* .unk_02 */ 		0x0001,
// /* .unk_04 */ 		0x01,
// /* .unk_05 */ 		0x00,
// /* .unk06 */ 		0x00,
// /* .unk07 */ 		0x00,
// /* .textOffset1 */ 	0x75F8,
// /* .textOffset2 */ 	0x0000,
// /* .unkC */ 		0x00000000, //unknown type (unused?)
// /* .modelData */ 	0x8021C8B0,
// /* .npcName */ 		0x8026777C,
// /* .unk18 */ 		0x00000000, //unknown type (unused?)
// /* .pos */ 			{ 5.0f, 0.0f },
// /* .rotation */ 	0.7853999733924866f,
// /* .sizeScaler */ 	0.07699999958276749f,
// },

// /* Rhett (Limelin Tavern) */
// {
// /* .unk_00 */ 		0x0014,
// /* .unk_02 */ 		0x0002,
// /* .unk_04 */ 		0x01,
// /* .unk_05 */ 		0x00,
// /* .unk06 */ 		0x00,
// /* .unk07 */ 		0x07,
// /* .textOffset1 */ 	0x76D0,
// /* .textOffset2 */ 	0x7770,
// /* .unkC */ 		0x00000000, //unknown type (unused?)
// /* .modelData */ 	0x8021A2CC,
// /* .npcName */ 		0x80267788,
// /* .unk18 */ 		0x00000000, //unknown type (unused?)
// /* .pos */ 			{ -20.0f, -2.0f },
// /* .rotation */ 	0.7853999733924866f,
// /* .sizeScaler */ 	0.07000000029802322f,
// },

// /* Canny (Limelin INN) */
// {
// /* .unk_00 */ 		0x000E,
// /* .unk_02 */ 		0x0006,
// /* .unk_04 */ 		0x01,
// /* .unk_05 */ 		0x01,
// /* .unk06 */ 		0x00,
// /* .unk07 */ 		0x00,
// /* .textOffset1 */ 	0x7818,
// /* .textOffset2 */ 	0x0000,
// /* .unkC */ 		0x00000000, //unknown type (unused?)
// /* .modelData */ 	0x80216A8C,
// /* .npcName */ 		0x80267794,
// /* .unk18 */ 		0x00000000, //unknown type (unused?)
// /* .pos */ 			{ 30.0f, 0.0f },
// /* .rotation */ 	-1.5707999467849731f,
// /* .sizeScaler */ 	0.07000000029802322f,
// },

// /* Talco (Limelin Houses) */
// {
// /* .unk_00 */ 		0x0004,
// /* .unk_02 */ 		0x0001,
// /* .unk_04 */ 		0x01,
// /* .unk_05 */ 		0x00,
// /* .unk06 */ 		0x00,
// /* .unk07 */ 		0x00,
// /* .textOffset1 */ 	0x7890,
// /* .textOffset2 */ 	0x0000,
// /* .unkC */ 		0x00000000, //unknown type (unused?)
// /* .modelData */ 	0x802188BC,
// /* .npcName */ 		0x802677A0,
// /* .unk18 */ 		0x00000000, //unknown type (unused?)
// /* .pos */ 			{ -10.0f, 7.0f },
// /* .rotation */ 	1.5707999467849731f,
// /* .sizeScaler */ 	0.07000000029802322f,
// },

// /* Ring (Limelin Wing Shop) */
// {
// /* .unk_00 */ 		0x0015,
// /* .unk_02 */ 		0x0002,
// /* .unk_04 */ 		0x01,
// /* .unk_05 */ 		0x01,
// /* .unk06 */ 		0x00,
// /* .unk07 */ 		0x12,
// /* .textOffset1 */ 	0x7900,
// /* .textOffset2 */ 	0x79E8,
// /* .unkC */ 		0x00000000, //unknown type (unused?)
// /* .modelData */ 	0x80224A0C,
// /* .npcName */ 		0x802677AC,
// /* .unk18 */ 		0x00000000, //unknown type (unused?)
// /* .pos */ 			{ 0.0f, -15.0f },
// /* .rotation */ 	0.0f,
// /* .sizeScaler */ 	0.07000000029802322f,
// },

// /* Tina (Limelin Houses) */
// {
// /* .unk_00 */ 		0x0002,
// /* .unk_02 */ 		0x0001,
// /* .unk_04 */ 		0x01,
// /* .unk_05 */ 		0x00,
// /* .unk06 */ 		0x00,
// /* .unk07 */ 		0x00,
// /* .textOffset1 */ 	0x7AA0,
// /* .textOffset2 */ 	0x0000,
// /* .unkC */ 		0x00000000, //unknown type (unused?)
// /* .modelData */ 	0x8021D61C,
// /* .npcName */ 		0x802677B8,
// /* .unk18 */ 		0x00000000, //unknown type (unused?)
// /* .pos */ 			{ 0.0f, 2.0f },
// /* .rotation */ 	1.5707999467849731f,
// /* .sizeScaler */ 	0.07000000029802322f,
// },

// /* Sebastian (Limelin Houses) */
// {
// /* .unk_00 */ 		0x0016,
// /* .unk_02 */ 		0x0006,
// /* .unk_04 */ 		0x01,
// /* .unk_05 */ 		0x00,
// /* .unk06 */ 		0x00,
// /* .unk07 */ 		0x00,
// /* .textOffset1 */ 	0xB2A8,
// /* .textOffset2 */ 	0x0000,
// /* .unkC */ 		0x00000000, //unknown type (unused?)
// /* .modelData */ 	0x8021FD64,
// /* .npcName */ 		0x8026A850,
// /* .unk18 */ 		0x00000000, //unknown type (unused?)
// /* .pos */ 			{ 11.0f, 6.0f },
// /* .rotation */ 	0.7678999900817871f,
// /* .sizeScaler */ 	0.07000000029802322f,
// },

// /* Shannon (Greenoch INN) */
// {
// /* .unk_00 */ 		0x0000,
// /* .unk_02 */ 		0x0001,
// /* .unk_04 */ 		0x01,
// /* .unk_05 */ 		0x00,
// /* .unk06 */ 		0x00,
// /* .unk07 */ 		0x00,
// /* .textOffset1 */ 	0x0858,
// /* .textOffset2 */ 	0x0000,
// /* .unkC */ 		0x00000000, //unknown type (unused?)
// /* .modelData */ 	0x802A2A24,
// /* .npcName */ 		0x802A7BB0,
// /* .unk18 */ 		0x00000000, //unknown type (unused?)
// /* .pos */ 			{ -16.0f, 18.0f },
// /* .rotation */ 	1.5707999467849731f,
// /* .sizeScaler */ 	0.07000000029802322f,
// },

// /* Shannon (Brannoch INN) */
// {
// /* .unk_00 */ 		0x0008,
// /* .unk_02 */ 		0x0001,
// /* .unk_04 */ 		0x01,
// /* .unk_05 */ 		0x00,
// /* .unk06 */ 		0x00,
// /* .unk07 */ 		0x00,
// /* .textOffset1 */ 	0x0940,
// /* .textOffset2 */ 	0x0000,
// /* .unkC */ 		0x00000000, //unknown type (unused?)
// /* .modelData */ 	0x802A2A24,
// /* .npcName */ 		0x802A7BB0,
// /* .unk18 */ 		0x00000000, //unknown type (unused?)
// /* .pos */ 			{ -16.0f, 18.0f },
// /* .rotation */ 	1.5707999467849731f,
// /* .sizeScaler */ 	0.07000000029802322f,
// },

// /* Tom (Brannoch Black Wings Shop) */
// {
// /* .unk_00 */ 		0x000E,
// /* .unk_02 */ 		0x0002,
// /* .unk_04 */ 		0x01,
// /* .unk_05 */ 		0x01,
// /* .unk06 */ 		0x00,
// /* .unk07 */ 		0x13,
// /* .textOffset1 */ 	0x87B8,
// /* .textOffset2 */ 	0x8878,
// /* .unkC */ 		0x00000000, //unknown type (unused?)
// /* .modelData */ 	0x802172D4,
// /* .npcName */ 		0x802410F0,
// /* .unk18 */ 		0x00000000, //unknown type (unused?)
// /* .pos */ 			{ 0.0f, -4.0f },
// /* .rotation */ 	0.0f,
// /* .sizeScaler */ 	0.07000000029802322f,
// },

// /* Kolles (Brannoch INN) */
// {
// /* .unk_00 */ 		0x000B,
// /* .unk_02 */ 		0x0001,
// /* .unk_04 */ 		0x01,
// /* .unk_05 */ 		0x01,
// /* .unk06 */ 		0x00,
// /* .unk07 */ 		0x00,
// /* .textOffset1 */ 	0x88D0,
// /* .textOffset2 */ 	0x0000,
// /* .unkC */ 		0x00000000, //unknown type (unused?)
// /* .modelData */ 	0x80213D4C,
// /* .npcName */ 		0x802410F8,
// /* .unk18 */ 		0x00000000, //unknown type (unused?)
// /* .pos */ 			{ -6.0f, -9.0f },
// /* .rotation */ 	-0.7853999733924866f,
// /* .sizeScaler */ 	0.07000000029802322f,
// },

// /* Stewart (Brannoch INN) */
// {
// /* .unk_00 */ 		0x0008,
// /* .unk_02 */ 		0x0006,
// /* .unk_04 */ 		0x01,
// /* .unk_05 */ 		0x01,
// /* .unk06 */ 		0x00,
// /* .unk07 */ 		0x00,
// /* .textOffset1 */ 	0x89B8,
// /* .textOffset2 */ 	0x0000,
// /* .unkC */ 		0x00000000, //unknown type (unused?)
// /* .modelData */ 	0x8021A68C,
// /* .npcName */ 		0x80241104,
// /* .unk18 */ 		0x00000000, //unknown type (unused?)
// /* .pos */ 			{ 30.0f, 0.0f },
// /* .rotation */ 	-1.5707999467849731f,
// /* .sizeScaler */ 	0.07000000029802322f,
// },

// /* Tinvel (Brannoch Houses) */
// {
// /* .unk_00 */ 		0x000F,
// /* .unk_02 */ 		0x0001,
// /* .unk_04 */ 		0x01,
// /* .unk_05 */ 		0x00,
// /* .unk06 */ 		0x00,
// /* .unk07 */ 		0x00,
// /* .textOffset1 */ 	0x8A48,
// /* .textOffset2 */ 	0x0000,
// /* .unkC */ 		0x00000000, //unknown type (unused?)
// /* .modelData */ 	0x8021C9A0,
// /* .npcName */ 		0x80241110,
// /* .unk18 */ 		0x00000000, //unknown type (unused?)
// /* .pos */ 			{ 16.0f, -22.0f },
// /* .rotation */ 	0.6980999708175659f,
// /* .sizeScaler */ 	0.07000000029802322f,
// },

// /* Hersh (Brannoch Houses) */
// {
// /* .unk_00 */ 		0x000F,
// /* .unk_02 */ 		0x0001,
// /* .unk_04 */ 		0x01,
// /* .unk_05 */ 		0x00,
// /* .unk06 */ 		0x00,
// /* .unk07 */ 		0x00,
// /* .textOffset1 */ 	0x8B70,
// /* .textOffset2 */ 	0x0000,
// /* .unkC */ 		0x00000000, //unknown type (unused?)
// /* .modelData */ 	0x8021CA04,
// /* .npcName */ 		0x8024111C,
// /* .unk18 */ 		0x00000000, //unknown type (unused?)
// /* .pos */ 			{ 0.0f, -22.0f },
// /* .rotation */ 	1.5707999467849731f,
// /* .sizeScaler */ 	0.07000000029802322f,
// },

// /* Vilgue (Brannoch Houses) */
// {
// /* .unk_00 */ 		0x0010,
// /* .unk_02 */ 		0x0001,
// /* .unk_04 */ 		0x01,
// /* .unk_05 */ 		0x00,
// /* .unk06 */ 		0x00,
// /* .unk07 */ 		0x00,
// /* .textOffset1 */ 	0x8C90,
// /* .textOffset2 */ 	0x0000,
// /* .unkC */ 		0x00000000, //unknown type (unused?)
// /* .modelData */ 	0x8021CA64,
// /* .npcName */ 		0x80241128,
// /* .unk18 */ 		0x00000000, //unknown type (unused?)
// /* .pos */ 			{ 0.0f, 0.0f },
// /* .rotation */ 	1.5707999467849731f,
// /* .sizeScaler */ 	0.07000000029802322f,
// },

// /* Valens Brannoch Houses) */
// {
// /* .unk_00 */ 		0x0011,
// /* .unk_02 */ 		0x0001,
// /* .unk_04 */ 		0x01,
// /* .unk_05 */ 		0x00,
// /* .unk06 */ 		0x00,
// /* .unk07 */ 		0x00,
// /* .textOffset1 */ 	0x8CF8,
// /* .textOffset2 */ 	0x0000,
// /* .unkC */ 		0x00000000, //unknown type (unused?)
// /* .modelData */ 	0x8021CAC4,
// /* .npcName */ 		0x80241134,
// /* .unk18 */ 		0x00000000, //unknown type (unused?)
// /* .pos */ 			{ 10.0f, -4.0f },
// /* .rotation */ 	2.3561999797821045f,
// /* .sizeScaler */ 	0.07000000029802322f,
// },

// /* Andrew (Brannoch Houses) */
// {
// /* .unk_00 */ 		0x0011,
// /* .unk_02 */ 		0x0001,
// /* .unk_04 */ 		0x01,
// /* .unk_05 */ 		0x00,
// /* .unk06 */ 		0x00,
// /* .unk07 */ 		0x00,
// /* .textOffset1 */ 	0x8D70,
// /* .textOffset2 */ 	0x0000,
// /* .unkC */ 		0x00000000, //unknown type (unused?)
// /* .modelData */ 	0x8021CB24,
// /* .npcName */ 		0x80241140,
// /* .unk18 */ 		0x00000000, //unknown type (unused?)
// /* .pos */ 			{ -11.0f, 12.0f },
// /* .rotation */ 	1.5707999467849731f,
// /* .sizeScaler */ 	0.07000000029802322f,
// },

// /* Roddy (Brannoch Houses) */
// {
// /* .unk_00 */ 		0x0012,
// /* .unk_02 */ 		0x0001,
// /* .unk_04 */ 		0x01,
// /* .unk_05 */ 		0x00,
// /* .unk06 */ 		0x00,
// /* .unk07 */ 		0x00,
// /* .textOffset1 */ 	0x8DD0,
// /* .textOffset2 */ 	0x0000,
// /* .unkC */ 		0x00000000, //unknown type (unused?)
// /* .modelData */ 	0x8021CB84,
// /* .npcName */ 		0x8024114C,
// /* .unk18 */ 		0x00000000, //unknown type (unused?)
// /* .pos */ 			{ 0.0f, 7.0f },
// /* .rotation */ 	2.3561999797821045f,
// /* .sizeScaler */ 	0.07000000029802322f,
// },

// /* Morris (Brannoch Houses) */
// {
// /* .unk_00 */ 		0x0012,
// /* .unk_02 */ 		0x0002,
// /* .unk_04 */ 		0x01,
// /* .unk_05 */ 		0x00,
// /* .unk06 */ 		0x00,
// /* .unk07 */ 		0x07,
// /* .textOffset1 */ 	0x8EB8,
// /* .textOffset2 */ 	0x8F50,
// /* .unkC */ 		0x00000000, //unknown type (unused?)
// /* .modelData */ 	0x8021CBE4,
// /* .npcName */ 		0x80241158,
// /* .unk18 */ 		0x00000000, //unknown type (unused?)
// /* .pos */ 			{ 0.0f, -19.0f },
// /* .rotation */ 	0.7853999733924866f,
// /* .sizeScaler */ 	0.07000000029802322f,
// },

// /* Zonne (Greenoch INN) */
// {
// /* .unk_00 */ 		0x0002,
// /* .unk_02 */ 		0x0005,
// /* .unk_04 */ 		0x01,
// /* .unk_05 */ 		0x00,
// /* .unk06 */ 		0x00,
// /* .unk07 */ 		0x04,
// /* .textOffset1 */ 	0x8FD8,
// /* .textOffset2 */ 	0x90C0,
// /* .unkC */ 		0x00000000, //unknown type (unused?)
// /* .modelData */ 	0x802188A0,
// /* .npcName */ 		0x80241164,
// /* .unk18 */ 		0x00000000, //unknown type (unused?)
// /* .pos */ 			{ -6.0f, -4.0f },
// /* .rotation */ 	1.5707999467849731f,
// /* .sizeScaler */ 	0.07000000029802322f,
// },

// /* Ryure (Brannoch Houses) */
// {
// /* .unk_00 */ 		0x0006,
// /* .unk_02 */ 		0x0001,
// /* .unk_04 */ 		0x01,
// /* .unk_05 */ 		0x00,
// /* .unk06 */ 		0x00,
// /* .unk07 */ 		0x00,
// /* .textOffset1 */ 	0x9200,
// /* .textOffset2 */ 	0x0000,
// /* .unkC */ 		0x00000000, //unknown type (unused?)
// /* .modelData */ 	0x80211F6C,
// /* .npcName */ 		0x80241170,
// /* .unk18 */ 		0x00000000, //unknown type (unused?)
// /* .pos */ 			{ 0.0f, -16.0f },
// /* .rotation */ 	0.7853999733924866f,
// /* .sizeScaler */ 	0.07000000029802322f,
// },

// /* Janat (Brannoch Houses) */
// {
// /* .unk_00 */ 		0x0006,
// /* .unk_02 */ 		0x0001,
// /* .unk_04 */ 		0x01,
// /* .unk_05 */ 		0x00,
// /* .unk06 */ 		0x00,
// /* .unk07 */ 		0x00,
// /* .textOffset1 */ 	0x9280,
// /* .textOffset2 */ 	0x0000,
// /* .unkC */ 		0x00000000, //unknown type (unused?)
// /* .modelData */ 	0x8021505C,
// /* .npcName */ 		0x8024117C,
// /* .unk18 */ 		0x00000000, //unknown type (unused?)
// /* .pos */ 			{ -11.0f, 6.0f },
// /* .rotation */ 	1.5707999467849731f,
// /* .sizeScaler */ 	0.07000000029802322f,
// },

// /* Bronze (Greenoch Item Shop) */
// {
// /* .unk_00 */ 		0x0005,
// /* .unk_02 */ 		0x0002,
// /* .unk_04 */ 		0x01,
// /* .unk_05 */ 		0x01,
// /* .unk06 */ 		0x00,
// /* .unk07 */ 		0x03,
// /* .textOffset1 */ 	0xB3B0,
// /* .textOffset2 */ 	0xB490,
// /* .unkC */ 		0x00000000, //unknown type (unused?)
// /* .modelData */ 	0x8021A6CC,
// /* .npcName */ 		0x8026A860,
// /* .unk18 */ 		0x00000000, //unknown type (unused?)
// /* .pos */ 			{ 0.0f, -4.0f },
// /* .rotation */ 	0.0f,
// /* .sizeScaler */ 	0.07000000029802322f,
// },

// /* Gelson (Dindom Dries Tent) */
// {
// /* .unk_00 */ 		0x0013,
// /* .unk_02 */ 		0x0006,
// /* .unk_04 */ 		0x01,
// /* .unk_05 */ 		0x00,
// /* .unk06 */ 		0x00,
// /* .unk07 */ 		0x00,
// /* .textOffset1 */ 	0xB4E8,
// /* .textOffset2 */ 	0x0000,
// /* .unkC */ 		0x00000000, //unknown type (unused?)
// /* .modelData */ 	0x802211B4,
// /* .npcName */ 		0x8026A86C,
// /* .unk18 */ 		0x00000000, //unknown type (unused?)
// /* .pos */ 			{ -8.0f, 0.0f },
// /* .rotation */ 	-0.7678999900817871f,
// /* .sizeScaler */ 	0.07000000029802322f,
// },

// /* Walt (Dindom Dries House) */
// {
// /* .unk_00 */ 		0x0014,
// /* .unk_02 */ 		0x0001,
// /* .unk_04 */ 		0x01,
// /* .unk_05 */ 		0x00,
// /* .unk06 */ 		0x00,
// /* .unk07 */ 		0x00,
// /* .textOffset1 */ 	0xB5A0,
// /* .textOffset2 */ 	0x0000,
// /* .unkC */ 		0x00000000, //unknown type (unused?)
// /* .modelData */ 	0x802234D0,
// /* .npcName */ 		0x8026A878,
// /* .unk18 */ 		0x00000000, //unknown type (unused?)
// /* .pos */ 			{ 0.0f, -25.0f },
// /* .rotation */ 	1.0471999645233154f,
// /* .sizeScaler */ 	0.07000000029802322f,
// },

// /* Edward (Greenoch INN) */
// {
// /* .unk_00 */ 		0x0000,
// /* .unk_02 */ 		0x0006,
// /* .unk_04 */ 		0x01,
// /* .unk_05 */ 		0x01,
// /* .unk06 */ 		0x00,
// /* .unk07 */ 		0x00,
// /* .textOffset1 */ 	0xB6D0,
// /* .textOffset2 */ 	0x0000,
// /* .unkC */ 		0x00000000, //unknown type (unused?)
// /* .modelData */ 	0x8021884C,
// /* .npcName */ 		0x8026A884,
// /* .unk18 */ 		0x00000000, //unknown type (unused?)
// /* .pos */ 			{ 30.0f, 0.0f },
// /* .rotation */ 	-1.5707999467849731f,
// /* .sizeScaler */ 	0.07000000029802322f,
// },

// /* Bation (Baragoon Moor INN) */
// {
// /* .unk_00 */ 		0x0016,
// /* .unk_02 */ 		0x0006,
// /* .unk_04 */ 		0x01,
// /* .unk_05 */ 		0x00,
// /* .unk06 */ 		0x00,
// /* .unk07 */ 		0x00,
// /* .textOffset1 */ 	0xB7C8,
// /* .textOffset2 */ 	0x0000,
// /* .unkC */ 		0x00000000, //unknown type (unused?)
// /* .modelData */ 	0x8021DAE4,
// /* .npcName */ 		0x8026A890,
// /* .unk18 */ 		0x00000000, //unknown type (unused?)
// /* .pos */ 			{ 0.0f, 0.0f },
// /* .rotation */ 	1.0471999645233154f,
// /* .sizeScaler */ 	0.07000000029802322f,
// },

// /* Lavaar (Shamwood) */
// {
// /* .unk_00 */ 		0x0000,
// /* .unk_02 */ 		0x0001,
// /* .unk_04 */ 		0x01,
// /* .unk_05 */ 		0x00,
// /* .unk06 */ 		0x00,
// /* .unk07 */ 		0x00,
// /* .textOffset1 */ 	0xAF70,
// /* .textOffset2 */ 	0x0000,
// /* .unkC */ 		0x00000000, //unknown type (unused?)
// /* .modelData */ 	0x8022A398,
// /* .npcName */ 		0x8026A844,
// /* .unk18 */ 		0x00000000, //unknown type (unused?)
// /* .pos */ 			{ 0.0f, 30.0f },
// /* .rotation */ 	-3.1415998935699463f,
// /* .sizeScaler */ 	0.07000000029802322f,
// },

// /* Boren (Killiac's Ship) */
// {
// /* .unk_00 */ 		0x0003,
// /* .unk_02 */ 		0x0006,
// /* .unk_04 */ 		0x01,
// /* .unk_05 */ 		0x00,
// /* .unk06 */ 		0x00,
// /* .unk07 */ 		0x00,
// /* .textOffset1 */ 	0x96C8,
// /* .textOffset2 */ 	0x0000,
// /* .unkC */ 		0x00000000, //unknown type (unused?)
// /* .modelData */ 	0x80226068,
// /* .npcName */ 		0x8026A7CC,
// /* .unk18 */ 		0x00000000, //unknown type (unused?)
// /* .pos */ 			{ 0.0f, 13.0f },
// /* .rotation */ 	-2.3561999797821045f,
// /* .sizeScaler */ 	0.07000000029802322f,
// },

// /* Macren (Killiac's Ship) */
// {
// /* .unk_00 */ 		0x0004,
// /* .unk_02 */ 		0x0005,
// /* .unk_04 */ 		0x01,
// /* .unk_05 */ 		0x00,
// /* .unk06 */ 		0x00,
// /* .unk07 */ 		0x02,
// /* .textOffset1 */ 	0x9730,
// /* .textOffset2 */ 	0x9848,
// /* .unkC */ 		0x00000000, //unknown type (unused?)
// /* .modelData */ 	0x80228598,
// /* .npcName */ 		0x8026A7D8,
// /* .unk18 */ 		0x00000000, //unknown type (unused?)
// /* .pos */ 			{ 0.0f, 0.0f },
// /* .rotation */ 	-2.3561999797821045f,
// /* .sizeScaler */ 	0.07000000029802322f,
// },

// /* Colleen (Isle Of Skye House) */
// {
// /* .unk_00 */ 		0x0000,
// /* .unk_02 */ 		0x0005,
// /* .unk_04 */ 		0x01,
// /* .unk_05 */ 		0x00,
// /* .unk06 */ 		0x00,
// /* .unk07 */ 		0x02,
// /* .textOffset1 */ 	0x9938,
// /* .textOffset2 */ 	0x9B90,
// /* .unkC */ 		0x00000000, //unknown type (unused?)
// /* .modelData */ 	0x80210ACC,
// /* .npcName */ 		0x8026A7F0,
// /* .unk18 */ 		0x00000000, //unknown type (unused?)
// /* .pos */ 			{ 9.0f, 10.0f },
// /* .rotation */ 	2.094399929046631f,
// /* .sizeScaler */ 	0.07000000029802322f,
// },

// /* Killiac (Isle Of Skye House) */
// {
// /* .unk_00 */ 		0x0000,
// /* .unk_02 */ 		0x0005,
// /* .unk_04 */ 		0x01,
// /* .unk_05 */ 		0x00,
// /* .unk06 */ 		0x00,
// /* .unk07 */ 		0x02,
// /* .textOffset1 */ 	0x9F30,
// /* .textOffset2 */ 	0xA078,
// /* .unkC */ 		0x00000000, //unknown type (unused?)
// /* .modelData */ 	0x80216A6C,
// /* .npcName */ 		0x8026A790,
// /* .unk18 */ 		0x00000000, //unknown type (unused?)
// /* .pos */ 			{ 9.0f, -8.0f },
// /* .rotation */ 	1.0471999645233154f,
// /* .sizeScaler */ 	0.07000000029802322f,
// },

// /* Epona (Crystal Valley House) */
// {
// /* .unk_00 */ 		0x0003,
// /* .unk_02 */ 		0x0005,
// /* .unk_04 */ 		0x01,
// /* .unk_05 */ 		0x00,
// /* .unk06 */ 		0x00,
// /* .unk07 */ 		0x02,
// /* .textOffset1 */ 	0xA858,
// /* .textOffset2 */ 	0xABB8,
// /* .unkC */ 		0x00000000, //unknown type (unused?)
// /* .modelData */ 	0x80213FB0,
// /* .npcName */ 		0x8026A82C,
// /* .unk18 */ 		0x00000000, //unknown type (unused?)
// /* .pos */ 			{ -4.0f, -4.0f },
// /* .rotation */ 	1.5707999467849731f,
// /* .sizeScaler */ 	0.07000000029802322f,
// },

// /* Chappy (Crystal Valley House) */
// {
// /* .unk_00 */ 		0x0003,
// /* .unk_02 */ 		0x0006,
// /* .unk_04 */ 		0x01,
// /* .unk_05 */ 		0x00,
// /* .unk06 */ 		0x00,
// /* .unk07 */ 		0x00,
// /* .textOffset1 */ 	0xAEE0,
// /* .textOffset2 */ 	0x0000,
// /* .unkC */ 		0x00000000, //unknown type (unused?)
// /* .modelData */ 	0x80212230,
// /* .npcName */ 		0x8026A838,
// /* .unk18 */ 		0x00000000, //unknown type (unused?)
// /* .pos */ 			{ 17.0f, -13.0f },
// /* .rotation */ 	0.7678999900817871f,
// /* .sizeScaler */ 	0.07000000029802322f,
// },

// /* Shannon (Brannoch Castle Hi Dad Bye Dad) */
// {
// /* .unk_00 */ 		0x000D,
// /* .unk_02 */ 		0x0001,
// /* .unk_04 */ 		0x01,
// /* .unk_05 */ 		0x00,
// /* .unk06 */ 		0x00,
// /* .unk07 */ 		0x00,
// /* .textOffset1 */ 	0x0A40,
// /* .textOffset2 */ 	0x0000,
// /* .unkC */ 		0x00000000, //unknown type (unused?)
// /* .modelData */ 	0x802A2A24,
// /* .npcName */ 		0x802A7BB0,
// /* .unk18 */ 		0x00000000, //unknown type (unused?)
// /* .pos */ 			{ -17.0f, -84.0f },
// /* .rotation */ 	-3.1415998935699463f,
// /* .sizeScaler */ 	0.07000000029802322f,
// },

// /* Bart (Brannoch Castle Hi Dad Bye Dad) */
// {
// /* .unk_00 */ 		0x000D,
// /* .unk_02 */ 		0x0001,
// /* .unk_04 */ 		0x01,
// /* .unk_05 */ 		0x02,
// /* .unk06 */ 		0x00,
// /* .unk07 */ 		0x00,
// /* .textOffset1 */ 	0x9320,
// /* .textOffset2 */ 	0x0000,
// /* .unkC */ 		0x00000000, //unknown type (unused?)
// /* .modelData */ 	0x80210180,
// /* .npcName */ 		0x80241188,
// /* .unk18 */ 		0x00000000, //unknown type (unused?)
// /* .pos */ 			{ -17.0f, -100.0f },
// /* .rotation */ 	0.0f,
// /* .sizeScaler */ 	0.07000000029802322f,
// },

// /* Leonardo (Brannoch Castle) */
// {
// /* .unk_00 */ 		0x000F,
// /* .unk_02 */ 		0x0006,
// /* .unk_04 */ 		0x01,
// /* .unk_05 */ 		0x00,
// /* .unk06 */ 		0x00,
// /* .unk07 */ 		0x00,
// /* .textOffset1 */ 	0x9458,
// /* .textOffset2 */ 	0x0000,
// /* .unkC */ 		0x00000000, //unknown type (unused?)
// /* .modelData */ 	0x8021F204,
// /* .npcName */ 		0x80241194,
// /* .unk18 */ 		0x00000000, //unknown type (unused?)
// /* .pos */ 			{ 0.0f, -73.0f },
// /* .rotation */ 	-3.1415998935699463f,
// /* .sizeScaler */ 	0.07000000029802322f,
// },

// /* Kelly (Glencoe Forest Cabin) */
// {
// /* .unk_00 */ 		0x0001,
// /* .unk_02 */ 		0x0005,
// /* .unk_04 */ 		0x01,
// /* .unk_05 */ 		0x00,
// /* .unk06 */ 		0x00,
// /* .unk07 */ 		0x02,
// /* .textOffset1 */ 	0x9548,
// /* .textOffset2 */ 	0x9600,
// /* .unkC */ 		0x00000000, //unknown type (unused?)
// /* .modelData */ 	0x8021C210,
// /* .npcName */ 		0x8026A7C0,
// /* .unk18 */ 		0x00000000, //unknown type (unused?)
// /* .pos */ 			{ 0.0f, 0.0f },
// /* .rotation */ 	1.5707999467849731f,
// /* .sizeScaler */ 	0.07000000029802322f,
// },

// /* Shannon (Mammons World) */
// {
// /* .unk_00 */ 		0x0003,
// /* .unk_02 */ 		0x0002,
// /* .unk_04 */ 		0x01,
// /* .unk_05 */ 		0x00,
// /* .unk06 */ 		0x00,
// /* .unk07 */ 		0x19,
// /* .textOffset1 */ 	0x0F58,
// /* .textOffset2 */ 	0x0000,
// /* .unkC */ 		0x00000000, //unknown type (unused?)
// /* .modelData */ 	0x802A2A24,
// /* .npcName */ 		0x802A7BB0,
// /* .unk18 */ 		0x00000000, //unknown type (unused?)
// /* .pos */ 			{ 0.0f, 0.0f },
// /* .rotation */ 	0.0f,
// /* .sizeScaler */ 	0.07000000029802322f,
// },

// /* Shannon (Game Ending) */
// {
// /* .unk_00 */ 		0x0001,
// /* .unk_02 */ 		0x0001,
// /* .unk_04 */ 		0x01,
// /* .unk_05 */ 		0x00,
// /* .unk06 */ 		0x00,
// /* .unk07 */ 		0x00,
// /* .textOffset1 */ 	0x12F8,
// /* .textOffset2 */ 	0x0000,
// /* .unkC */ 		0x00000000, //unknown type (unused?)
// /* .modelData */ 	0x802A2A24,
// /* .npcName */ 		0x802A7BB0,
// /* .unk18 */ 		0x00000000, //unknown type (unused?)
// /* .pos */ 			{ 0.0f, 0.0f },
// /* .rotation */ 	0.0f,
// /* .sizeScaler */ 	0.07000000029802322f,
// }
// };
