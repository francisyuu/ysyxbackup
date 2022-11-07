/***************************************************************************************
* Copyright (c) 2014-2022 Zihao Yu, Nanjing University
*
* NEMU is licensed under Mulan PSL v2.
* You can use this software according to the terms and conditions of the Mulan PSL v2.
* You may obtain a copy of Mulan PSL v2 at:
*          http://license.coscl.org.cn/MulanPSL2
*
* THIS SOFTWARE IS PROVIDED ON AN "AS IS" BASIS, WITHOUT WARRANTIES OF ANY KIND,
* EITHER EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO NON-INFRINGEMENT,
* MERCHANTABILITY OR FIT FOR A PARTICULAR PURPOSE.
*
* See the Mulan PSL v2 for more details.
***************************************************************************************/

#include <common.h>
#include <SDL2/SDL.h>

enum {
  reg_freq,
  reg_channels,
  reg_samples,
  reg_sbuf_size,
  reg_init,
  reg_count,
  nr_reg
};
SDL_AudioSpec s={};

static uint8_t *sbuf = NULL;
static uint32_t *audio_base = NULL;
static int head;

void AudioCallback(void* userdata, uint8_t* stream,int len)
{
	int nread = len;
	memset(stream, 0, len);
	/*printf("%d %d %d %d %d\n",audio_base[0],audio_base[1],audio_base[2],audio_base[3],audio_base[5]);*/
	if (audio_base[reg_count] < len) nread = audio_base[reg_count];
	if (nread==0)return;
	int over=head+nread-CONFIG_SB_SIZE;
	if(over>0)
	{
		memcpy(stream,sbuf+head,nread-over);
		memcpy(stream+nread-over,sbuf,over);
	}
	else memcpy(stream,sbuf+head,nread);
	head+=nread;
			//printf("head=%d\n",head);
	if(head>=CONFIG_SB_SIZE)head-=CONFIG_SB_SIZE;
	/*int b = 0;*/
	/*while (b < nread) {*/
		/*int n = read(rfd, stream, nread);*/
		/*if (n > 0) b += n;*/
	/*}*/

	audio_base[reg_count] -= nread;
	if (len > nread) {
		memset(stream + nread, 0, len - nread);
	}
}
static void audio_io_handler(uint32_t offset, int len, bool is_write) {
	/*printf("%d %d %d %d %d\n",audio_base[0],audio_base[1],audio_base[2],audio_base[3],audio_base[5]);*/
	if(audio_base[reg_init]==1)
	{
	//printf("init%x\n",offset);
		audio_base[reg_init]=0;
		s.freq=audio_base[reg_freq];
		s.channels=audio_base[reg_channels];
		s.samples=audio_base[reg_samples];
		s.size=audio_base[reg_sbuf_size];
		//s.count=audio_base[5];
		s.format=AUDIO_S16SYS;
		s.userdata=NULL;
		s.callback=AudioCallback;
		SDL_InitSubSystem(SDL_INIT_AUDIO);
		SDL_OpenAudio(&s,NULL);
		SDL_PauseAudio(0);
	}
}

void init_audio() {
  uint32_t space_size = sizeof(uint32_t) * nr_reg;
  audio_base = (uint32_t *)new_space(space_size);
  add_mmio_map("audio", AUDIO_ADDR, audio_base, space_size, audio_io_handler);
  sbuf = (uint8_t *)new_space(CONFIG_SB_SIZE);
  add_mmio_map("audio-sbuf", AUDIO_SBUF_ADDR, sbuf, CONFIG_SB_SIZE, NULL);
	audio_base[reg_sbuf_size]=CONFIG_SB_SIZE;
}
