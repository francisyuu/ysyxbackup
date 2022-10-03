# Verilated -*- Makefile -*-
# DESCRIPTION: Verilator output: Makefile for building Verilated archive or executable
#
# Execute this makefile from the object directory:
#    make -f Vmux412b.mk

default: /home/francisyuu/Documents/ysyx22050133/ysyx-workbench/npc/build/mux412b

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
VM_PREFIX = Vmux412b
# Module prefix (from --prefix)
VM_MODPREFIX = Vmux412b
# User CFLAGS (from -CFLAGS on Verilator command line)
VM_USER_CFLAGS = \
	-I/home/francisyuu/Documents/ysyx22050133/ysyx-workbench/nvboard/include \
	-DTOP_NAME="Vmux412b" \

# User LDLIBS (from -LDFLAGS on Verilator command line)
VM_USER_LDLIBS = \
	/home/francisyuu/Documents/ysyx22050133/ysyx-workbench/nvboard/build/nvboard.a \
	-lSDL2 \
	-lSDL2_image \

# User .cpp files (from .cpp's on Verilator command line)
VM_USER_CLASSES = \
	auto_bind \
	mux412b \

# User .cpp directories (from .cpp's on Verilator command line)
VM_USER_DIR = \
	/home/francisyuu/Documents/ysyx22050133/ysyx-workbench/npc/build \
	/home/francisyuu/Documents/ysyx22050133/ysyx-workbench/npc/csrc \


### Default rules...
# Include list of all generated classes
include Vmux412b_classes.mk
# Include global rules
include $(VERILATOR_ROOT)/include/verilated.mk

### Executable rules... (from --exe)
VPATH += $(VM_USER_DIR)

auto_bind.o: /home/francisyuu/Documents/ysyx22050133/ysyx-workbench/npc/build/auto_bind.cpp
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
mux412b.o: /home/francisyuu/Documents/ysyx22050133/ysyx-workbench/npc/csrc/mux412b.cpp
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<

### Link rules... (from --exe)
/home/francisyuu/Documents/ysyx22050133/ysyx-workbench/npc/build/mux412b: $(VK_USER_OBJS) $(VK_GLOBAL_OBJS) $(VM_PREFIX)__ALL.a $(VM_HIER_LIBS)
	$(LINK) $(LDFLAGS) $^ $(LOADLIBES) $(LDLIBS) $(LIBS) $(SC_LIBS) -o $@


# Verilated -*- Makefile -*-
