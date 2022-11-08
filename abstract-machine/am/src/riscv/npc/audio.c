#include <am.h>
#include <stdio.h>
#include "npc.h"

#define AUDIO_FREQ_ADDR      (AUDIO_ADDR + 0x00)
#define AUDIO_CHANNELS_ADDR  (AUDIO_ADDR + 0x04)
#define AUDIO_SAMPLES_ADDR   (AUDIO_ADDR + 0x08)
#define AUDIO_SBUF_SIZE_ADDR (AUDIO_ADDR + 0x0c)
#define AUDIO_INIT_ADDR      (AUDIO_ADDR + 0x10)
#define AUDIO_COUNT_ADDR     (AUDIO_ADDR + 0x14)

void __am_audio_init() {
}

static int tail;

static void audio_write(uint8_t *buf, int len) {
	int nwrite = 0;
	int size=inl(AUDIO_SBUF_SIZE_ADDR);
	while (nwrite < len) {
    while(size-inl(AUDIO_COUNT_ADDR)<len){
      /*printf("count=%d\n",inl(AUDIO_COUNT_ADDR));*/
    };
		for(int i=0;i<len;i++){
			//printf("i=%d tail=%x\n",i,AUDIO_SBUF_ADDR+tail+i);
			outb(AUDIO_SBUF_ADDR+tail,*(buf+i));
			tail++;
			if(tail==size)tail=0;
		}
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
}

void __am_audio_play(AM_AUDIO_PLAY_T *ctl) {
  int len = ctl->buf.end - ctl->buf.start;
  audio_write(ctl->buf.start, len);
}

void __am_audio_config(AM_AUDIO_CONFIG_T *cfg) {
	tail=0;
  cfg->present = true;
  cfg->bufsize = inl(AUDIO_SBUF_SIZE_ADDR);
}
