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
	/*printf("%s:a0=%d a1=%d a2=%d \n",syscallname[a[0]],a[1],a[2],a[3]);*/

  switch (a[0]) {
		case SYS_exit:
			{
				halt(a[1]);
				/*if(a[1]==SYS_exit)halt(a[1]);*/
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
    default: panic("Unhandled syscall ID = %d", a[0]);
  }
}
