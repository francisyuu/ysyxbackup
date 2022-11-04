#include <common.h>
#include <dlfcn.h>


//static TOP_NAME ysyx_22050133_NPC;
    VerilatedContext* contextp = new VerilatedContext;
    Vysyx_22050133_NPC* top = new Vysyx_22050133_NPC{contextp};
    //VerilatedVcdC* trace_object= new VerilatedVcdC;
    //contextp->commandArgs(argc, argv);
    //contextp->traceEverOn(true);
    //top->trace(trace_object,99);
    //trace_object->open("obj_dir/sim.vcd");
    //
    //nvboard_bind_all_pins(&top);
    //nvboard_init();
void stopsim()
{
  if(top->clk == 1){
    nemu_state.state=NEMU_END;
    bool success;
    nemu_state.halt_pc=cpu.pc;
    nemu_state.halt_ret=isa_reg_str2val("a0",&success);
    //printf("ebreak\n");
  }
}
void cpu_single_cycle() {
        //if(top->rst!=1)printf("pc = %08lx, inst = %08x\n", top->pc, top->inst);
  top->clk = 1; top->eval();
  top->clk = 0; top->eval();
       // printf("pc = %08x, inst = %08x rd=%08x\n", top->pc, top->inst,top->rddata);
}

void cpu_reset(int n) {
	while(n--)
	{
		top->rst = 1;
		top->clk = 0; top->eval();
		top->clk = 1; top->eval();
		top->clk = 0; top->eval();
		top->rst = 0;
		printf("cpu reset:pc=%08lx,inst=%08x\n",cpu.pc,cpu.inst);
	}
}
//void nvboard_bind_all_pins(Vysyx_22050133_NPC* top);
#define MAX_INST_TO_PRINT 10

CPU_state cpu = {};
uint64_t g_nr_guest_inst = 0;
static uint64_t g_timer = 0; // unit: us
static bool g_print_step = false;
static bool g_print_always = true;


static void trace_and_difftest(Decode *_this, vaddr_t dnpc) {
  if (g_print_step) { IFDEF(CONFIG_ITRACE, puts(_this->logbuf)); }
  IFDEF(CONFIG_ITRACE, log_write("%s\n", _this->logbuf));
  IFDEF(CONFIG_IRINGBUF, iring_write(_this->logbuf));
  IFDEF(CONFIG_WATCHPOINT, wp_update(&nemu_state.state));
  IFDEF(CONFIG_FTRACE, ftrace_write(_this->pc,dnpc));
  IFDEF(CONFIG_DIFFTEST, difftest_step(_this->pc, dnpc));
}

static void exec_once(Decode *s, vaddr_t pc) {
  s->pc = pc;
  s->dnpc = cpu.npc;
  s->snpc = cpu.npc;
  s->inst= cpu.inst;
  cpu_single_cycle();
#ifdef CONFIG_ITRACE
  char *p = s->logbuf;
  p += snprintf(p, sizeof(s->logbuf), FMT_WORD ":", s->pc);
  int i;
  uint8_t *inst = (uint8_t *)&s->inst;
  for (i = 3; i >= 0; i --) {
    p += snprintf(p, 4, " %02x", inst[i]);
  }
  memset(p, ' ', 1);
  p += 1;

  disassemble(p, s->logbuf + sizeof(s->logbuf) - p,
       s->pc, (uint8_t *)&s->inst, 4);
  if(g_print_always)printf("%s\n",s->logbuf);
#endif
}

static void execute(uint64_t n) {
  Decode s;
  for (;n > 0; n --) {
    exec_once(&s, cpu.pc);
    g_nr_guest_inst ++;
    trace_and_difftest(&s, cpu.pc);
    if (nemu_state.state != NEMU_RUNNING) break;
    //IFDEF(CONFIG_DEVICE, device_update());
  }
}

static void statistic() {
  IFNDEF(CONFIG_TARGET_AM, setlocale(LC_NUMERIC, ""));
#define NUMBERIC_FMT MUXDEF(CONFIG_TARGET_AM, "%", "%'") PRIu64
  Log("host time spent = " NUMBERIC_FMT " us", g_timer);
  Log("total guest instructions = " NUMBERIC_FMT, g_nr_guest_inst);
  if (g_timer > 0) Log("simulation frequency = " NUMBERIC_FMT " inst/s", g_nr_guest_inst * 1000000 / g_timer);
  else Log("Finish running in less than 1 us and can not calculate the simulation frequency");
}

void assert_fail_msg() {
  isa_reg_display();
  statistic();
}

