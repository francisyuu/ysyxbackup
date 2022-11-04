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

#include "common.h"
#include <elf.h>

extern uint64_t g_nr_guest_inst;
FILE *log_fp = NULL;

struct tracepack
{
  FILE *fp;
  int buf_len;
  int line_cnt;
  fpos_t pos;
}iring,mtrace,ftrace;
#define iring_buf_max 200
#define mtrace_buf_max 200

void init_log(const char *log_file) {
  log_fp = stdout;
  if (log_file != NULL) {
    FILE *fp = fopen(log_file, "w");
    Assert(fp, "Can not open '%s'", log_file);
    log_fp = fp;
#ifdef CONFIG_IRINGBUF
    iring.fp=NULL;
    iring.buf_len=iring_buf_max;
    iring.line_cnt=0;
    char iring_file[128];
    strcpy(iring_file,log_file);
    strcat(iring_file,".iringbuf");
    iring.fp=fopen(iring_file,"w");
    fgetpos(iring.fp,&iring.pos);
#endif
#ifdef CONFIG_MTRACE
    mtrace.fp=NULL;
    mtrace.buf_len=mtrace_buf_max;
    mtrace.line_cnt=0;
    char mtrace_file[128];
    strcpy(mtrace_file,log_file);
    strcat(mtrace_file,".mtrace");
    mtrace.fp=fopen(mtrace_file,"w");
    fgetpos(mtrace.fp,&mtrace.pos);
#endif
#ifdef CONFIG_FTRACE
    ftrace.fp=NULL;
    char ftrace_file[128];
    strcpy(ftrace_file,log_file);
    strcat(ftrace_file,".ftrace");
    ftrace.fp=fopen(ftrace_file,"w");
		assert(ftrace.fp!=NULL);
#endif
  }
  Log("Log is written to %s", log_file ? log_file : "stdout");
}
void mtrace_write(char * str)
{
  if(++mtrace.line_cnt>=mtrace.buf_len)
  {
    fsetpos(mtrace.fp,&mtrace.pos);
    fprintf(mtrace.fp,"%s","  ");
    mtrace.line_cnt=0;
    rewind(mtrace.fp);
    fgetpos(mtrace.fp,&mtrace.pos);
  }
  fsetpos(mtrace.fp,&mtrace.pos);
  fprintf(mtrace.fp,"%s","  \n");
  fprintf(mtrace.fp,"%s",str);
  for(int spacenum=64-strlen(str);spacenum>0;spacenum--)fprintf(mtrace.fp,"%s"," ");
  fgetpos(mtrace.fp,&mtrace.pos);
  fprintf(mtrace.fp,"%s","<-");
}

void iring_write(char * str)
{
  if(++iring.line_cnt>=iring.buf_len)
  {
    fsetpos(iring.fp,&iring.pos);
    fprintf(iring.fp,"%s","  ");
    iring.line_cnt=0;
    rewind(iring.fp);
    fgetpos(iring.fp,&iring.pos);
  }
  fsetpos(iring.fp,&iring.pos);
  fprintf(iring.fp,"%s","  \n");
  fprintf(iring.fp,"%s",str);
  for(int spacenum=64-strlen(str);spacenum>0;spacenum--)fprintf(iring.fp,"%s"," ");
  fgetpos(iring.fp,&iring.pos);
  fprintf(iring.fp,"%s","<-");
}

bool log_enable() {
  return MUXDEF(CONFIG_TRACE, (g_nr_guest_inst >= CONFIG_TRACE_START) &&
         (g_nr_guest_inst <= CONFIG_TRACE_END), false);
}

//ftrace-------------------------------------------//

typedef struct
{
  word_t  addr;
  word_t  end;
  char name[64];
}funcs_t;

struct funcpack_t
{
	int nmax;
	int depth;
	int curn;
	long long int watchdog;
	funcs_t *f;
}funcpack;

