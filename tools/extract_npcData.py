import struct

# Define the format for Vec2f in big-endian
vec2f_format = '>ff'  # 2 floats, 4 bytes each, big-endian

# Define the format for NpcData in big-endian
npcdata_format = '>HHBBBBHHIIIIffff'
npcdata_size = struct.calcsize(npcdata_format)

def parse_npc_data(file_path, addresses):
    npc_data_list = []

    with open(file_path, 'rb') as file:
        for address in addresses:
            # Seek to the current address
            file.seek(address)

            data = file.read(npcdata_size)
            if len(data) < npcdata_size:
                break  # Stop if there's not enough data

            # Unpack the data according to the npcdata_format
            unpacked_data = struct.unpack(npcdata_format, data)

            # Create a dictionary to represent the NPC data
            npc_data = {
                'unk_00': unpacked_data[0],
                'unk_02': unpacked_data[1],
                'unk_04': unpacked_data[2],
                'unk_05': unpacked_data[3],
                'unk06': unpacked_data[4],
                'unk07': unpacked_data[5],
                'textOffset1': unpacked_data[6],
                'textOffset2': unpacked_data[7],
                'unkC': unpacked_data[8],
                'unk_10': unpacked_data[9],
                'unk_14': unpacked_data[10],
                'unk18': unpacked_data[11],
                'pos': {
                    'x': unpacked_data[12],
                    'y': unpacked_data[13],
                },
                'rotation': unpacked_data[14],
                'sizeScaler': unpacked_data[15]
            }

            npc_data_list.append(npc_data)

    return npc_data_list

def format_as_c_structs(npc_data_list, names):
    c_structs = []

    for name, npc_data in zip(names, npc_data_list):
        c_struct = f"""
/* {name} */
{{
/* .unk_00 */ \t\t0x{npc_data['unk_00']:04X},
/* .unk_02 */ \t\t0x{npc_data['unk_02']:04X},
/* .unk_04 */ \t\t0x{npc_data['unk_04']:02X},
/* .unk_05 */ \t\t0x{npc_data['unk_05']:02X},
/* .unk06 */ \t\t0x{npc_data['unk06']:02X},
/* .unk07 */ \t\t0x{npc_data['unk07']:02X},
/* .textOffset1 */ \t0x{npc_data['textOffset1']:04X},
/* .textOffset2 */ \t0x{npc_data['textOffset2']:04X},
/* .unkC */ \t\t0x{npc_data['unkC']:08X}, //unknown type (unused?)
/* .modelData */ \t0x{npc_data['unk_10']:08X},
/* .npcName */ \t\t0x{npc_data['unk_14']:08X},
/* .unk18 */ \t\t0x{npc_data['unk18']:08X}, //unknown type (unused?)
/* .pos */ \t\t\t{{ {npc_data['pos']['x']}f, {npc_data['pos']['y']}f }},
/* .rotation */ \t{npc_data['rotation']}f,
/* .sizeScaler */ \t{npc_data['sizeScaler']}f,
}}"""
        c_structs.append(c_struct)

    return c_structs

def write_c_file(output_path, c_structs):
    with open(output_path, 'w') as file:
        file.write("#include \"../include/Quest64.h\"\n\n")
        file.write("NpcData npc_data_array[] = {\n")
        file.write(",\n".join(c_structs))
        file.write("\n};\n")

