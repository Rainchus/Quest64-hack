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

def format_as_c_structs(npc_data_list):
    c_structs = []

    for npc_data in npc_data_list:
        c_struct = f"""
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
/* .modelData */ \tD_{npc_data['unk_10']:08X},
/* .npcName */ \t\tD_{npc_data['unk_14']:08X},
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
addresses = [0x4394F0, 0x43951C, 0x439548]

# Parse the NPC data
npc_data_list = parse_npc_data(file_path, addresses)

# Format the data as C structs
c_structs = format_as_c_structs(npc_data_list)

# Specify the output path for the C file
output_path = 'src/npc_data.c'

# Write the C file
write_c_file(output_path, c_structs)

print(f"Parsed {len(npc_data_list)} NPC data entries from addresses and wrote to {output_path}")