void ftrace_init(const char* elfname)
{
  printf("ftrance init...\n");
  FILE* fp;
	int success;
  fp=fopen(elfname,"r");
	Assert(fp!=NULL,"ftrace enabled but no img is given!\n");
  Elf64_Ehdr elf_header;
  success=fread(&elf_header,sizeof(elf_header),1,fp);
	assert(success!=0);
  Elf64_Shdr *elf_shdr=(Elf64_Shdr*)malloc(sizeof(Elf64_Shdr)*elf_header.e_shnum);
  fseek(fp,elf_header.e_shoff,SEEK_SET);
  success=fread(elf_shdr,sizeof(Elf64_Shdr)*elf_header.e_shnum,1,fp);
  int symshnum=0;
  int strshnum=0;
  for(symshnum=0;symshnum<elf_header.e_shnum;symshnum++)
  {
      if(elf_shdr[symshnum].sh_type==SHT_SYMTAB)break;
  }
  for(strshnum=0;strshnum<elf_header.e_shnum;strshnum++)
  {
      if(elf_shdr[strshnum].sh_type==SHT_STRTAB)break;
  }
  Elf64_Sym *elf_sym=(Elf64_Sym*)malloc(elf_shdr[symshnum].sh_size);
  char *elf_str=(char*)malloc(elf_shdr[strshnum].sh_size);
  fseek(fp,elf_shdr[symshnum].sh_offset,SEEK_SET);
  success=fread(elf_sym,elf_shdr[symshnum].sh_size,1,fp);
	assert(success!=0);
  fseek(fp,elf_shdr[strshnum].sh_offset,SEEK_SET);
  success=fread(elf_str,1,elf_shdr[strshnum].sh_size,fp);
	assert(success!=0);
  int symnum;
	funcpack.nmax=0;
	funcpack.curn=0;
	funcpack.depth=0;
	funcpack.watchdog=0;
  for(symnum=0;symnum<(elf_shdr[symshnum].sh_size/elf_shdr[symshnum].sh_entsize);symnum++)
  {
    if((elf_sym[symnum].st_info&0xf)==STT_FUNC)
    {
      funcpack.nmax++;
    }
  }
  funcpack.f=(funcs_t*)malloc(sizeof(funcs_t)*funcpack.nmax); 
  int funcnum=0;
  for(symnum=0;symnum<(elf_shdr[symshnum].sh_size/elf_shdr[symshnum].sh_entsize);symnum++)
  {
    if((elf_sym[symnum].st_info&0xf)==STT_FUNC)
    {
      funcpack.f[funcnum].addr=elf_sym[symnum].st_value;
			if(elf_sym[symnum].st_size==0)
			{
				funcpack.curn=symnum;
				funcpack.f[funcnum].end=elf_sym[symnum].st_value;
			}
      else funcpack.f[funcnum].end=elf_sym[symnum].st_value+elf_sym[symnum].st_size-1;
      strcpy(funcpack.f[funcnum].name,elf_str+elf_sym[symnum].st_name);
      //printf("funcload:addr:%08lx end:%08lx ",funcpack.f[funcnum].addr,funcpack.f[funcnum].end);
      fprintf(ftrace.fp,"funcload:addr:%08lx end:%08lx ",funcpack.f[funcnum].addr,funcpack.f[funcnum].end);
      //printf("name:%s\n",funcpack.f[funcnum].name);
      fprintf(ftrace.fp,"name:%s\n",funcpack.f[funcnum].name);
			funcnum++;
    }
  }
	free(elf_shdr);
	free(elf_sym);
	free(elf_str);
  printf("ftrance init finished\n");
}
void ftrace_free()
{
	free(funcpack.f);
}
void ftrace_write(word_t pc,word_t dnpc)
{
	//printf("0x%08lx 0x%08lx\n",pc,dnpc);
	for(int i=0;i<funcpack.nmax;i++)
	{
		if(dnpc>=funcpack.f[i].addr&&
				dnpc<=funcpack.f[i].end)
		{
			funcpack.watchdog++;
			if(i!=funcpack.curn)
			{
				funcpack.watchdog=0;
				fprintf(ftrace.fp,"0x%08lx:",pc);
				if(dnpc==funcpack.f[i].addr)
				{
					funcpack.depth++;
				  for(int n=0;n<funcpack.depth;n++)fprintf(ftrace.fp,"-");
					fprintf(ftrace.fp,"call [%s@0x%08lx]\n",funcpack.f[i].name,funcpack.f[i].addr);
				}
				else
				{
					funcpack.depth--;
				  for(int n=0;n<funcpack.depth;n++)fprintf(ftrace.fp,"-");
					fprintf(ftrace.fp,"ret [%s@0x%08lx]\n",funcpack.f[i].name,funcpack.f[i].addr);
				}
			}
			funcpack.curn=i;
			if(funcpack.watchdog>1000000){
				printf("%08lx:usr program locked at [%s@0x%08lx]\n",pc,funcpack.f[i].name,funcpack.f[i].addr);
				assert(0);
			}
			return;
		}
	}
}
