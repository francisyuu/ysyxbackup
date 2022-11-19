#include <NDL.h>
#include <sdl-timer.h>
#include <stdio.h>

SDL_TimerID SDL_AddTimer(uint32_t interval, SDL_NewTimerCallback callback, void *param) {
	printf("sdl");printf("addtimer\n");

  return NULL;
}

int SDL_RemoveTimer(SDL_TimerID id) {
	printf("sdl");printf("rmtimer\n");
  return 1;
}

uint32_t SDL_GetTicks() {
 return NDL_GetTicks()&0x7fffffff;
}

void SDL_Delay(uint32_t ms) {
	uint32_t t=NDL_GetTicks();
	while(t==NDL_GetTicks());
	return;
	/*printf("sdl");printf("delay\n");*/
}
