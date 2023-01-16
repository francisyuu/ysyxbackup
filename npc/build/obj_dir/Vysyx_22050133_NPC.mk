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
	-I/home/francisyuu/Documents/ysyx22050133/ysyx-workbench/npc/npccsrc/include \
	-DTOP_NAME="Vysyx_22050133_NPC" \
	-Og \
	-MMD \
	-Wall \
	-Og \
	-ggdb3 \
	-I/usr/lib/llvm-14/include \
	-std=c++14 \
	-fno-exceptions \
	-D_GNU_SOURCE \
	-D__STDC_CONSTANT_MACROS \
	-D__STDC_LIMIT_MACROS \
	-fPIE \

# User LDLIBS (from -LDFLAGS on Verilator command line)
VM_USER_LDLIBS = \
	-lSDL2 \
	-lSDL2_image \
	-lreadline \
	-ldl \
	-pie \
	-fPIE \
	-lLLVM-14 \

# User .cpp files (from .cpp's on Verilator command line)
VM_USER_CLASSES = \
	cpu-exec \
	mem \
	reg \
	alarm \
	audio \
	device \
	disk \
	intr \
	map \
	mmio \
	port-io \
	keyboard \
	rtc \
	sdcard \
	serial \
	vga \
	monitor \
	expr \
	sdb \
	watchpoint \
	disasm \
	log \
	rand \
	state \
	timer \
	ysyx_22050133_NPC \

# User .cpp directories (from .cpp's on Verilator command line)
VM_USER_DIR = \
	/home/francisyuu/Documents/ysyx22050133/ysyx-workbench/npc/npccsrc \
	/home/francisyuu/Documents/ysyx22050133/ysyx-workbench/npc/npccsrc/cpu \
	/home/francisyuu/Documents/ysyx22050133/ysyx-workbench/npc/npccsrc/device \
	/home/francisyuu/Documents/ysyx22050133/ysyx-workbench/npc/npccsrc/device/io \
	/home/francisyuu/Documents/ysyx22050133/ysyx-workbench/npc/npccsrc/monitor \
	/home/francisyuu/Documents/ysyx22050133/ysyx-workbench/npc/npccsrc/monitor/sdb \
	/home/francisyuu/Documents/ysyx22050133/ysyx-workbench/npc/npccsrc/utils \


### Default rules...
# Include list of all generated classes
include Vysyx_22050133_NPC_classes.mk
# Include global rules
include $(VERILATOR_ROOT)/include/verilated.mk

### Executable rules... (from --exe)
VPATH += $(VM_USER_DIR)

cpu-exec.o: /home/francisyuu/Documents/ysyx22050133/ysyx-workbench/npc/npccsrc/cpu/cpu-exec.c
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
mem.o: /home/francisyuu/Documents/ysyx22050133/ysyx-workbench/npc/npccsrc/cpu/mem.c
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
reg.o: /home/francisyuu/Documents/ysyx22050133/ysyx-workbench/npc/npccsrc/cpu/reg.c
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
alarm.o: /home/francisyuu/Documents/ysyx22050133/ysyx-workbench/npc/npccsrc/device/alarm.c
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
audio.o: /home/francisyuu/Documents/ysyx22050133/ysyx-workbench/npc/npccsrc/device/audio.c
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
device.o: /home/francisyuu/Documents/ysyx22050133/ysyx-workbench/npc/npccsrc/device/device.c
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
disk.o: /home/francisyuu/Documents/ysyx22050133/ysyx-workbench/npc/npccsrc/device/disk.c
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
intr.o: /home/francisyuu/Documents/ysyx22050133/ysyx-workbench/npc/npccsrc/device/intr.c
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
map.o: /home/francisyuu/Documents/ysyx22050133/ysyx-workbench/npc/npccsrc/device/io/map.c
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
mmio.o: /home/francisyuu/Documents/ysyx22050133/ysyx-workbench/npc/npccsrc/device/io/mmio.c
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
port-io.o: /home/francisyuu/Documents/ysyx22050133/ysyx-workbench/npc/npccsrc/device/io/port-io.c
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
keyboard.o: /home/francisyuu/Documents/ysyx22050133/ysyx-workbench/npc/npccsrc/device/keyboard.c
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
rtc.o: /home/francisyuu/Documents/ysyx22050133/ysyx-workbench/npc/npccsrc/device/rtc.c
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
sdcard.o: /home/francisyuu/Documents/ysyx22050133/ysyx-workbench/npc/npccsrc/device/sdcard.c
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
serial.o: /home/francisyuu/Documents/ysyx22050133/ysyx-workbench/npc/npccsrc/device/serial.c
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
vga.o: /home/francisyuu/Documents/ysyx22050133/ysyx-workbench/npc/npccsrc/device/vga.c
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
monitor.o: /home/francisyuu/Documents/ysyx22050133/ysyx-workbench/npc/npccsrc/monitor/monitor.c
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
expr.o: /home/francisyuu/Documents/ysyx22050133/ysyx-workbench/npc/npccsrc/monitor/sdb/expr.c
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
sdb.o: /home/francisyuu/Documents/ysyx22050133/ysyx-workbench/npc/npccsrc/monitor/sdb/sdb.c
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
watchpoint.o: /home/francisyuu/Documents/ysyx22050133/ysyx-workbench/npc/npccsrc/monitor/sdb/watchpoint.c
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
disasm.o: /home/francisyuu/Documents/ysyx22050133/ysyx-workbench/npc/npccsrc/utils/disasm.cc
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
log.o: /home/francisyuu/Documents/ysyx22050133/ysyx-workbench/npc/npccsrc/utils/log.c
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
rand.o: /home/francisyuu/Documents/ysyx22050133/ysyx-workbench/npc/npccsrc/utils/rand.c
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
state.o: /home/francisyuu/Documents/ysyx22050133/ysyx-workbench/npc/npccsrc/utils/state.c
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
timer.o: /home/francisyuu/Documents/ysyx22050133/ysyx-workbench/npc/npccsrc/utils/timer.c
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
ysyx_22050133_NPC.o: /home/francisyuu/Documents/ysyx22050133/ysyx-workbench/npc/npccsrc/ysyx_22050133_NPC.cpp
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<

### Link rules... (from --exe)
/home/francisyuu/Documents/ysyx22050133/ysyx-workbench/npc/build/ysyx_22050133_NPC: $(VK_USER_OBJS) $(VK_GLOBAL_OBJS) $(VM_PREFIX)__ALL.a $(VM_HIER_LIBS)
	$(LINK) $(LDFLAGS) $^ $(LOADLIBES) $(LDLIBS) $(LIBS) $(SC_LIBS) -o $@


# Verilated -*- Makefile -*-
