#include <common.h>
#include <dlfcn.h>


//static TOP_NAME ysyx_22050133_NPC;
    VerilatedContext* contextp = new VerilatedContext;
    Vysyx_22050133_NPC_top* top = new Vysyx_22050133_NPC_top{contextp};
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
uint64_t g_nr_guest_inst = 0;
uint64_t g_nr_guest_clk = 0;
void cpu_single_cycle() {
        //if(top->rst!=1)printf("pc = %08lx, inst = %08x\n", top->pc, top->inst);
	static long lastpc= 0x80000000;
#ifdef MULTICYCLE
		while(cpu.pc==lastpc)
		{
			top->clk = 1; top->eval();
			top->clk = 0; top->eval();
      g_nr_guest_clk ++;
		}
		lastpc=cpu.pc;
    g_nr_guest_inst ++;
#else
  top->clk = 1; top->eval();
  top->clk = 0; top->eval();
  g_nr_guest_clk ++;
  if(cpu.pc!=lastpc)g_nr_guest_inst ++;
		lastpc=cpu.pc;
#endif
		/*printf("gnr=%ld\n",g_nr_guest_inst);*/
       // printf("pc = %08x, inst = %08x rd=%08x\n", top->pc, top->inst,top->rddata);
}

void cpu_reset(int n) {
	while(n--)
	{
		top->rst = 1; top->eval();
		top->clk = 0; top->eval();
		top->clk = 1; top->eval();
		top->clk = 0; top->eval();
		top->rst = 0; top->eval();
		while(cpu.pc!=0x80000000)
		{
      g_nr_guest_clk ++;
			top->clk = 1; top->eval();
			top->clk = 0; top->eval();
		}
    g_nr_guest_inst ++;
		printf("cpu reset:pc=%08lx,inst=%08x\n",cpu.pc,cpu.inst);
	}
}
//void nvboard_bind_all_pins(Vysyx_22050133_NPC* top);
#define MAX_INST_TO_PRINT 10

CPU_state cpu = {};
static uint64_t g_timer = 0; // unit: us
static bool g_print_step = false;
/*static bool g_print_always = true;*/
#ifdef CONFIG_ITRACE
static bool g_print_always = true;
#else
static bool g_print_always = false;
#endif


#ifdef CONFIG_DEBUGINFO
static void trace_and_difftest(Decode *_this, vaddr_t dnpc) {
  if (g_print_step) { IFDEF(CONFIG_ITRACE, puts(_this->logbuf)); }
  IFDEF(CONFIG_ITRACE, log_write("%s\n", _this->logbuf));
  IFDEF(CONFIG_IRINGBUF, iring_write(_this->logbuf));
  IFDEF(CONFIG_WATCHPOINT, wp_update(&nemu_state.state));
  IFDEF(CONFIG_FTRACE, ftrace_write(_this->pc,dnpc));
  /*if (nemu_state.state == NEMU_RUNNING)IFDEF(CONFIG_DIFFTEST, difftest_step(_this->pc, dnpc));*/
  IFDEF(CONFIG_DIFFTEST, difftest_step(_this->pc, dnpc));

	if (nemu_state.state == NEMU_ABORT)
	{
	char *p = _this->logbuf;
	p += snprintf(p, sizeof(_this->logbuf), FMT_WORD ":", _this->pc);
	int i;
	uint8_t *inst = (uint8_t *)&_this->inst;
	for (i = 3; i >= 0; i --) {
		p += snprintf(p, 4, " %02x", inst[i]);
	}
	memset(p, ' ', 1);
	p += 1;

	disassemble(p, _this->logbuf + sizeof(_this->logbuf) - p,
			 _this->pc, (uint8_t *)&_this->inst, 4);
  printf("%s\n",_this->logbuf);
		/*IFDEF(CONFIG_ITRACE, {puts(_this->logbuf);return;}); */
		/*printf("inst:%016x\n",_this->inst);*/
	}
}
#endif

static void exec_once(Decode *s, vaddr_t pc) {
#ifdef CONFIG_DEBUGINFO
  s->pc = pc;
  s->dnpc = cpu.npc;
  s->snpc = cpu.npc;
  s->inst= cpu.inst;
#endif
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
#ifdef CONFIG_DEBUGINFO
    trace_and_difftest(&s, cpu.pc);
#endif
    if (nemu_state.state != NEMU_RUNNING) break;
    IFDEF(CONFIG_DEVICE, device_update());
  }
}

