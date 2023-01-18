include $(AM_HOME)/scripts/isa/riscv64.mk

AM_SRCS := riscv/npc/start.S \
           riscv/npc/trm.c \
           riscv/npc/ioe.c \
           riscv/npc/timer.c \
           riscv/npc/input.c \
           riscv/npc/cte.c \
           riscv/npc/gpu.c \
           riscv/npc/audio.c \
           riscv/npc/trap.S \
           platform/dummy/vme.c \
           platform/dummy/mpe.c

CFLAGS    += -fdata-sections -ffunction-sections
LDFLAGS   += -T $(AM_HOME)/scripts/linker.ld --defsym=_pmem_start=0x80000000 --defsym=_entry_offset=0x0
LDFLAGS   += --gc-sections -e _start
CFLAGS += -DMAINARGS=\"$(mainargs)\"
NEMUFLAGS += -d $(NEMU_HOME)/build/riscv64-nemu-interpreter-so
#NEMUFLAGS += -d $(NEMU_HOME)/tools/spike-diff/build/riscv64-spike-so
NEMUFLAGS += -b
NEMUFLAGS += -l $(shell dirname $(IMAGE).elf)/nemu-log.txt $(IMAGE).bin
.PHONY: $(AM_HOME)/am/src/riscv/npc/trm.c

image: $(IMAGE).elf
	$(MAKE) -C $(AM_HOME)/../npc
	@$(OBJDUMP) -d $(IMAGE).elf > $(IMAGE).txt
	@echo + OBJCOPY "->" $(IMAGE_REL).bin
	@$(OBJCOPY) -S --set-section-flags .bss=alloc,contents -O binary $(IMAGE).elf $(IMAGE).bin
run: image
	@echo $(BIN)
	$(AM_HOME)/../npc/build/ysyx_22050133_NPC  $(NEMUFLAGS)
gdb: image
	@echo $(BIN)
	@gdb --args $(AM_HOME)/../npc/build/ysyx_22050133_NPC  $(NEMUFLAGS)
