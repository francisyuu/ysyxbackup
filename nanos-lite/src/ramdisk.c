#include <common.h>
#include <fs.h>

extern uint8_t ramdisk_start;
extern uint8_t ramdisk_end;
#define RAMDISK_SIZE ((&ramdisk_end) - (&ramdisk_start))

/* The kernel is monolithic, therefore we do not need to
 * translate the address `buf' from the user process to
 * a physical one, which is necessary for a microkernel.
 */

/* read `len' bytes starting from `offset' of ramdisk into `buf' */
size_t ramdisk_read(void *buf, size_t offset, size_t len) {
  assert(offset + len <= RAMDISK_SIZE);
	/*printf("buf=%x %d:%x len:%d \n",buf,offset,&ramdisk_start+offset,len);*/
  memcpy(buf, &ramdisk_start + offset, len);
	/*printf("%x %x %x %x",*(&ramdisk_start + offset),*(&ramdisk_start + offset+1),*(&ramdisk_start + offset+2),*(&ramdisk_start + offset+3));*/
	/*printf("!%x!",*((uint32_t*)buf));*/
	/*printf("%x",&ramdisk_start);*/
  return len;
}

/* write `len' bytes starting from `buf' into the `offset' of ramdisk */
size_t ramdisk_write(const void *buf, size_t offset, size_t len) {
  assert(offset + len <= RAMDISK_SIZE);
  memcpy(&ramdisk_start + offset, buf, len);
  return len;
}

void init_ramdisk() {
  Log("ramdisk info: start = %p, end = %p, size = %d bytes",
      &ramdisk_start, &ramdisk_end, RAMDISK_SIZE);
}

size_t get_ramdisk_size() {
  return RAMDISK_SIZE;
}
