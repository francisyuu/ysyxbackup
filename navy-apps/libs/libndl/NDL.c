#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

static int evtdev = -1;
static int fbdev = -1;
static int screen_w = 0, screen_h = 0;
static int w_offset = 10, h_offset = 10;
static int w_max = 0,h_max = 0;

#include <sys/time.h>
uint32_t NDL_GetTicks() {
  struct timeval tv;
  gettimeofday(&tv,NULL);
  return tv.tv_sec*1000+tv.tv_usec/1000;
}

#include <sys/types.h>
#include <sys/stat.h>
#include <sys/fcntl.h>
int NDL_PollEvent(char *buf, int len) {
	
	int dp=open("/dev/events",0);
	return read(dp,buf,len);
	/*printf("f=%d\n",fp);*/
	/*return fread(buf,1,len,fp);*/
	/*fclose(fp);*/
	/*return 0;*/
}

void NDL_OpenCanvas(int *w, int *h) {
  if (getenv("NWM_APP")) {
    int fbctl = 4;
    fbdev = 5;
    screen_w = *w; screen_h = *h;
    char buf[64];
    int len = sprintf(buf, "%d %d", screen_w, screen_h);
    // let NWM resize the window and create the frame buffer
    write(fbctl, buf, len);
    while (1) {
      // 3 = evtdev
      int nread = read(3, buf, sizeof(buf) - 1);
      if (nread <= 0) continue;
      buf[nread] = '\0';
      if (strcmp(buf, "mmap ok") == 0) break;
    }
    close(fbctl);
  }
	/*int dp=open("/proc/dispinfo",0);*/
	/*char info[64];*/
	/*read(dp,info,64);*/
	/*char strw[10],strh[10];*/
	/*int i=0;*/
	/*for(;info[i]!=0;i++)*/
	/*{*/
		/*if(info[i]==':')*/
		/*{*/
			/*i+=1;*/
			/*int j=0;*/
			/*for(;info[i+j]!='\n';j++)strw[j]=info[i+j];*/
			/*i+=j;*/
			/*break;*/
		/*}*/
	/*}*/
	/*for(;info[i]!=0;i++)*/
	/*{*/
		/*if(info[i]==':')*/
		/*{*/
			/*i+=1;*/
			/*for(int j=0;info[i+j]!='\n';j++)strh[j]=info[i+j];*/
		/*}*/
		/*break;*/
	/*}*/
	
	/*w_max=atoi(strw);*/
	/*h_max=atoi(strh);*/
	/*printf("w=%s h=%s\n",strw,strh);*/
	/*printf("w=%d h=%d\n",w_max,h_max);*/
	w_max=400;
	h_max=300;
	printf("w=%d h=%d\n",w_max,h_max);
	if(*w==0&&*h==0)
	{
		*w=w_max;
		*h=h_max;
	}
	else
	{
		screen_w=*w;
		screen_h=*h;
	}
	if(screen_w>w_max)screen_w=w_max;
	if(screen_h>h_max)screen_h=h_max;
	w_offset=(w_max-screen_w)/2;
	h_offset=(h_max-screen_h)/2;
}

void NDL_DrawRect(uint32_t *pixels, int x, int y, int w, int h) {
	int dp=open("/dev/fb",0);
	printf("x=%d y=%d w=%d h=%d\n",x,y,w,h);
	for(int i=0;i<h;i++)
	{
		int offsetp=i*w;
		int offsets=(h_offset+y+i)*w_max+w_offset+x;
		lseek(dp,offsets*4,SEEK_SET);
		write(dp,pixels+offsetp,w);
	}
}

void NDL_OpenAudio(int freq, int channels, int samples) {
}

void NDL_CloseAudio() {
}

int NDL_PlayAudio(void *buf, int len) {
  return 0;
}

int NDL_QueryAudio() {
  return 0;
}

int NDL_Init(uint32_t flags) {
  if (getenv("NWM_APP")) {
    evtdev = 3;
  }
  return 0;
}

void NDL_Quit() {
}
