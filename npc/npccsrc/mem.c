#include "common.h"

#define MEM_LEN 40
#define ADDR_OFFSET 0x80000000
uint32_t pmem_image[MEM_LEN/4]={0x00000093,
                   0x00108093,
                   0x00208093,
                   0x00308093,
                   0x00408093,
                   0x00100073,
                   0x00608093,
                   0x00708093,
                   0x00808093
};
uint8_t *pmem;
uint32_t inst_read(uint64_t addr)
{
  //assert(addr-ADDR_OFFSET<MEM_LEN);
  uint32_t data=((uint32_t)pmem[addr+3-ADDR_OFFSET]<<24)|(uint32_t)pmem[addr+2-ADDR_OFFSET]<<16|(uint32_t)pmem[addr+1-ADDR_OFFSET]<<8|(uint32_t)pmem[addr-ADDR_OFFSET];
  return data;
}
void pmem_write(uint32_t addr,uint32_t din)
{
  //assert(addr-ADDR_OFFSET<MEM_LEN);
  pmem[addr-ADDR_OFFSET]=din;
}
void load_img(int argc, char *argv[])
{
  assert(argc==2);
  char *img=argv[1];  
  FILE *fp=fopen(img,"r");
  int size;
  assert(fp!=NULL);
  fseek(fp,0,SEEK_END);
  size=ftell(fp);
  printf("img size = %d bytes\n",size);
  pmem=(uint8_t*)malloc(size+4-size%4);
  fseek(fp,0,SEEK_SET);
  fread(pmem,1,size,fp);
}
