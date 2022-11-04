TOPNAME ?= ysyx_22050133_NPC
NXDC_FILES = constr/$(TOPNAME).nxdc
INC_PATH ?= $(abspath ./npccsrc/include)

VERILATOR = verilator
VERILATOR_CFLAGS += -MMD --build -cc \
					-O3 --x-assign fast --x-initial fast --noassert 

BUILD_DIR = ./build
OBJ_DIR = $(BUILD_DIR)/obj_dir
BIN = $(BUILD_DIR)/$(TOPNAME)

default: $(BIN)

$(shell mkdir -p $(OBJ_DIR))

SRC_AUTO_BIND = $(abspath $(BUILD_DIR)/auto_bind.cpp)
$(SRC_AUTO_BIND): $(NXDC_FILES)
	python3 $(NVBOARD_HOME)/scripts/auto_pin_bind.py $^ $@

# project source
VSRCS = $(shell find $(abspath ./npcvsrc) -name "*.v")
CSRCS = $(shell find $(abspath ./npccsrc) -name "$(TOPNAME).cpp")
CSRCS += $(shell find $(abspath ./npccsrc) -name "*.c")
CSRCS += $(shell find $(abspath ./npccsrc) -name "*.cc")
#CSRCS += $(SRC_AUTO_BIND)

# rules for NVBoard
#include $(NVBOARD_HOME)/scripts/nvboard.mk
# include $(NVBOARD_HOME)/include/nvboard.h
# rules for verilator
CONFIG_CC_DEBUG = 1
INCFLAGS = $(addprefix -I, $(INC_PATH))
CFLAGS += $(INCFLAGS) -DTOP_NAME="\"V$(TOPNAME)\"" -O2 -MMD -Wall -Werror 
CFLAGS += $(if $(CONFIG_CC_DEBUG),-Og -ggdb3,)
CFLAGS += $(if $(CONFIG_CC_ASAN),-fsanitize=address,)
#CFLAGS += $(shell llvm-config --cxxflags) -fPIE
CFLAGS += -I/usr/lib/llvm-14/include -std=c++14 -fno-exceptions -D_GNU_SOURCE -D__STDC_CONSTANT_MACROS  -D__STDC_LIMIT_MACROS -fPIE 
LIBS += $(shell llvm-config --libs) 
LDFLAGS += -lSDL2 -lSDL2_image -lreadline -ldl -pie -fPIE $(LIBS)

$(BIN): $(VSRCS) $(CSRCS) $(NVBOARD_ARCHIVE) sim
	@$(VERILATOR) $(VERILATOR_CFLAGS) \
		--top-module $(TOPNAME) $(VSRCS) $(CSRCS) $(NVBOARD_ARCHIVE) \
		$(addprefix -CFLAGS , $(CFLAGS)) $(addprefix -LDFLAGS , $(LDFLAGS)) \
		--Mdir $(OBJ_DIR) \
		--exe -o $(abspath $(BIN))
	@echo "RTL sim compile finished"

clean:
	rm -rf $(BUILD_DIR)

all: $(BIN)
	@echo "Write this Makefile by your self."

sim: 
	$(call git_commit, "sim RTL") # DO NOT REMOVE THIS LINE!!!
	@echo "start RTL sim compile"

.PHONY: default all clean sim
#include ../Makefile
