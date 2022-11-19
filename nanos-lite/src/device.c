#include <common.h>

#if defined(MULTIPROGRAM) && !defined(TIME_SHARING)
# define MULTIPROGRAM_YIELD() yield()
#else
# define MULTIPROGRAM_YIELD()
#endif

#define NAME(key) \
  [AM_KEY_##key] = #key,

static const char *keyname[256] __attribute__((used)) = {
  [AM_KEY_NONE] = "NONE",
  AM_KEYS(NAME)
};

size_t serial_write(const void *buf, size_t offset, size_t len) {
	for(int i=0;i<len;i++)putch(*((char*)buf+i));
	return len;
}

enum SDL_EventType {
  SDL_KEYDOWN,
  SDL_KEYUP,
  SDL_USEREVENT,
};
#define SDL_EVENTMASK(ev_type) (1u << (ev_type))

size_t events_read(void *buf, size_t offset, size_t len) {
  AM_INPUT_KEYBRD_T ev = io_read(AM_INPUT_KEYBRD);
	/*printf("Got  (kbd): %s (%d) %s\n", names[ev.keycode], ev.keycode, ev.keydown ? "DOWN" : "UP");*/
	if(ev.keycode==AM_KEY_NONE)return 0;
	/**((uint8_t*)buf)=ev.keydown?SDL_KEYDOWN:SDL_KEYUP;*/
	/**((uint8_t*)buf+1)=ev.keycode;*/
	sprintf(buf,"k%c %s\n",ev.keydown?'d':'u',keyname[ev.keycode],ev.keycode,ev.keydown ? "DOWN" : "UP");
	/*snprintf(buf,len,"k%c %s\n",ev.keydown?'d':'u',keyname[ev.keycode],ev.keycode,ev.keydown ? "DOWN" : "UP");*/
	/*printf("Got  (kbd): %s (%d) %s\n", keyname[ev.keycode], ev.keycode, ev.keydown ? "DOWN" : "UP");*/
	return 1;
	/*return snprintf(buf,len,"Got  (kbd): %s (%d) %s\n", keyname[ev.keycode], ev.keycode, ev.keydown ? "DOWN" : "UP");*/
  /*return 0;*/
}

static int w0,h0;
size_t dispinfo_read(void *buf, size_t offset, size_t len) {
	w0=io_read(AM_GPU_CONFIG).width;
	h0=io_read(AM_GPU_CONFIG).height;
	return snprintf(buf,len,"WIDTH:%d\nHEIGHT:%d\n",w0,h0);
}

size_t fb_write(const void *buf, size_t offset, size_t len) {
  /*io_write(AM_GPU_MEMCPY, offset, (uint32_t *)buf, len);*/
	int y=offset/4/w0,x=(offset/4)%w0,w=len/4;
	/*printf("%d,%d %d %d %d %x\n",x,y,w0,h0,w,buf);*/
	io_write(AM_GPU_FBDRAW, x,y,(uint32_t *)buf,w,1,true);
	return 0;
}

void init_device() {
  Log("Initializing devices...");
  ioe_init();
}
