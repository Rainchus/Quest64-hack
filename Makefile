# =============================
# Toggle printing style
# =============================
# Set to 1 to use printf (Unix style with colors), 0 to use echo (Windows compatible)
USE_PRINTF := 0

ifeq ($(OS),Windows_NT)
  ifeq ($(USE_PRINTF),1)
    SHELL := bash
  endif
endif

ifeq ($(USE_PRINTF),1)
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
else
  # Windows echo fallback
  PRINT := echo 
  GREEN :=
  ENDGREEN :=
  BLUE :=
  ENDBLUE :=
  ENDCOLOR :=
  ENDLINE :=
endif

# =============================
# Sources and objects
# =============================
SOURCES = $(wildcard src/*.c)
SOURCES_ASM = $(wildcard asm/*.asm)
SOURCES_ASM_BEFORE_HEADERSIZE = $(wildcard asm/!image_bin.s) $(filter-out asm/!image_bin.s,$(wildcard asm/*.s))
OBJECTS = $(SOURCES:src/%.c=obj/%.o)
OUTPUT_FILE = main.asm
PYTHON = python

# =============================
# Toolchain
# =============================
ifeq ($(OS),Windows_NT)
  N64_CRC :=./n64crc.exe
else
  UNAME_S := $(shell uname -s)
  ifeq ($(UNAME_S),Linux)
    N64_CRC :=./n64crc
  endif
  ifeq ($(UNAME_S),Darwin)
    N64_CRC :=./n64crc.exe
  endif
endif

CC := mips64-elf-gcc
STANDARDFLAGS := -O2 -Wall -mtune=vr4300 -march=vr4300 -mabi=32 -fomit-frame-pointer -mno-abicalls -fno-pic -G0
SPEEDFLAGS := -Os -Wall -mtune=vr4300 -march=vr4300 -mabi=32 -fomit-frame-pointer -mno-abicalls -fno-pic -G0

# =============================
# Targets
# =============================
all: $(OBJECTS) genMain assemble

obj/%.o: src/%.c | obj
	@$(PRINT)$(GREEN)Compiling C file: $(ENDGREEN)$(BLUE)$<$(ENDBLUE)$(ENDCOLOR)$(ENDLINE)
	@$(CC) $(STANDARDFLAGS) -c $< -o $@

assemble: $(OBJECTS)
	@$(PRINT)$(GREEN)Assembling with armips: $(ENDGREEN)$(BLUE)main.asm$(ENDBLUE)$(ENDCOLOR)$(ENDLINE)
	@armips main.asm
	@$(PRINT)$(GREEN)n64crc $(ENDGREEN)$(BLUE)"rom/Quest64.mod.z64"$(ENDBLUE)$(ENDCOLOR)$(ENDLINE)
	@$(N64_CRC) "rom/Quest64.mod.z64"

genMain:
	@$(PRINT)$(GREEN)Generating: $(ENDGREEN)$(BLUE)main.asm$(ENDBLUE)$(ENDCOLOR)$(ENDLINE)
	@$(PYTHON) ./tools/convert_images.py
	@$(PYTHON) tools/generate_main_asm.py \
	    $(OUTPUT_FILE) \
	    rom/Quest64.z64 \
	    rom/Quest64.mod.z64 \
	    "0x800c0000 - 0xD4B3C0" \
	    $(SOURCES_ASM_BEFORE_HEADERSIZE) -- \
	    $(SOURCES_ASM) -- \
	    $(OBJECTS)

# =============================
# Utility rules
# =============================
obj:
	@mkdir -p obj

clean:
	@$(PYTHON) tools/clean_files.py $(OBJECTS)
