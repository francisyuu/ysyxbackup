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
#include <../src/monitor/sdb/sdb.h>

void init_monitor(int, char *[]);
void am_init_monitor();
void engine_start();
int is_exit_status_bad();

int main(int argc, char *argv[]) {
  /* Initialize the monitor. */
#ifdef CONFIG_TARGET_AM
  am_init_monitor();
#else
  init_monitor(argc, argv);
#endif


  /*bool a;*/
  /*FILE *fp;*/
  /*FILE *fp1;*/
  /*char str[65535];*/
  /*word_t realresult;*/
  /*word_t calresult;*/
  /*char strexpr[65535];*/
  /*int i=0;*/
  /*int rightnum=0;*/
  /*//fp=fopen("tools/gen-expr/build/input","r");*/
  /*fp=fopen("tools/gen-expr/input","r");*/
  /*fp1=fopen("tools/gen-expr/input_err","w");*/
  /*assert(fp!=NULL);*/
    /*while(fgets(str,65535,fp)!=NULL)*/
    /*{*/
      /*i++;*/
      /*//printf("str[%d]=%s\n",i-1,str);*/
      /*if(str[0]=='r')*/
      /*{*/
        /*memset(strexpr,0,sizeof(strexpr));*/
        /*sscanf(str,"result=%lu %[^\n]\n",&realresult,strexpr);*/
        /*calresult=expr(strexpr,&a);*/
        /*//printf("strexpr=%s\n",strexpr);*/
        /*//calresult=expr("1+1",&a);*/
        
        /*if(realresult==calresult){*/
          /*rightnum++;*/
        /*}*/
        /*else{*/
        /*printf("strexpr=%s\n",strexpr);*/
        /*printf("realresult=%lu\n",realresult);*/
        /*printf("calresult=%lu,success=%d\n\n",calresult,a);*/
        /*fputs(str,fp1);*/
        
        /*}*/
        /*memset(str,0,sizeof(str));*/
      /*}*/
    /*}*/
    /*uint32_t testval,testval2;*/
    /*testval=1-1;*/
    /*testval2=1+(0/testval);*/
    /*printf("testval=%u\n",testval);*/
    /*printf("testval2=%u\n",testval2);*/
    /*printf("rightnum:%d/%d\n",rightnum,i);*/
  /*fclose(fp);*/
  

  /* Start engine. */
  engine_start();

  return is_exit_status_bad();
}
