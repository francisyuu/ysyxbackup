#include <am.h>
#include <stdio.h>
#include "npc.h"

#define SYNC_ADDR (VGACTL_ADDR + 4)

void __am_gpu_init() {
}

void __am_gpu_config(AM_GPU_CONFIG_T *cfg) {
	int W=inl(VGACTL_ADDR)>>16;
	int H=inl(VGACTL_ADDR)&0x0000ffff;
  int S=W*H*4;
    /*printf("%d %d %d\n",W,H,S);*/
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
	for(int i=0;i<w*h;i++)
	{
		int addr=((y+i/w)*W+x+i%w)*4;
    //printf("%d %d %d %d %d\n",x,y,w,h,addr);
		//printf("%d %d \n",addr/4/W,(addr/4)%W);
		outl(FB_ADDR+addr,p[i]);
		//outl(FB_ADDR+i*4,0x00ff0000);
	}
  if (ctl->sync) {
    outl(SYNC_ADDR, 1);
  }
}

void __am_gpu_status(AM_GPU_STATUS_T *status) {
  status->ready = true;
}

#define AUDIO_FREQ_ADDR      (AUDIO_ADDR + 0x00)
#define AUDIO_CHANNELS_ADDR  (AUDIO_ADDR + 0x04)
#define AUDIO_SAMPLES_ADDR   (AUDIO_ADDR + 0x08)
#define AUDIO_SBUF_SIZE_ADDR (AUDIO_ADDR + 0x0c)
#define AUDIO_INIT_ADDR      (AUDIO_ADDR + 0x10)
#define AUDIO_COUNT_ADDR     (AUDIO_ADDR + 0x14)

//#include <fcntl.h>
//#include <unistd.h>
//#include <klib.h>
//#include <SDL2/SDL.h>

/*static int rfd = -1, wfd = -1;*/
/*static volatile int count = 0;*/

void __am_audio_init() {
  /*int fds[2];*/
  /*int ret = pipe2(fds, O_NONBLOCK);*/
  /*assert(ret == 0);*/
  /*rfd = fds[0];*/
  /*wfd = fds[1];*/
}

/*static void audio_play(void *userdata, uint8_t *stream, int len) {*/
	/*int nread = len;*/
	/*if (count < len) nread = count;*/
	/*int b = 0;*/
	/*while (b < nread) {*/
		/*int n = read(rfd, stream, nread);*/
		/*if (n > 0) b += n;*/
	/*}*/

	/*count -= nread;*/
	/*if (len > nread) {*/
		/*memset(stream + nread, 0, len - nread);*/
	/*}*/
/*}*/
/*#define AUDIO_SBUF_ADDR (MMIO_BASE   + 0x1200000)*/
static int head;

static void audio_write(uint8_t *buf, int len) {
	int nwrite = 0;
	int size=inl(AUDIO_SBUF_SIZE_ADDR);
	while (nwrite < len) {
		/*int n = write(wfd, buf, len);*/
    while(size-inl(AUDIO_COUNT_ADDR)<len){
      /*printf("count=%d\n",inl(AUDIO_COUNT_ADDR));*/
    };
		for(int i=0;i<len;i++){
			//printf("i=%d head=%x\n",i,AUDIO_SBUF_ADDR+head+i);
			outb(AUDIO_SBUF_ADDR+head,*(buf+i));
			head++;
			if(head==size)head=0;
		}
		/*if (n == -1) n = 0;*/
		outw(AUDIO_COUNT_ADDR,inl(AUDIO_COUNT_ADDR)+len);
		nwrite += len;
	}
}

void __am_audio_ctrl(AM_AUDIO_CTRL_T *ctrl) {
	outl(AUDIO_FREQ_ADDR,ctrl->freq);
	outl(AUDIO_CHANNELS_ADDR,ctrl->channels);
	outl(AUDIO_SAMPLES_ADDR,ctrl->samples);
	outl(AUDIO_COUNT_ADDR,0);
	outl(AUDIO_INIT_ADDR,1);
}

void __am_audio_status(AM_AUDIO_STATUS_T *stat) {
  stat->count = inl(AUDIO_COUNT_ADDR);
  //stat->count = inl(AUDIO_SBUF_SIZE_ADDR);
}

void __am_audio_play(AM_AUDIO_PLAY_T *ctl) {
  int len = ctl->buf.end - ctl->buf.start;
  audio_write(ctl->buf.start, len);
}

void __am_audio_config(AM_AUDIO_CONFIG_T *cfg) {
	head=0;
  cfg->present = true;
  cfg->bufsize = inl(AUDIO_SBUF_SIZE_ADDR);
}
