#include <common.h>
#include "syscall.h"
const char* syscallname[]=
{
  "SYS_exit",
	"SYS_yield",
	"SYS_open",
	"SYS_read",
	"SYS_write",
  "SYS_kill",
  "SYS_getpid",
  "SYS_close",
  "SYS_lseek",
  "SYS_brk",
  "SYS_fstat",
  "SYS_time",
  "SYS_signal",
  "SYS_execve",
  "SYS_fork",
  "SYS_link",
  "SYS_unlink",
  "SYS_wait",
  "SYS_times",
  "SYS_gettimeofday"
};
void do_syscall(Context *c) {
  uintptr_t a[4];
  a[0] = c->GPR1;
  a[1] = c->GPR2;
  a[2] = c->GPR3;
  a[3] = c->GPR4;
	printf("\n%s:a0=0x%x a1=0x%x a2=0x%x \n",syscallname[a[0]],a[1],a[2],a[3]);

  switch (a[0]) {
		case SYS_exit:
			{
				/*halt(a[1]);*/
				if(a[1]==SYS_exit)halt(a[1]);
				break;
			}
		case SYS_yield:yield();break;
		case SYS_write:
			{
				if(a[1]==1||a[1]==2){
					printf("%s",a[2]);
					c->GPRx=a[3];
				}
				else c->GPRx=-1;
				break;
			}
		case SYS_brk:
			{
				printf("clear 0x%x 0x%x\n",a[1],a[2]);
					memset((char *)a[2],0,a[1]-a[2]);
				c->GPRx=0;
				/*if(a[1]==SYS_exit)halt(a[1]);*/
				break;
			}
    default: panic("Unhandled syscall ID = %d", a[0]);
  }
}