/* Simulate how the CPU works. */
void cpu_exec(uint64_t n) {
  g_print_step = (n < MAX_INST_TO_PRINT);
  switch (nemu_state.state) {
    case NEMU_END: case NEMU_ABORT:
      printf("Program execution has ended. To restart the program, exit NEMU and run again.\n");
      return;
    default: nemu_state.state = NEMU_RUNNING;
  }

  uint64_t timer_start = get_time();

  execute(n);

  uint64_t timer_end = get_time();
  g_timer += timer_end - timer_start;

  switch (nemu_state.state) {
    case NEMU_RUNNING: nemu_state.state = NEMU_STOP; break;

    case NEMU_END: case NEMU_ABORT:
      Log("nemu: %s at pc = " FMT_WORD,
          (nemu_state.state == NEMU_ABORT ? ANSI_FMT("ABORT", ANSI_FG_RED) :
           (nemu_state.halt_ret == 0 ? ANSI_FMT("HIT GOOD TRAP", ANSI_FG_GREEN) :
            ANSI_FMT("HIT BAD TRAP", ANSI_FG_RED))),
          nemu_state.halt_pc);
      // fall through
    case NEMU_QUIT: statistic();
  }
}
void (*ref_difftest_memcpy)(word_t addr, void *buf, size_t n, bool direction) = NULL;
void (*ref_difftest_regcpy)(void *dut, bool direction) = NULL;
void (*ref_difftest_exec)(uint64_t n) = NULL;
void (*ref_difftest_raise_intr)(uint64_t NO) = NULL;

void init_difftest(char *ref_so_file, long img_size, int port) {
  printf("init difftest... \n");
  assert(ref_so_file != NULL);

  void *handle;
//assert(fopen(ref_so_file,"r")==NULL);
  handle = dlopen(ref_so_file, RTLD_LAZY);
  assert(handle);

  ref_difftest_memcpy =(void (*)(word_t addr, void *buf, size_t n, bool direction)) dlsym(handle, "difftest_memcpy");
  assert(ref_difftest_memcpy);

  ref_difftest_regcpy =(void(*)(void *dut, bool direction)) dlsym(handle, "difftest_regcpy");
  assert(ref_difftest_regcpy);

  ref_difftest_exec =(void(*)(uint64_t n)) dlsym(handle, "difftest_exec");
  assert(ref_difftest_exec);

  ref_difftest_raise_intr =(void(*)(uint64_t NO)) dlsym(handle, "difftest_raise_intr");
  assert(ref_difftest_raise_intr);

  void (*ref_difftest_init)(int) = (void(*)(int))dlsym(handle, "difftest_init");
  assert(ref_difftest_init);
	
  Log("Differential testing: %s", ANSI_FMT("ON", ANSI_FG_GREEN));
  Log("The result of every instruction will be compared with %s. ", ref_so_file);

  ref_difftest_init(port);
  ref_difftest_memcpy(RESET_VECTOR, pmem, img_size, DIFFTEST_TO_REF);
  ref_difftest_regcpy(&cpu, DIFFTEST_TO_REF);
  printf("init difftest finished \n");
}

bool isa_difftest_checkregs(CPU_state *ref_r, vaddr_t pc) {
	/*printf("%lx\n",ref_r->pc);*/
	/*printf("%lx\n",pc);       */
	/*printf("%lx\n",cpu.pc);   */
	if(ref_r->pc!=cpu.pc)
		{
			printf("difftesterr:pc\n");
			printf("ref:pc:%08lx\n",ref_r->pc);
			printf("dut:pc:%08lx\n",cpu.pc);
			return false;
		}
	for(int i=0;i<32;i++){
		if(ref_r->gpr[i]!=cpu.gpr[i])
		{
			printf("difftesterr:%s\n",regs[i]);
			printf("ref:%s:%016lx\n",regs[i],ref_r->gpr[i]);
			printf("dut:%s:%016lx\n",regs[i],cpu.gpr[i]);
			return false;
		}
	}
  return true;
}

static void checkregs(CPU_state *ref, vaddr_t pc) {
  if (!isa_difftest_checkregs(ref, pc)) {
    nemu_state.state = NEMU_ABORT;
    nemu_state.halt_pc = pc;
    isa_reg_display();
  }
}

void difftest_step(vaddr_t pc, vaddr_t npc) {
  CPU_state ref_r;

  //if (skip_dut_nr_inst > 0) {
    //ref_difftest_regcpy(&ref_r, DIFFTEST_TO_DUT);
    //if (ref_r.pc == npc) {
      //skip_dut_nr_inst = 0;
      //checkregs(&ref_r, npc);
      //return;
    //}
    //skip_dut_nr_inst --;
    //if (skip_dut_nr_inst == 0)
      //panic("can not catch up with ref.pc = " FMT_WORD " at pc = " FMT_WORD, ref_r.pc, pc);
    //return;
  //}

  //if (is_skip_ref) {
    //// to skip the checking of an instruction, just copy the reg state to reference design
    //ref_difftest_regcpy(&cpu, DIFFTEST_TO_REF);
    //is_skip_ref = false;
    //return;
  //}

  ref_difftest_exec(1);
  ref_difftest_regcpy(&ref_r, DIFFTEST_TO_DUT);

  checkregs(&ref_r, pc);
}