static void statistic() {
#ifndef MULTICYCLE
	g_nr_guest_inst-=2*npc_flush;
#endif
  IFNDEF(CONFIG_TARGET_AM, setlocale(LC_NUMERIC, ""));
#define NUMBERIC_FMT MUXDEF(CONFIG_TARGET_AM, "%", "%'") PRIu64
  Log("host time spent = " NUMBERIC_FMT " us", g_timer);
  Log("total guest instructions = " NUMBERIC_FMT, g_nr_guest_inst);
  Log("total guest clk number = " NUMBERIC_FMT, g_nr_guest_clk);
  if (g_timer > 0) {
    Log("simulation frequency = " NUMBERIC_FMT " inst/s", g_nr_guest_inst * 1000000 / g_timer);
    Log("simulation frequency = " NUMBERIC_FMT " clk/s", g_nr_guest_clk * 1000000 / g_timer);
    Log("IPC = %f inst/clk", float(g_nr_guest_inst)/(float)g_nr_guest_clk );
  }
  else Log("Finish running in less than 1 us and can not calculate the simulation frequency");
#ifdef PROFILINGINFO
	printf("**********cache***********\n");
    printf("\
total inst fetch:%ld,\n\
mem rw:%-16ld, %%%6.3f(total inst),\n\
mem r :%-16ld, %%%6.3f(inst mem),\n\
mem w :%-16ld, %%%6.3f(inst mem)\n",inst_inst,inst_mem,inst_mem*100.0f/g_nr_guest_inst,inst_memr,inst_memr*100.0f/inst_mem,inst_memw,inst_memw*100.0f/inst_mem);
    printf("\
inst cache hit      :%-16ld, %%%6.3f,\n\
mem cache hit       :%-16ld, %%%6.3f,\n\
mem cache miss dirty:%-16ld, %%%6.3f(mem cache miss)\n",inst_cache_hit,inst_cache_hit*100.0f/(inst_cache_hit+inst_cache_miss),mem_cache_hit,mem_cache_hit*100.0f/(mem_cache_hit+mem_cache_miss),mem_cache_miss_dirty,mem_cache_miss_dirty*100.0f/mem_cache_miss);
	printf("**********alu************\n");
	printf("\
total   mul_inst :%-16ld, %%%6.3f(total inst),\n\
total   mul_cycle:%-16ld, %%%6.3f(total clk),\n\
average mul_cycle:%6.3f\n",inst_mul,inst_mul*100.0f/g_nr_guest_inst,cycle_mul,cycle_mul*100.0f/g_nr_guest_clk,(float)cycle_mul/inst_mul);
	printf("\
total   div_inst :%-16ld, %%%6.3f(total inst),\n\
total   div_cycle:%-16ld, %%%6.3f(total clk),\n\
average div_cycle:%6.3f\n",inst_div,inst_div*100.0f/g_nr_guest_inst,cycle_div,cycle_div*100.0f/g_nr_guest_clk,(float)cycle_div/inst_div);
	printf("**********IPC************\n");
	printf("\
IPC_calculate = (1-block)*(1-pop-flush*2)\n\
              = (1-%4.3f)*(1/(1+%4.3f+%4.3f*2))\n\
              = %4.3f*%4.3f\n\
              = %7.6f inst/clk\n\
pop        =%-16ld, %%%6.3f(total inst)\n\
jump       =%-16ld, %%%6.3f(total inst)\n\
flush      =%-16ld, %%%6.3f(total jump)\n\
block_total=%-16ld, %%%6.3f(total clk)\n\
block_inst =%-16ld, %%%6.3f(total block)\n\
block_alu  =%-16ld, %%%6.3f(total block)\n\
block_mem  =%-16ld, %%%6.3f(total block)\n\
block_IXX  =%-16ld, %%%6.3f(total block)\n\
block_XAX  =%-16ld, %%%6.3f(total block)\n\
block_XXM  =%-16ld, %%%6.3f(total block)\n\
block_IAX  =%-16ld, %%%6.3f(total block)\n\
block_IXM  =%-16ld, %%%6.3f(total block)\n\
block_XAM  =%-16ld, %%%6.3f(total block)\n\
block_IAM  =%-16ld, %%%6.3f(total block)\n",
block_total/(float)g_nr_guest_clk,npc_pop/(float)g_nr_guest_inst,npc_flush/(float)g_nr_guest_inst,
(1-block_total/(float)g_nr_guest_clk),1/(1+npc_pop/(float)g_nr_guest_inst+npc_flush/(float)g_nr_guest_inst*2),
(1-block_total/(float)g_nr_guest_clk)/(1+npc_pop/(float)g_nr_guest_inst+npc_flush/(float)g_nr_guest_inst*2),
npc_pop,npc_pop*100.0f/g_nr_guest_inst,
npc_jump,npc_jump*100.0f/g_nr_guest_inst,
npc_flush,npc_flush*100.0f/npc_jump,
block_total,block_total*100.0f/g_nr_guest_clk,
block_inst ,block_inst*100.0f/block_total, 
block_alu  ,block_alu *100.0f/block_total, 
block_mem  ,block_mem *100.0f/block_total, 
block_IXX  ,block_IXX *100.0f/block_total, 
block_XAX  ,block_XAX *100.0f/block_total, 
block_XXM  ,block_XXM *100.0f/block_total, 
block_IAX  ,block_IAX *100.0f/block_total, 
block_IXM  ,block_IXM *100.0f/block_total, 
block_XAM  ,block_XAM *100.0f/block_total, 
block_IAM  ,block_IAM *100.0f/block_total
);
#endif
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
static bool is_skip_ref[2] = {false,false};
static int skip_dut_nr_inst = 0;

// this is used to let ref skip instructions which
// can not produce consistent behavior with NEMU
void difftest_skip_ref() {
  is_skip_ref[0] = true;
  // If such an instruction is one of the instruction packing in QEMU
  // (see below), we end the process of catching up with QEMU's pc to
  // keep the consistent behavior in our best.
  // Note that this is still not perfect: if the packed instructions
  // already write some memory, and the incoming instruction in NEMU
  // will load that memory, we will encounter false negative. But such
  // situation is infrequent.
  skip_dut_nr_inst = 0;
}

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

#ifdef MULTICYCLE
static void checkregs(CPU_state *ref, vaddr_t pc) {
		static CPU_state laststate;
  if (!isa_difftest_checkregs(ref, pc)) {
    nemu_state.state = NEMU_ABORT;
    nemu_state.halt_pc = pc;
    /*isa_reg_display();*/
    for(int i=0;i<32;i++)
    {
			if((laststate.inst&0xF80)>>7==i)printf( C_RED "rd  ");
			else if((laststate.inst&0xF8000)>>15==i)printf( C_RED "rs1 ");
			else if((laststate.inst&0x1F00000)>>20==i)printf( C_RED "rs2 ");
			else printf("    ");
        printf("last %-3s:0x%016lx ",*(regs+i),laststate.gpr[i]); 
        printf("dut %-3s:0x%016lx  ",*(regs+i),cpu.gpr[i]); 
        printf("ref %-3s:0x%016lx\n",*(regs+i),ref->gpr[i]); 
			printf( C_END );
    }
  }
		laststate=cpu;
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

	/*printf("duta5=%lx\n",cpu.gpr[15]);*/
	if (is_skip_ref[0]) {
		// to skip the checking of an instruction, just copy the reg state to reference design
		/*printf("skip\n");*/
			IFDEF(CONFIG_DIFFTEST_DEVICE,ref_difftest_exec(1));
			ref_difftest_regcpy(&cpu, DIFFTEST_TO_REF);
	is_skip_ref[0] = false;
	}
	else
	{
		/*printf("test\n");*/
		ref_difftest_exec(1);
		ref_difftest_regcpy(&ref_r, DIFFTEST_TO_DUT);
		checkregs(&ref_r, pc);
	}
	/*is_skip_ref[0] = is_skip_ref[1];*/
	return;
}
#else
void difftest_step(vaddr_t pc, vaddr_t npc) {
	static CPU_state gpr_laststate;
  CPU_state ref_r;
	static CPU_state refgpr_laststate;
	/*printf("duta5=%lx\n",cpu.gpr[15]);*/
	if (is_skip_ref[0]) {
		// to skip the checking of an instruction, just copy the reg state to reference design
			IFDEF(CONFIG_DIFFTEST_DEVICE,ref_difftest_exec(1));
			ref_difftest_regcpy(&cpu, DIFFTEST_TO_REF);
	/*is_skip_ref[0] = false;*/
	}
	else
	{
		int run=0;
	  for(int i=0;i<32;i++){
			if(gpr_laststate.gpr[i]!=cpu.gpr[i])
			{
			  run=1;
				break;
			}
		}
		if(run==0)return;
		while(run)
		{
			ref_difftest_exec(1);
		  ref_difftest_regcpy(&ref_r, DIFFTEST_TO_DUT);
			for(int i=0;i<32;i++){
				if(refgpr_laststate.gpr[i]!=ref_r.gpr[i])
				{
					run=0;
				}
			}
		}
		/*printf("skip\n");*/
    for(int i=0;i<32;i++)
    {
			if(ref_r.gpr[i]!=cpu.gpr[i])
			{
				nemu_state.state = NEMU_ABORT;
				nemu_state.halt_pc = pc;
			}
    }
    if(nemu_state.state==NEMU_ABORT)
		{
				printf("last pc:0x%016lx ",refgpr_laststate.pc); 
				printf("dut pc:0x%016lx  ",cpu.pc); 
				printf("ref pc:0x%016lx\n",ref_r.pc); 
			for(int i=0;i<32;i++)
			{
				if(ref_r.gpr[i]!=cpu.gpr[i])printf( C_RED );
				printf("last %-3s:0x%016lx ",*(regs+i),gpr_laststate.gpr[i]); 
				printf("dut %-3s:0x%016lx  ",*(regs+i),cpu.gpr[i]); 
				printf("ref %-3s:0x%016lx\n",*(regs+i),ref_r.gpr[i]); 
				printf( C_END );
			}
		}
		/*checkregs(&ref_r, pc);*/
		gpr_laststate=cpu;
		ref_difftest_regcpy(&refgpr_laststate, DIFFTEST_TO_DUT);
	}
	return;
}
#endif
