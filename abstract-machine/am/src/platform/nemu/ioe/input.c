#include <am.h>
#include <nemu.h>

#define KEYDOWN_MASK 0x8000

void __am_input_keybrd(AM_INPUT_KEYBRD_T *kbd) {
	uint16_t code=inw(KBD_ADDR);
	kbd->keydown = (code&KEYDOWN_MASK)!=0;
	/*kbd->keycode = AM_KEY_NONE;*/
	kbd->keycode = code&0x00ff;
}
