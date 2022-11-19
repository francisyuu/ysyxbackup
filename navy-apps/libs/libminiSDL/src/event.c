#include <NDL.h>
#include <SDL.h>
#include <string.h>

#define keyname(k) #k,

static const char *keyname[] = {
  "NONE",
  _KEYS(keyname)
};
uint8_t keystate[SDLK_PAGEDOWN+1]={0};

#define buflen 16
int SDL_PushEvent(SDL_Event *ev) {
	printf("sdlpushevent\n");
  return 0;
}
void showevent(char* buf,int len)
{
	for(int i=0;i<len;i++)
	{
	printf(" %x",buf[i]);
	}
	printf("\n");
	printf("%s",buf);
}
void get_event(char *buf,SDL_Event *event)
{
	if(event==NULL)return;
	/*showevent(buf,buflen);*/
	if(buf[0]=='k')
	{
		event->key.type=(buf[1]=='d')?SDL_KEYDOWN:SDL_KEYUP;
		char name[10];
		memset(name,0,sizeof(name));
		for(int i=0;i<sizeof(name);i++)
		{
			if(buf[3+i]==0xa)break;
			name[i]=buf[3+i];
		}
		for(int i=0;i<=SDLK_PAGEDOWN;i++)
		{
			if(strcmp(name,keyname[i])==0)
			{
				event->key.keysym.sym=i;
				keystate[i]=!event->key.type;
				break;
			}
		}
	}
}

int SDL_PollEvent(SDL_Event *event) {
	uint8_t buf[buflen]={0};
  if(NDL_PollEvent(buf,buflen)==0)return 0;
	get_event(buf,event);
  return 1;
}

int SDL_WaitEvent(SDL_Event *event) {
	uint8_t buf[buflen]={0};
  while(NDL_PollEvent(buf,buflen)==0);
	get_event(buf,event);
  return 1;
}

int SDL_PeepEvents(SDL_Event *ev, int numevents, int action, uint32_t mask) {
	printf("sdl");printf("peepevents\n");
  return 0;
}

uint8_t* SDL_GetKeyState(int *numkeys) {
	if(numkeys==NULL)return keystate;
	else 
	printf("sdl");printf("getkeystate\n");
  return NULL;
}
