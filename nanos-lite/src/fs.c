#include <fs.h>

typedef size_t (*ReadFn) (void *buf, size_t offset, size_t len);
typedef size_t (*WriteFn) (const void *buf, size_t offset, size_t len);

typedef struct {
  char *name;
  size_t size;
  size_t disk_offset;
  ReadFn read;
  WriteFn write;
  size_t open_offset;
} Finfo;

enum {FD_STDIN, FD_STDOUT, FD_STDERR, FD_EVENT,FD_FB};

size_t invalid_read(void *buf, size_t offset, size_t len) {
  panic("should not reach here");
  return 0;
}

size_t invalid_write(const void *buf, size_t offset, size_t len) {
  panic("should not reach here");
  return 0;
}

/* This is the information about all files in disk. */
size_t serial_write(const void *buf, size_t offset, size_t len);
size_t events_read(void *buf, size_t offset, size_t len);
size_t dispinfo_read(void *buf, size_t offset, size_t len);
size_t fb_write(const void *buf, size_t offset, size_t len);
static Finfo file_table[] __attribute__((used)) = {
  [FD_STDIN]  = {"stdin", 0, 0, invalid_read, invalid_write},
  [FD_STDOUT] = {"stdout", 0, 0, invalid_read, serial_write},
  [FD_STDERR] = {"stderr", 0, 0, invalid_read, serial_write},
  [FD_EVENT] = {"/dev/events", 0, 0, events_read, invalid_write},
  {"/proc/dispinfo", 0, 0, dispinfo_read, invalid_write},
  {"/dev/fb", 0, 0, invalid_read, fb_write},
#include "files.h"
};

void init_fs() {
  // TODO: initialize the size of /dev/fb
	file_table[5].size=io_read(AM_GPU_CONFIG).vmemsz;
}

int fs_open(const char *pathname, int flags, int mode)
{
	for(int i=0;i<(sizeof(file_table)/sizeof(Finfo));i++)
	{
		/*printf("%d:%s %s\n",i,file_table[i].name,pathname);*/
		if(strcmp(file_table[i].name,pathname)==0)return i;
	}
	assert(0);
	return -1;
}
size_t fs_read(int fd, void *buf, size_t len)
{
	if(file_table[fd].read!=NULL)return file_table[fd].read(buf,0,len);
	int reallen=file_table[fd].open_offset+len>file_table[fd].size?file_table[fd].size-file_table[fd].open_offset:len;
	if(reallen<0)return 0;
	ramdisk_read(buf,file_table[fd].disk_offset+file_table[fd].open_offset,reallen);
	file_table[fd].open_offset+=reallen;
	/*printf("%d %d\n",file_table[fd].open_offset,reallen);*/
	return reallen;
}

size_t fs_write(int fd, const void *buf, size_t len)
{
	if(file_table[fd].write!=NULL)return file_table[fd].write(buf,file_table[fd].open_offset,len);
	int reallen=file_table[fd].open_offset+len>file_table[fd].size?file_table[fd].size-file_table[fd].open_offset:len;
	if(reallen<0)return -1;
	ramdisk_write(buf,file_table[fd].disk_offset+file_table[fd].open_offset,reallen);
	file_table[fd].open_offset+=reallen;
	/*printf("%d %d\n",file_table[fd].open_offset,reallen);*/
	return reallen;
}
size_t fs_lseek(int fd, size_t offset, int whence)
{
	int new;
	switch(whence)
	{
		case SEEK_SET:new=offset;break;
		case SEEK_CUR:new=offset+file_table[fd].open_offset;break;
		case SEEK_END:new=offset+file_table[fd].size;break;
		default:return -1;
	}
	/*printf("off=%d",new);*/
	/*if(new<=file_table[fd].size)*/
	{
		file_table[fd].open_offset=new;
		return new;
	}
	return -1;
}
int fs_close(int fd)
{
	file_table[fd].open_offset=0;
	return 0;
}

char* fs_name(int fd)
{
	if(fd<(sizeof(file_table)/sizeof(Finfo)))return file_table[fd].name;
	return "0";
}
