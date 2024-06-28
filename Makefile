PRINT := printf '
ENDCOLOR := \033[0m
WHITE     := \033[0m
ENDWHITE  := $(ENDCOLOR)
GREEN     := \033[0;32m
ENDGREEN  := $(ENDCOLOR)
BLUE      := \033[0;34m
ENDBLUE   := $(ENDCOLOR)
YELLOW    := \033[0;33m
ENDYELLOW := $(ENDCOLOR)
PURPLE    := \033[0;35m
ENDPURPLE := $(ENDCOLOR)
ENDLINE := \n'

# List of source files
SOURCES = $(wildcard src/*.c)

SOURCES_ASM = $(wildcard asm/*.asm)
SOURCES_ASM_BEFORE_HEADERSIZE = $(wildcard asm/!image_bin.s) $(filter-out asm/!image_bin.s,$(wildcard asm/*.s))

# List of object files, generated from the source files
OBJECTS = $(SOURCES:src/%.c=obj/%.o)

OUTPUT_FILE = main.asm

INCLUDEFLAGS := -Iinclude
CC := mips64-elf-gcc
STANDARDFLAGS := -O2 -Wall -mtune=vr4300 -march=vr4300 -mabi=32 -fomit-frame-pointer -mno-abicalls -fno-pic -G0 $(INCLUDEFLAGS)
SPEEDFLAGS := -Os -Wall -mtune=vr4300 -march=vr4300 -mabi=32 -fomit-frame-pointer -mno-abicalls -fno-pic -G0

# Default target
all: $(OBJECTS) genMain assemble

# Rule for building object files from source files
obj/%.o: src/%.c | obj
	@$(PRINT)$(GREEN)Compiling C file: $(ENDGREEN)$(BLUE)$<$(ENDBLUE)$(ENDCOLOR)$(ENDLINE)
	@$(CC) $(STANDARDFLAGS) -c $< -o $@

assemble: $(OBJECTS)
	@$(PRINT)$(GREEN)Assembling with armips: $(ENDGREEN)$(BLUE)main.asm$(ENDBLUE)$(ENDCOLOR)$(ENDLINE)
	@armips main.asm -sym syms.out
	@$(PRINT)$(GREEN)n64crc $(ENDGREEN)$(BLUE)"rom/Quest64.mod.z64"$(ENDBLUE)$(ENDCOLOR)$(ENDLINE)
	@./n64crc.exe "rom/Quest64.mod.z64"

#max size of asm files total is 0x80400000 - 0x80500000 (1MB)
#max size of C files total is 0x80500000 - 0x80800000 (3MB)
genMain:
	@$(PRINT)$(GREEN)Generating: $(ENDGREEN)$(BLUE)main.asm$(ENDBLUE)$(ENDCOLOR)$(ENDLINE)
	$(file > $(OUTPUT_FILE),//Automatically generated by makefile, do not edit)
	$(file >> $(OUTPUT_FILE),.n64 // Let armips know we're coding for the N64 architecture)
	$(file >> $(OUTPUT_FILE),.open "rom/Quest64.z64", "rom/Quest64.mod.z64", 0 // Open the ROM file)
	$(foreach obj_file,$(SOURCES_ASM_BEFORE_HEADERSIZE),$(file >> $(OUTPUT_FILE),.include "$(obj_file)"))
	$(file >> $(OUTPUT_FILE),.headersize 0x7F400000)
	$(file >> $(OUTPUT_FILE),.org 0x80400000)
	$(file >> $(OUTPUT_FILE),PAYLOAD_START_RAM:)
	$(foreach obj_file,$(SOURCES_ASM),$(file >> $(OUTPUT_FILE),.include "$(obj_file)"))
	$(foreach obj_file,$(OBJECTS),$(file >> $(OUTPUT_FILE),.importobj "$(obj_file)"))
	$(file >> $(OUTPUT_FILE),PAYLOAD_END_RAM:)
	$(file >> $(OUTPUT_FILE),.close //close file)

# Rule for creating the obj folder
obj:
	@mkdir -p obj

# Rule for cleaning up the project
clean:
	@rm -f $(OBJECTS)


