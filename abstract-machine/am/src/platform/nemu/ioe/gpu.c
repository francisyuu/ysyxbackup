#include <am.h>
#include <nemu.h>
#include <stdio.h>

#define SYNC_ADDR (VGACTL_ADDR + 4)

void __am_gpu_init() {
}

void __am_gpu_config(AM_GPU_CONFIG_T *cfg) {
	int W=inl(VGACTL_ADDR)>>16;
	int H=inl(VGACTL_ADDR)&0x0000ffff;
  int S=W*H*4;
		/*printf("gpu \n");*/
		/*printf("gpuconfig\n");*/
  *cfg = (AM_GPU_CONFIG_T) {
    .present = true, .has_accel = false,
    .width = W, .height = H,
    .vmemsz = S
  };
}

void __am_gpu_fbdraw(AM_GPU_FBDRAW_T *ctl) {
	int W=inl(VGACTL_ADDR)>>16;
	int x=ctl->x,y=ctl->y,w=ctl->w,h=ctl->h;
	uint32_t* p=(uint32_t*)ctl->pixels;
		/*printf("draw\n");*/
		/*printf("%d %d %d %d \n",x,y,w,h);*/
	for(int i=0;i<w*h;i++)
	{
		int addr=((y+i/w)*W+x+i%w)*4;
		//printf("%d %d %d %d %d\n",x,y,w,h,addr);
		//printf("%d %d \n",addr/4/W,(addr/4)%W);
		outl(FB_ADDR+addr,p[i]);
		//outl(FB_ADDR+i*4,0x00ff0000);
	}
  if (ctl->sync) {
		/*printf("sync\n");*/
    outl(SYNC_ADDR, 1);
  }
}

void __am_gpu_status(AM_GPU_STATUS_T *status) {
  status->ready = true;
}

void __am_gpu_memcpy(AM_GPU_MEMCPY_T *mem)
{
	for(int i=0;i<mem->size/4;i++)
	{
		outl(FB_ADDR+mem->dest+i*4,*((uint32_t*)mem->src+i));
	}
  outl(SYNC_ADDR, 1);
}
