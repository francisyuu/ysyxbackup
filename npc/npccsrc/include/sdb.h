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

#ifndef __SDB_H__
#define __SDB_H__

#define word_t uint64_t
#define sword_t uint64_t
#define vaddr_t uint64_t
#define paddr_t uint64_t
#include <common.h>

#define WP_EXPR_LEN_MAX 1024

typedef struct watchpoint {
  int NO;
  bool HEX_OFF;
  bool ALWAYS_SHOW_ON;
  char expr[WP_EXPR_LEN_MAX];
  word_t val;
  struct watchpoint *next;

  /* TODO: Add more members if necessary */

} WP;

word_t expr(char *e, bool *success);
WP* new_up(char* expr);
void free_wpn(int n);
void toggle_hexshow(int n);
void toggle_alwaysshow(int n);
void show_wp();
void show_wpn(int n);
void wp_update(int* state);
void sdb_mainloop();


#endif
