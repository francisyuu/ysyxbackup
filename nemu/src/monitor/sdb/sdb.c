/***************************************************************************************
* Copyright (c) 2014-2022 Zihao Yu, Nanjing University
*
* NEMU is licensed under Mulan PSL v2.
* You can use this software according to the terms and conditions of the Mulan PSL v2.
* You may obtain a copy of Mulan PSL v2 at:
*          http://license.coscl.org.cn/MulanPSL2
*
* THIS SOFTWARE IS PROVIDED ON AN "AS IS" BASIS, WITHOUT WARRANTIES OF ANY KIND,
* EITHER EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO NON-INFRINGEMENT,
* MERCHANTABILITY OR FIT FOR A PARTICULAR PURPOSE.
*
* See the Mulan PSL v2 for more details.
***************************************************************************************/

#include <isa.h>
#include <cpu/cpu.h>
#include <readline/readline.h>
#include <readline/history.h>
#include "sdb.h"
#include <memory/vaddr.h>
static int is_batch_mode = false;

void init_regex();
void init_wp_pool();

/* We use the `readline' library to provide more flexibility to read from stdin. */
static char* rl_gets() {
  static char *line_read = NULL;

  if (line_read) {
    free(line_read);
    line_read = NULL;
  }

  line_read = readline("(nemu) ");

  if (line_read && *line_read) {
    add_history(line_read);
  }

  return line_read;
}

static int cmd_c(char *args) {
  cpu_exec(-1);
  return 0;
}


static int cmd_q(char *args) {
  return -1;
}

static int cmd_si(char *args) {
  /* extract the first argument */
  char *arg = strtok(NULL, " ");
  int n;

  if (arg == NULL) {
    /* no argument given */
    cpu_exec(1);
    }
  else {
    sscanf(arg,"%d",&n);
    Log("run %d instructions",n);
    cpu_exec(n);
  }

  return 0;
}

static int cmd_x(char *args) {
  /* extract the first argument */
  char *arg1 = strtok(NULL, " ");
  char *arg2 = strtok(NULL, " ");
  int n;
  long unsigned int address;

  if (arg1 == NULL || arg2 == NULL) {
    /* no argument given */
  Log("x N EXPR: use the result of EXPR as the start memory address,then print N*4bytes memory data in hex \n example:x 10 $esp");
  }
  else if(sscanf(arg1,"%d",&n)==1&&sscanf(arg2,"0x%lx",&address)==1){
      for(int i=0;i<n;i++)
      {
          printf("addr:0x%08lx  data:0x%08lx\n",address,vaddr_read(address,4));
          address+=4;
      }
  }
  else Log("please give the right argument\n");

  return 0;
}

static int cmd_info(char *args) {
  char *arg = strtok(NULL, " ");
    if(arg == NULL)isa_reg_display();
    else if(strcmp(arg,"r")==0)isa_reg_display();
    else if(strcmp(arg,"w")==0);
    else printf("please give an arg:r for registers, w for watchpoints\n");
  return 0;
}

static int cmd_help(char *args);

static struct {
  const char *name;
  const char *description;
  int (*handler) (char *);
} cmd_table [] = {
  { "help", "Display information about all supported commands", cmd_help },
  { "c", "Continue the execution of the program", cmd_c },
  { "q", "Exit NEMU", cmd_q },
  { "si", "run n instructions and stop,default 1 if n not given", cmd_si},
  { "info", "info r: print the state of rigisters;\n info w:print infomation of the watching points", cmd_info },
  { "x", "x N EXPR: use the result of EXPR as the start memory address,then print N*4bytes memory data in hex \n example:x 10 $esp", cmd_x },
  { "p", "p EXPR: calculate EXPR", cmd_q },
  { "w", "w EXPR: stop the program when the value of EXPR change", cmd_q },
  { "d", "d N: delete watching point N ", cmd_q },


  /* TODO: Add more commands */

};

#define NR_CMD ARRLEN(cmd_table)

static int cmd_help(char *args) {
  /* extract the first argument */
  char *arg = strtok(NULL, " ");
  int i;

  if (arg == NULL) {
    /* no argument given */
    for (i = 0; i < NR_CMD; i ++) {
      printf("%s - %s\n", cmd_table[i].name, cmd_table[i].description);
    }
  }
  else {
    for (i = 0; i < NR_CMD; i ++) {
      if (strcmp(arg, cmd_table[i].name) == 0) {
        printf("%s - %s\n", cmd_table[i].name, cmd_table[i].description);
        return 0;
      }
    }
    printf("Unknown command '%s'\n", arg);
  }
  return 0;
}

void sdb_set_batch_mode() {
  is_batch_mode = true;
}

void sdb_mainloop() {
  if (is_batch_mode) {
    cmd_c(NULL);
    return;
  }

  for (char *str; (str = rl_gets()) != NULL; ) {
    char *str_end = str + strlen(str);

    /* extract the first token as the command */
    char *cmd = strtok(str, " ");
    if (cmd == NULL) { continue; }

    /* treat the remaining string as the arguments,
     * which may need further parsing
     */
    char *args = cmd + strlen(cmd) + 1;
    if (args >= str_end) {
      args = NULL;
    }

#ifdef CONFIG_DEVICE
    extern void sdl_clear_event_queue();
    sdl_clear_event_queue();
#endif

    int i;
    for (i = 0; i < NR_CMD; i ++) {
      if (strcmp(cmd, cmd_table[i].name) == 0) {
        if (cmd_table[i].handler(args) < 0) { return; }
        break;
      }
    }

    if (i == NR_CMD) { printf("Unknown command '%s'\n", cmd); }
  }
}

void init_sdb() {
  /* Compile the regular expressions. */
  init_regex();

  /* Initialize the watchpoint pool. */
  init_wp_pool();
}
