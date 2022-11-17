#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

static int evtdev = -1;
static int fbdev = -1;
static int screen_w = 0, screen_h = 0;
static int w_offset = 0, h_offset = 0;
static int w_max = 0,h_max = 0;
static int dp_event=0;
static int dp_vgainfo=0;
static int dp_vgafb=0;

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
	
	/*printf("f=%d\n",len);*/
	return read(dp_event,buf,len);
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
	char info[64];
	read(dp_vgainfo,info,64);
	char strw[10],strh[10];
	int i=0,j=0;
	printf("%s\n",info);
	while(info[i]!=':')i++;
	for(i=i+1;;i++)
	{
		if(info[i]==' ')continue;
		if(info[i]>=47&&info[i]<=57)
		{
		strw[j]=info[i];
		j++;
		}
		else break;
	}
	/*printf("%s\n",strw);*/
	j=0;
	while(info[i]!=':')i++;
	for(i=i+1;;i++)
	{
		if(info[i]==' ')continue;
		if(info[i]>=47&&info[i]<=57)
		{
		strh[j]=info[i];
		j++;
		}
		else break;
	}
	/*printf("%s\n",strh);*/
	w_max=atoi(strw);
	h_max=atoi(strh);
	if(*w==0&&*h==0)
	{
		*w=w_max;
		*h=h_max;
		screen_w=w_max;
		screen_h=h_max;
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
	printf("opensurface:w=%d h=%d sw=%d sh=%d offw=%d offh=%d\n",w_max,h_max,screen_w,screen_h,w_offset,h_offset);
}

void NDL_DrawRect(uint32_t *pixels, int x, int y, int w, int h) {
	if(w==0&&h==0)
	{
		w=screen_w;
		h=screen_h;
	}
	/*printf("x=%d y=%d w=%d h=%d\n",x,y,w,h);*/
	for(int i=0;i<h;i++)
	{
		int offsetp=i*w;
		int offsets=(h_offset+y+i)*w_max+w_offset+x;
		lseek(dp_vgafb,offsets*4,SEEK_SET);
		write(dp_vgafb,pixels+offsetp,w*4);
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
	dp_event=open("/dev/events",0);
	dp_vgainfo=open("/proc/dispinfo",0);
	dp_vgafb=open("/dev/fb",0);
	/*dp_vga=open("/dev/events",0);*/
  return 0;
}

void NDL_Quit() {
}
