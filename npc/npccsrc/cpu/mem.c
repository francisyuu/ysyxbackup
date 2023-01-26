#include "common.h"
#include "time.h"

uint8_t pmem[CONFIG_MSIZE];

void _vmem_read(long long raddr, long long *rdata) {
      // 总是读取地址为`raddr & ~0x7ull`的8字节返回给`rdata`
#ifdef CONFIG_DEBUGINFO
      Assert(raddr>=PMEM_LEFT&&raddr<=PMEM_RIGHT,"can not access Raddress %lx",(uint64_t)raddr);
#endif
      uint64_t data;
      long long paddr=(raddr-PMEM_LEFT)&~0x7ull;
      memcpy(&data,pmem+paddr,8);
      /*printf("R:0x%08llx,0x%016lx\n",paddr,data);*/
      *rdata=data;
  }

extern "C" void inst_read(long long raddr, long long *rdata) {
  if(raddr==0)return;
  _vmem_read(raddr,rdata);
}

extern "C" void vmem_read(long long raddr, long long *rdata) {
  if(raddr==0)return;
  else if(raddr>PMEM_RIGHT)
    {
      *rdata=mmio_read((paddr_t)(raddr&~0x7ull),8);
      return;
    }
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
  if(((addr&0x7ull)+n)>8)printf("warning:read over%lx:%dbytes\n",addr,n);
  if(addr>PMEM_RIGHT)
    {
      printf("access device, may cause dtrace\n");
      data=mmio_read((paddr_t)(addr&~0x7ull),8);
    }
  else _vmem_read(addr,(long long *)&data);
  data=data>>((addr&0x7ull)*8);
  mask=mask>>(8*(8-n));
  data=data&mask;
  return data;
}
extern "C" void vmem_write(long long waddr, long long wdata, char wmask) {
      if(wmask==0||waddr==0)return;
      uint8_t mask=(uint8_t)wmask;
      long long vaddr=waddr;
			long long wdataraw=wdata;
			while((mask&0x1)==0)
			{
				mask=mask>>1;
				vaddr=vaddr+1;
				wdataraw=wdataraw>>8;
			}
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
      if(waddr>PMEM_RIGHT)
      {
        mmio_write((paddr_t)vaddr,wlen,(uint64_t)wdataraw);
        return;
      }
#ifdef CONFIG_DEBUGINFO
      Assert(waddr>=PMEM_LEFT&&waddr<=PMEM_RIGHT,"can not access Waddress %lx",(uint64_t)waddr);
#endif
			/*printf("W:0x%08llx,0x%016llx,%dbyte\n",paddr,wdataraw,wlen);*/
      /*memcpy(pmem+paddr,&wdata,8);*/
      /*paddr=(paddr-PMEM_LEFT)&~0x7ull;*/
      long long paddr=vaddr-PMEM_LEFT;
      memcpy(pmem+paddr,&wdataraw,wlen);
#ifdef CONFIG_MTRACE
  char str[64];
  sprintf(str,"%08lx:W:addr=%08llx,data=%016llx,len=%d",cpu.pc,paddr,wdataraw,wlen);
  mtrace_write(str);
#endif
    // 总是往地址为`waddr & ~0x7ull`的8字节按写掩码`wmask`写入`wdata`
    //   // `wmask`中每比特表示`wdata`中1个字节的掩码,
    //     // 如`wmask = 0x3`代表只写入最低2个字节, 内存中的其它字节保持不变
    //     
}
