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

#include "sdb.h"

#define NR_WP 32


static WP wp_pool[NR_WP] = {};
static WP *head = NULL, *free_ = NULL;

void free_wp(WP *wp)
{
  WP *scan=head;
  if(wp==head){
    if(head->next==free_)head=NULL;
    else head=head->next;
  }
  else{
    while(scan->next!=wp)scan=scan->next;
    scan->next=(scan->next)->next;
  }
  if(free_==NULL)free_=wp;
  while(scan->next!=NULL)scan=scan->next;
  scan->next=wp;
  WP backup={};
  backup.NO=wp->NO;
  memset(wp,0,sizeof(WP));
  wp->NO=backup.NO;
}


WP* new_up(char* exprin)
{
  if(free_!=NULL)
  {
    WP *newwp=free_;
    bool new_success=false;
    if(head==NULL)head=free_;
    strcpy(newwp->expr,exprin);
    newwp->val=expr(exprin,&new_success);
    free_=free_->next;
    if(free_==NULL)printf("\033[31mwarning:wp_pool full\n\033[0m");
    if(new_success){
      show_wp();
      return newwp;
    }
    else {
      printf("new watchpoint failed\n");
      free_wp(newwp);
      show_wp();
    }
  }
  else 
  {
    printf("\033[31mwp_pool overflow\n\033[0m");
    assert(0);
  }
  return NULL;
}

void show_wp()
{
  if(head==NULL)printf("\nno watchpoint exists\n");
  else {
    WP *scan=head;
    /*while(scan!=NULL){*/
      /*if(scan==head)printf("(head)");*/
      /*if(scan==free_)printf("(free)");*/
      /*if(scan->next==NULL)printf("(end)");*/
      /*printf((scan->next==NULL?"%d":"%d->"),scan->NO);*/
      /*scan=scan->next;*/
    /*}*/
    /*printf("\n");*/
    scan=head;
    while(scan!=free_){
      printf("wp_%d:%s\n",scan->NO,scan->expr);
      printf(scan->HEX_OFF?"val:%ld\n":"val:0x%lx\n",scan->val);
      scan=scan->next;
    }
  }
}

WP* find_wpn(int n)
{
  if(head==NULL)printf("no watchpoint exists\n");
  else {
    WP *scan=head;
    while(scan!=free_){
      if(scan->NO==n){
        return scan;
      }
      else scan=scan->next;
    }
    printf("\033[31mno such watchpoint\n\033[0m");
    show_wp();
  }
  return NULL;
}

void free_wpn(int n)
{
    WP *scan=find_wpn(n);
    if(scan!=NULL){
        free_wp(scan);
      }
}

void toggle_hexshow(int n)
{
  WP *scan=find_wpn(n);
  if(scan!=NULL){
    scan->HEX_OFF=!scan->HEX_OFF;
  }
}

void toggle_alwaysshow(int n)
{
  WP *scan=find_wpn(n);
  if(scan!=NULL){
    scan->ALWAYS_SHOW_ON=!scan->ALWAYS_SHOW_ON;
  }
}

void show_wpn(int n)
{
  WP *scan=find_wpn(n);
  if(scan!=NULL){
    printf("wp_%d:%s\n",scan->NO,scan->expr);
    printf(scan->HEX_OFF?"val:%ld\n":"val:0x%lx\n",scan->val);
  }
}

void wp_update(int* state)
{
  if(head!=NULL)
  {
    WP *scan=head;
    bool success=false;
    while(scan!=free_)
    {
      word_t val=expr(scan->expr,&success);
      if(success==false){
        printf("wp_%d:%s update failde\n",scan->NO,scan->expr);
      }
      if(scan->val!=val)
      {
        printf("wp_%d:%s triggered\n",scan->NO,scan->expr);
        printf(scan->HEX_OFF?"val bef:%ld\n":"val bef:0x%lx\n",scan->val);
        printf(scan->HEX_OFF?"val now:%ld\n":"val now:0x%lx\n",val);
        *state=NEMU_STOP;
      }
      else if(scan->ALWAYS_SHOW_ON==true)
      {
        printf("wp_%d:%s always show\n",scan->NO,scan->expr);
        printf(scan->HEX_OFF?"val bef:%ld\n":"val bef:0x%lx\n",scan->val);
        printf(scan->HEX_OFF?"val now:%ld\n":"val now:0x%lx\n",val);
      }
      scan->val=val;
      scan=scan->next;
    }
  }
}

void init_wp_pool() {
  int i;
  for (i = 0; i < NR_WP; i ++) {
    wp_pool[i].NO = i;
    wp_pool[i].next = (i == NR_WP - 1 ? NULL : &wp_pool[i + 1]);
  }

  head = NULL;
  free_ = wp_pool;
}

/* TODO: Implement the functionality of watchpoint */

