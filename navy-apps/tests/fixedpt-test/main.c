#include <stdio.h>
#include <fixedptc.h>

int main() {
  fixedpt a,b,c,d,e,f,g;
  int r;
  a=fixedpt_rconst(55.2);
  b=fixedpt_fromint(1.2);
  r=fixedpt_toint(fixedpt_muli(a,100));
  r=fixedpt_toint(fixedpt_divi(a,1));
  printf("%d %d %d \n",a,b,r);
	r=fixedpt_toint(fixedpt_abs(fixedpt_rconst(1.5)));
	printf("1 %d\n",r);
	r=fixedpt_toint(fixedpt_abs(fixedpt_rconst(-1.5)));
	printf("1 %d\n",r);
	r=fixedpt_toint(fixedpt_abs(fixedpt_rconst(1)));
	printf("1 %d\n",r);
	r=fixedpt_toint(fixedpt_abs(fixedpt_rconst(-1)));
	printf("1 %d\n",r);
	r=fixedpt_toint(fixedpt_floor(fixedpt_rconst(1.5)));
	printf("1 %d\n",r);
	r=fixedpt_toint(fixedpt_floor(fixedpt_rconst(-1.5)));
	printf("-2 %d\n",r);
	r=fixedpt_toint(fixedpt_floor(fixedpt_rconst(1)));
	printf("1 %d\n",r);
	r=fixedpt_toint(fixedpt_floor(fixedpt_rconst(-1)));
	printf("-1 %d\n",r);
	r=fixedpt_toint(fixedpt_ceil(fixedpt_rconst(1.5)));
	printf("2 %d\n",r);
	r=fixedpt_toint(fixedpt_ceil(fixedpt_rconst(-1.5)));
	printf("-1 %d\n",r);
	r=fixedpt_toint(fixedpt_ceil(fixedpt_rconst(1)));
	printf("1 %d\n",r);
	r=fixedpt_toint(fixedpt_ceil(fixedpt_rconst(-1)));
	printf("-1 %d\n",r);

  return 0;
}
