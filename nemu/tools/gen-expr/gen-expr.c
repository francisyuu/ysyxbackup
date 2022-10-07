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

#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <assert.h>
#include <string.h>

// this should be enough
static char buf[65536+65536] = {};
static char buf_u[65536] = {};
static char code_buf[65536 + 65536+128] = {}; // a little larger than `buf`
static char *code_format =
"#include <stdio.h>\n"
"#include <stdint.h>\n"
"int main() {\n "
"  unsigned result = %s;\n "
"  printf(\"%%u\", result);\n "
"  return 0;\n "
"}";

uint32_t choose(uint32_t n)
{
  return rand()%n;
}

uint32_t gen_rand_space()
{
  if(rand()%2==0){
    strcat(buf," ");
    strcat(buf_u," ");
    gen_rand_space();
  }
  return 0;
}

uint32_t gen(char* n)
{
  char struint[10];
  int len = strlen(buf);
  memcpy(struint,buf+len-10,10);
  if(strcmp(struint,"(uint32_t)")!=0)
  strcat(buf,n);
  else if(strcmp(n,"(uint32_t)")!=0)
  strcat(buf,n);
  if(strcmp(n,"(uint32_t)")!=0)
  strcat(buf_u,n);
  return 0;
}

uint32_t gen_num()
{
  gen_rand_space();
  char num[32];
  sprintf(num,"%u",rand());
  strcat(buf,num);
  strcat(buf_u,num);
  gen_rand_space();
  return 0;
}

uint32_t gen_rand_op()
{
  gen_rand_space();
  switch(choose(4))
  {
    case 0: strcat(buf,"+");
            strcat(buf_u,"+");
            break;
    case 1: strcat(buf,"-");
            strcat(buf_u,"-");
            break;
    case 2: strcat(buf,"*");
            strcat(buf_u,"*");
            break;
    case 3: strcat(buf,"/");
            strcat(buf_u,"/");
            break;
    default: strcat(buf,"+");
            strcat(buf_u,"+");
             break;
  }
  gen_rand_space();
  return 0;
}

static int gen_rand_expr() {
  if(strlen(buf)>120000||strlen(buf_u)>60000)
  {
  
    //printf("len1=%d,len2=%d\n");
    return 1;
    //memset(buf,0,sizeof(buf));
  }
  switch (choose(3)) {
    case 0: gen("(uint32_t)");gen_num(); break;
    case 1: gen("(uint32_t)");gen("("); gen_rand_expr(); gen(")"); break;
    default: gen_rand_expr(); gen_rand_op(); gen_rand_expr(); break;
  }
  if(strlen(buf)>120000||strlen(buf_u)>60000)
  {
    return 1;
  }
  return 0;
}

int main(int argc, char *argv[]) {
  int seed = time(0);
  srand(seed);
  int loop = 1;
  if (argc > 1) {
    sscanf(argv[1], "%d", &loop);
  }
  int i;
  int result;
  for (i = 0; i < loop; ) {
    if(gen_rand_expr()!=0){
      memset(buf,0,sizeof(buf));
      memset(buf_u,0,sizeof(buf_u));
      continue;
    }

    sprintf(code_buf, code_format, buf);

    FILE *fp = fopen("/tmp/.code.c", "w");
    assert(fp != NULL);
    fputs(code_buf, fp);
    fclose(fp);

    int ret = system("gcc -Og /tmp/.code.c -o /tmp/.expr");
    if (ret != 0) continue;

    fp = popen("/tmp/.expr", "r");
    assert(fp != NULL);

    int fscanfreturn;
    fscanfreturn=fscanf(fp, "%d", &result);
    pclose(fp);
    //printf("fscanfr=%d\n",fscanfreturn);
    if(fscanfreturn==1){
    printf("result=%u %s\n", result, buf_u);
    //printf("result=%u %s\n", result, buf);
    i++;
    }
    memset(buf,0,sizeof(buf));
    memset(buf_u,0,sizeof(buf_u));
  }
  return 0;
}
