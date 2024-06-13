import os

def read_data_and_write_file():
    # Specify input file path
    input_file_path = 'rom/quest64.mod.z64'
    
    # Specify output file path
    output_file_path = 'bin/QuestNewText.bin'
    
    # Address to start reading from (0x1000000 in hexadecimal)
    start_address = 0x1000000
    
    # Number of bytes to read (0x10000 in hexadecimal)
    bytes_to_read = 0x10000
    
    # Check if input file exists
    if not os.path.exists(input_file_path):
        print(f"File '{input_file_path}' not found.")
        return
    
    # Check if output file exists
    if not os.path.exists(output_file_path):
        print(f"File '{output_file_path}' not found.")
        return

    try:
        # Open the input file in binary read mode
        with open(input_file_path, 'rb') as input_file:
            # Seek to the starting address
            input_file.seek(start_address)
            
            # Read the specified number of bytes
            data_from_input = input_file.read(bytes_to_read)
            
            # Open the output file in binary read mode
            with open(output_file_path, 'rb') as output_file:
                # Read the same number of bytes from the output file
                data_from_output = output_file.read(bytes_to_read)
                
                # Compare the data
                if data_from_input == data_from_output:
                    print(f"No text changes detected")
                else:
                    print(f"Text change was detected and was output to {output_file_path}")
                
    except IOError:
        print("Error: Failed to read/write file.")
    except Exception as e:
        print(f"An unexpected error occurred: {str(e)}")

# Call the function to execute
read_data_and_write_file()
