#include <NDL.h>
#include <SDL.h>

int SDL_OpenAudio(SDL_AudioSpec *desired, SDL_AudioSpec *obtained) {
  return 0;
	printf("sdlopenaudio\n");
}

void SDL_CloseAudio() {
	printf("sdlcloseaudio\n");
}

void SDL_PauseAudio(int pause_on) {
	printf("sdlpauseaudio\n");
}

void SDL_MixAudio(uint8_t *dst, uint8_t *src, uint32_t len, int volume) {
	printf("sdlmixaudio\n");
}

SDL_AudioSpec *SDL_LoadWAV(const char *file, SDL_AudioSpec *spec, uint8_t **audio_buf, uint32_t *audio_len) {
	printf("sdlloadaudio\n");
  return NULL;
}

void SDL_FreeWAV(uint8_t *audio_buf) {
	printf("sdlfreewav\n");
}

void SDL_LockAudio() {
	printf("sdllockaudio\n");
}

void SDL_UnlockAudio() {
	printf("sdlunlockaudio\n");
}
