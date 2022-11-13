#include <proc.h>
#include <elf.h>

#ifdef __LP64__
# define Elf_Ehdr Elf64_Ehdr
# define Elf_Phdr Elf64_Phdr
#else
# define Elf_Ehdr Elf32_Ehdr
# define Elf_Phdr Elf32_Phdr
#endif

#if defined(__ISA_AM_NATIVE__)
# define EXPECT_TYPE EM_X86_64
#elif defined(__ISA_RISCV64__)
# define EXPECT_TYPE EM_RISCV
#else
# define EXPECT_TYPE -1
#endif

size_t ramdisk_read(void *buf, size_t offset, size_t len);
extern uint8_t ramdisk_start;
extern uint8_t ramdisk_end;

static uintptr_t loader(PCB *pcb, const char *filename) {
  /*TODO();*/
  Elf64_Ehdr elf_header;
	ramdisk_read(&elf_header,0,sizeof(elf_header));
	/*printf("%x\n",*(uint32_t*)(elf_header.e_ident));*/
	assert(*(uint32_t*)(elf_header.e_ident)==0x464c457f);
	/*printf("%d\n",EXPECT_TYPE);*/
	assert(elf_header.e_machine==EXPECT_TYPE);
	/*assert(success!=0);*/
  Elf64_Phdr *elf_phdr=(Elf64_Phdr*)malloc(sizeof(Elf64_Phdr)*elf_header.e_phnum);
	ramdisk_read(elf_phdr,elf_header.e_phoff,sizeof(Elf64_Phdr)*elf_header.e_phnum);
  for(int phi=0;phi<elf_header.e_phnum;phi++)
  {
      if(elf_phdr[phi].p_type==PT_LOAD)
			{
			/*printf("i=%d %x\n",phi,elf_phdr[phi].p_vaddr);*/
				ramdisk_read((uint8_t *)elf_phdr[phi].p_vaddr,elf_phdr[phi].p_offset,elf_phdr[phi].p_filesz);
				memset((uint8_t *)(elf_phdr[phi].p_vaddr+elf_phdr[phi].p_filesz),0,elf_phdr[phi].p_memsz-elf_phdr[phi].p_filesz);
			}
  }
  return elf_header.e_entry;
}

void naive_uload(PCB *pcb, const char *filename) {
  uintptr_t entry = loader(pcb, filename);
  Log("Jump to entry = %p", entry);
  ((void(*)())entry) ();
}

