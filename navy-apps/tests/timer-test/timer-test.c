#include <stdint.h>
#include <stdio.h>
#include <NDL.h>

uint32_t NDL_GetTicks();
int main() {
  int lastsec;
  while(1)
  {
		if(NDL_GetTicks()-lastsec>500)
		{
			printf("%ldmsec\n",lastsec);
			lastsec=NDL_GetTicks();
		}
  }
}
