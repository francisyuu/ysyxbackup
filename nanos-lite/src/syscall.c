#include <common.h>
#include "syscall.h"
#include <fs.h>
#include <proc.h>
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
	/*if(a[0]==SYS_read||a[0]==SYS_write||a[0]==SYS_lseek||a[0]==SYS_close)printf("%s:",fs_name(a[1]));*/
	/*printf("%s:a0=0x%x a1=0x%x a2=0x%x \n",syscallname[a[0]],a[1],a[2],a[3]);*/

  switch (a[0]) {
		case SYS_exit:
			{
				/*halt(a[1]);*/
				/*printf("exit %d\n",a[1]);*/
				/*if(a[1]==SYS_exit)halt(a[1]);*/
				naive_uload(NULL,"/bin/nterm");
				break;
			}
		case SYS_yield:yield();break;
		case SYS_open:
			{
				c->GPRx=fs_open((char *)a[1],a[2],a[3]);
				break;
			}
		case SYS_read:
			{
				c->GPRx=fs_read(a[1],(void *)a[2],a[3]);
				break;
			}
		case SYS_write:
			{
				c->GPRx=fs_write(a[1],(void *)a[2],a[3]);
				break;
			}
		case SYS_lseek:
			{
				c->GPRx=fs_lseek(a[1],a[2],a[3]);
				break;
			}
		case SYS_close:
			{
				c->GPRx=fs_close(a[1]);
				break;
			}
		case SYS_brk:
			{
				/*printf("clear 0x%x 0x%x\n",a[1],a[2]);*/
				if(a[1]>a[2])memset((char *)a[2],0,a[1]-a[2]);
				c->GPRx=0;
				/*if(a[1]==SYS_exit)halt(a[1]);*/
				/*printf("f\n");*/
				break;
			}
		case SYS_gettimeofday:
			{
			/*AM_TIMER_RTC_T rtc;*/
			long us=io_read(AM_TIMER_UPTIME).us;
			/*rtc = io_read(AM_TIMER_RTC);*/
      /*printf("%d-%d-%d %d:%d:%d:%d GMT (", rtc.year, rtc.month, rtc.day, rtc.hour, rtc.minute, rtc.second,us);*/
				/*printf("clear 0x%x 0x%x\n",a[1],a[2]);*/
				*((long *)a[1])=us/1000000;
				*((long *)a[1]+1)=us%1000000;
				/**(a[2])=0;*/
				c->GPRx=0;
				/*if(a[1]==SYS_exit)halt(a[1]);*/
				break;
			}
		case SYS_execve:
			{
				naive_uload(NULL,(char *)a[1]);
				break;
			}
    default: panic("Unhandled syscall ID = %d", a[0]);
  }
}