# Specify the file path and addresses to parse
file_path = 'rom/quest64.z64'
addresses = [0x135E70,0x135E9C,0x135EC8,0x135EF4,0x135F20,0x135F4C,0x135F78,0x135FA4,0x135FD0,0x135FFC,0x136028,0x136054,0x167F50,0x167F7C,0x167FA8,0x1CC9F0,0x208E50,0x208E7C,0x208EA8,0x253E60,0x278990,0x2789BC,0x2789E8,0x2AA640,0x2F8430,0x2F845C,0x2F8488,0x2F84B4,0x2F84E0,0x3CB5C0,0x3E31C0,0x4394F0,0x43951C,0x439548,0x439574,0x4395A0,0x4395CC,0x4395F8,0x439624,0x489860,0x48988C,0x4898B8,0x4898E4,0x489910,0x48993C,0x489968,0x489994,0x4899C0,0x49F830,0x49F85C,0x49F888,0x49F8B4,0x49F8E0,0x49F90C,0x49F938,0x49F964,0x4CF150,0x4CF17C,0x4CF1A8,0x4CF1D4,0x4CF200,0x4CF22C,0x4CF258,0x4CF284,0x4CF2B0,0x4CF2DC,0x4CF308,0x4CF334,0x4CF360,0x4CF38C,0x4CF3B8,0x4CF3E4,0x4CF410,0x4E64D0,0x4E64FC,0x4E6528,0x4E6554,0x4E6580,0x4E65AC,0x4E65D8,0x4F6E20,0x4F6E4C,0x4F6E78,0x4F6EA4,0x4F6ED0,0x4F6EFC,0x4F6F28,0x4F6F54,0x4F6F80,0x4F6FAC,0x51C690,0x51C6BC,0x51C6E8,0x51C714,0x51C740,0x51C76C,0x51C798,0x51C7C4,0x51C7F0,0x56FAF0,0x56FB1C,0x56FB48,0x56FB74,0x56FBA0,0x56FBCC,0x56FBF8,0x56FC24,0x56FC50,0x56FC7C,0x59F5C0,0x59F5EC,0x59F618,0x59F644,0x59F670,0x59F69C,0x59F6C8,0x59F6F4,0x59F720,0x59F74C,0x59F778,0x59F7A4,0x59F7D0,0x59F7FC,0x59F828,0x5D8B10,0x5D8B3C,0x5D8B68,0x5D8B94,0x5D8BC0,0x5D8BEC,0x5D8C18,0x5D8C44,0x5D8C70,0x5D8C9C,0x5D8CC8,0x5D8CF4,0x5D8D20,0x5D8D4C,0x5D8D78,0x5D8DA4,0x5D8DD0,0x5D8DFC,0x5D8E28,0x5D8E54,0x5EBB10,0x609980,0x6099AC,0x6099D8,0x609A04,0x667780,0x6677AC,0x7877F0,0x78781C,0x787848,0x7F1B00,0x8533F0,0x85341C]
names = ["Edgar (Melrode)","Kain (Melrode)","Sandra (Melrode)","Amanda (Melrode)","Frank (Melrode)","Billy (Melrode)","Todd (Melrode)","Pete (Melrode)","Ralph (Melrode)","Sheep (Melrode)","Sheep (Melrode)","Horse (Monestary)","Rufus (Dondoran)","Kathrin (Dondoran)","Elena (Dondoran)","Morague (Don Flats Boat)","Leonitis (Larapool)","Russel (Larapool)","Ellis (Larapool)","Morague (West Carmagh Boat)","Rick (Normoon)","Kevin (Normoon)","Oscar (Normoon)","Morague (Limelin Boat)","Nick (Limelin)","Jade (Limelin)","Sheldon (Limelin)","Elgin (Limelin)","Roy (Limelin)","Shannon (Brannoch Castle Roof)","Killiac (Killiacs Ship Sailing)","Auden (Monestary)","Gylmyne (Monestary)","Marmaduke (Monestary)","Pat (Monestary)","Cerius (Monestary)","Grand Abbott (Monestary)","Gelis (Monestary)","Fergus (Monestary)","Cristole (Dondoran Castle)","Scottfort (Dondoran Castle)","Grant (Dondoran Castle)","Gibson (Dondoran Castle)","Hew (Dondoran Castle)","Pasart (Dondoran Castle)","Felzen (Dondoran Castle)","Kate (Dondoran Castle)","Flora (Dondoran Castle)","Shannon (Melrode INN)","Tim (Melrode Houses)","Katie (Melrode Houses)","Elspet (Melrode Houses)","Agnes (Melrode INN)","Ingram (Melrode White Wing Shop)","Holly (Melrode Houses)","Epona (Floating Monestary)","Shannon (Dondoran INN)","Shannon (Dondoran Flatts INN)","Marion (Dondoran Houses)","Curtis (Dondoran Houses)","Davy (Dondoran Bar)","Rocks (Dondoran Bar)","Clay (Dondoran Houses)","Annnabell (Dondoran Houses)","Mable (Dondoran Bar)","Claire (Dondoran Houses)","Walter (Dondoran Houses)","Thom (Dondoran Yellow Wing Shop)","Gilbert (Dondoran INN)","Steve (Dondoran INN)","Maggie (Dondoran Bar)","Teruma (Dondoran Flats INN)","Arkart (Dondoran Flats INN)","Shannon (Larapool INN)","Naltese (Larapool INN)","Leila (Larapool INN)","Leila (Larapool Well Room)","Donovan (Larapool INN)","Alexandir (Larapool INN)","Galita (Larapool INN)","Olden (Larapool Houses)","Rosa (Larapool Houses)","Camelia (Larapool Houses)","Margeret (Larapool Houses)","Gilon (Larapool Houses)","Jiryo (Larapool Blue Wings Shop)","Dorothy (Larapool Houses)","Lloyd (Lumberjacks House)","Jeff (Lumberjacks House)","Efna (Larapool Houses)","Shannon (Normoon INN)","Micah (Normoon Houses)","Gelus (Normoon Houses)","Byson (Normoon Houses)","Hector (Normoon Houses)","Leonardo (Normoon INN)","Tilly (Normoon INN)","Anette (Normoon Green Wings Shop)","Rysha (Normoon INN)","Deanna (Limelin Castle)","William (Limelin Castle)","Zing (Limelin Castle)","Lenbil (Limelin Castle)","Linton (Limelin Castle)","Zafa (Limelin Castle)","Balu (Limelin Castle)","Jared (Limelin Castle)","Damon (Limelin Castle)","Ian (Limelin Castle)","Shannon (Limelin INN)","Dolgo (Limelin Houses)","Opal (Limelin Houses)","Coral (Limelin Houses)","Amber (Limelin Houses)","Elle (LImelin Houses)","Dio (Limelin Tavern)","Roach (Limelin Tavern)","Cindy (Limelin Tavern)","Rhett (Limelin Tavern)","Canny (Limelin INN)","Talco (Limelin Houses)","Ring (Limelin Wing Shop)","Tina (Limelin Houses)","Sebastian (Limelin Houses)","Shannon (Greenoch INN)","Shannon (Brannoch INN)","Tom (Brannoch Black Wings Shop)","Kolles (Brannoch INN)","Stewart (Brannoch INN)","Tinvel (Brannoch Houses)","Hersh (Brannoch Houses)","Vilgue (Brannoch Houses)","Valens Brannoch Houses)","Andrew (Brannoch Houses)","Roddy (Brannoch Houses)","Morris (Brannoch Houses)","Zonne (Greenoch INN)","Ryure (Brannoch Houses)","Janat (Brannoch Houses)","Bronze (Greenoch Item Shop)","Gelson (Dindom Dries Tent)","Walt (Dindom Dries House)","Edward (Greenoch INN)","Bation (Baragoon Moor INN)","Lavaar (Shamwood)","Boren (Killiac's Ship)","Macren (Killiac's Ship)","Colleen (Isle Of Skye House)","Killiac (Isle Of Skye House)","Epona (Crystal Valley House)","Chappy (Crystal Valley House)","Shannon (Brannoch Castle Hi Dad Bye Dad)","Bart (Brannoch Castle Hi Dad Bye Dad)","Leonardo (Brannoch Castle)","Kelly (Glencoe Forest Cabin)","Shannon (Mammons World)","Shannon (Game Ending)"]

# Parse the NPC data
npc_data_list = parse_npc_data(file_path, addresses)

# Format the data as C structs
c_structs = format_as_c_structs(npc_data_list, names)

# Specify the output path for the C file
output_path = 'src/npc_data_gen.c'

# Write the C file
write_c_file(output_path, c_structs)

print(f"Parsed {len(npc_data_list)} NPC data entries from addresses and wrote to {output_path}")
