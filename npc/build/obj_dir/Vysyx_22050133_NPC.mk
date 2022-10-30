# Verilated -*- Makefile -*-
# DESCRIPTION: Verilator output: Makefile for building Verilated archive or executable
#
# Execute this makefile from the object directory:
#    make -f Vysyx_22050133_NPC.mk

default: /home/francisyuu/Documents/ysyx22050133/ysyx-workbench/npc/build/ysyx_22050133_NPC

### Constants...
# Perl executable (from $PERL)
PERL = perl
# Path to Verilator kit (from $VERILATOR_ROOT)
VERILATOR_ROOT = /home/francisyuu/Software/verilator
# SystemC include directory with systemc.h (from $SYSTEMC_INCLUDE)
SYSTEMC_INCLUDE ?= 
# SystemC library directory with libsystemc.a (from $SYSTEMC_LIBDIR)
SYSTEMC_LIBDIR ?= 

### Switches...
# C++ code coverage  0/1 (from --prof-c)
VM_PROFC = 0
# SystemC output mode?  0/1 (from --sc)
VM_SC = 0
# Legacy or SystemC output mode?  0/1 (from --sc)
VM_SP_OR_SC = $(VM_SC)
# Deprecated
VM_PCLI = 1
# Deprecated: SystemC architecture to find link library path (from $SYSTEMC_ARCH)
VM_SC_TARGET_ARCH = linux

### Vars...
# Design prefix (from --prefix)
VM_PREFIX = Vysyx_22050133_NPC
# Module prefix (from --prefix)
VM_MODPREFIX = Vysyx_22050133_NPC
# User CFLAGS (from -CFLAGS on Verilator command line)
VM_USER_CFLAGS = \
	-I/home/francisyuu/Documents/ysyx22050133/ysyx-workbench/nvboard/include \
	-DTOP_NAME="Vysyx_22050133_NPC" \

# User LDLIBS (from -LDFLAGS on Verilator command line)
VM_USER_LDLIBS = \
	/home/francisyuu/Documents/ysyx22050133/ysyx-workbench/nvboard/build/nvboard.a \
	-lSDL2 \
	-lSDL2_image \

# User .cpp files (from .cpp's on Verilator command line)
VM_USER_CLASSES = \
	cpu-exec \
	mem \
	log \
	monitor \
	expr \
	sdb \
	watchpoint \
	reg \
	ysyx_22050133_NPC \

# User .cpp directories (from .cpp's on Verilator command line)
VM_USER_DIR = \
	/home/francisyuu/Documents/ysyx22050133/ysyx-workbench/npc/npccsrc \
	/home/francisyuu/Documents/ysyx22050133/ysyx-workbench/npc/npccsrc/monitor \
	/home/francisyuu/Documents/ysyx22050133/ysyx-workbench/npc/npccsrc/monitor/sdb \


### Default rules...
# Include list of all generated classes
include Vysyx_22050133_NPC_classes.mk
# Include global rules
include $(VERILATOR_ROOT)/include/verilated.mk

### Executable rules... (from --exe)
VPATH += $(VM_USER_DIR)

cpu-exec.o: /home/francisyuu/Documents/ysyx22050133/ysyx-workbench/npc/npccsrc/cpu-exec.c
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
mem.o: /home/francisyuu/Documents/ysyx22050133/ysyx-workbench/npc/npccsrc/mem.c
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
log.o: /home/francisyuu/Documents/ysyx22050133/ysyx-workbench/npc/npccsrc/monitor/log.c
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
monitor.o: /home/francisyuu/Documents/ysyx22050133/ysyx-workbench/npc/npccsrc/monitor/monitor.c
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
expr.o: /home/francisyuu/Documents/ysyx22050133/ysyx-workbench/npc/npccsrc/monitor/sdb/expr.c
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
sdb.o: /home/francisyuu/Documents/ysyx22050133/ysyx-workbench/npc/npccsrc/monitor/sdb/sdb.c
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
watchpoint.o: /home/francisyuu/Documents/ysyx22050133/ysyx-workbench/npc/npccsrc/monitor/sdb/watchpoint.c
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
reg.o: /home/francisyuu/Documents/ysyx22050133/ysyx-workbench/npc/npccsrc/reg.c
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
ysyx_22050133_NPC.o: /home/francisyuu/Documents/ysyx22050133/ysyx-workbench/npc/npccsrc/ysyx_22050133_NPC.cpp
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<

### Link rules... (from --exe)
/home/francisyuu/Documents/ysyx22050133/ysyx-workbench/npc/build/ysyx_22050133_NPC: $(VK_USER_OBJS) $(VK_GLOBAL_OBJS) $(VM_PREFIX)__ALL.a $(VM_HIER_LIBS)
	$(LINK) $(LDFLAGS) $^ $(LOADLIBES) $(LDLIBS) $(LIBS) $(SC_LIBS) -o $@


# Verilated -*- Makefile -*-
