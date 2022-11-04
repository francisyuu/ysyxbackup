#include "common.h"

uint8_t pmem[CONFIG_MSIZE];

void _vmem_read(long long raddr, long long *rdata) {
      // 总是读取地址为`raddr & ~0x7ull`的8字节返回给`rdata`
      if(raddr==0)return;
      Assert(raddr>=0x80000000&&raddr<=0x82000000,"can not access address %lx",(uint64_t)raddr);
      uint64_t data;
      long long paddr=(raddr-PMEM_LEFT)&~0x7ull;
      memcpy(&data,pmem+paddr,8);
      *rdata=data;
  }

extern "C" void inst_read(long long raddr, long long *rdata) {
  if(raddr==0)return;
  _vmem_read(raddr,rdata);
}

extern "C" void vmem_read(long long raddr, long long *rdata, char wmask) {
  if(raddr==0||wmask!=0)return;
  _vmem_read(raddr,rdata);
#ifdef CONFIG_MTRACE
  char str[64];
  sprintf(str,"%08lx:R:addr=%08llx,data=%016llx",cpu.pc,raddr,*rdata);
  mtrace_write(str);
#endif
}

word_t vaddr_read(word_t addr,int n)
{
  word_t data;
  word_t mask=0xffffffffffffffff;
  _vmem_read(addr,(long long *)&data);
  if((addr&0x4)==4)
  {
    data=data>>32;
    if(n>4)LogR("Cant read 8 bytes through a 4 byte aliged address");
    for(int i=8;i>n;i--)mask=mask>>8;
  }
  else
  {
    for(int i=8;i>n;i--)
    {
      mask=mask>>8;
    }
    data=data&mask;
  }
  return data;
}
extern "C" void vmem_write(long long waddr, long long wdata, char wmask) {
      if(wmask==0)return;
      uint8_t mask=(uint8_t)wmask;
      long long paddr=(waddr-PMEM_LEFT)&~0x7ull;
      uint8_t wlen=8;
      switch(mask){
        case(0x01):wlen=1;
            break;
        case(0x03):wlen=2;
            break;
        case(0x0f):wlen=4;
            break;
        case(0xff):wlen=8;
            break;
        default:
            Assert(0,"Inst wrong:wrong wmem len");
      }
      memcpy(pmem+paddr,&wdata,wlen);
#ifdef CONFIG_MTRACE
  char str[64];
  sprintf(str,"%08lx:W:addr=%08llx,data=%016llx,len=%d",cpu.pc,waddr,wdata,wlen);
  mtrace_write(str);
#endif
    // 总是往地址为`waddr & ~0x7ull`的8字节按写掩码`wmask`写入`wdata`
    //   // `wmask`中每比特表示`wdata`中1个字节的掩码,
    //     // 如`wmask = 0x3`代表只写入最低2个字节, 内存中的其它字节保持不变
    //     
}
