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

#include <isa.h>

/* We use the POSIX regex functions to process regular expressions.
 * Type 'man regex' for more information about POSIX regex functions.
 */
#include <regex.h>
#include <memory/vaddr.h>
#define OP_LEVELMIN 3
#define OP_LEVELMAX 7

//#define SHOW_MATCH
//#define SHOW_VAL
//#define SHOW_OP

enum {
TK_NOTYPE,TK_NUMBER,TK_HEX,TK_REG,TK_LEFTB,TK_RIGHTB,TK_MULT,TK_DIV,TK_MINUS,TK_PLUS,TK_EQ,TK_NEQ,TK_AND,TK_OR,

  /* TODO: Add more token types */

};

static struct rule {
  const char *regex;
int token_type;
uint8_t level;
} rules[] = {

/* TODO: Add more rules.
 * Pay attention to the precedence level of different rules.
 */

{" +", TK_NOTYPE,0},    // spaces
{"0x[0-9a-f]+", TK_HEX,1},    // spaces
{"[0-9]+", TK_NUMBER,1},    // spaces
{"\\$[$a-z0-9]{2,3}", TK_REG,1},    // spaces
{"\\(", TK_LEFTB,2},         // plus
{"\\)", TK_RIGHTB,2},         // plus
{"\\*", TK_MULT,4},         // multiply
{"\\/", TK_DIV,4},         // divide
{"\\+", TK_PLUS,5},         // plus
{"-", TK_MINUS,5},         // minus
{"==", TK_EQ,6},        // equal
{"!=", TK_NEQ,6},        // equal
{"&&", TK_AND,7},        // equal
{"\\|\\|", TK_OR,7},        // equal
};

#define NR_REGEX ARRLEN(rules)

static regex_t re[NR_REGEX] = {};

/* Rules are used for many times.
* Therefore we compile them only once before any usage.
*/
void init_regex() {
  int i;
  char error_msg[128];
  int ret;

  for (i = 0; i < NR_REGEX; i ++) {
    ret = regcomp(&re[i], rules[i].regex, REG_EXTENDED);
    if (ret != 0) {
      regerror(ret, &re[i], error_msg, 128);
      panic("regex compilation failed: %s\n%s", error_msg, rules[i].regex);
    }
  }
}

typedef struct token {
  int type;
  char str[32];
  uint8_t level;
} Token;

static Token tokens[65535] __attribute__((used)) = {};
static int nr_token __attribute__((used))  = 0;

static bool make_token(char *e) {
  int position = 0;
  int i;
  regmatch_t pmatch;

  nr_token = 0;

  //printf("e=%s\n",e);
  while (e[position] != '\0') {
    /* Try all rules one by one. */
    for (i = 0; i < NR_REGEX; i ++) {
      if (regexec(&re[i], e + position, 1, &pmatch, 0) == 0 && pmatch.rm_so == 0) {
        char *substr_start = e + position;
        int substr_len = pmatch.rm_eo;

#ifdef SHOW_MATCH
      Log("match rules[%d] = \"%s\" at position %d with len %d: %.*s", i, rules[i].regex, position, substr_len, substr_len, substr_start);
#endif

        position += substr_len;
        //printf("token=%d\n",nr_token);

        /* TODO: Now a new token is recognized with rules[i]. Add codes
         * to record the token in the array `tokens'. For certain types
         * of tokens, some extra actions should be performed.
         */
        assert(nr_token<=65535);
        switch (rules[i].token_type) {
          case TK_NOTYPE:
            break;
          case TK_NUMBER:
          case TK_REG:
          case TK_HEX:
          case TK_LEFTB:
          case TK_RIGHTB:
          case TK_EQ:
          case TK_MULT:
          case TK_DIV:
          case TK_PLUS:
          case TK_MINUS:
            {
            tokens[nr_token].type=rules[i].token_type;
            tokens[nr_token].level=rules[i].level;
            if(substr_len<=32){
              memset(tokens[nr_token].str,0,sizeof(tokens[nr_token].str));
              memcpy(tokens[nr_token].str,substr_start,substr_len);
              //printf("type=%d,substr=%s,level=%d\n",tokens[nr_token].type,tokens[nr_token].str,rules[i].level);
            }
            else
            {
              printf("\033[31merror:substr too long, save substr failed\n\033[0m");
              assert(0);
            }
            nr_token+=1;
            break;
            }
          default: 
            printf("\033[31merror:no such case\n\033[0m");
            TODO();
        }
        break;
      }
    }

    if (i == NR_REGEX) {
      printf("\033[31mno match at position %d\n%s\n%*.s^\n\033[0m", position, e, position, "");
      return false;
    }
  }

  return true;
}
bool check_parentheses(int p,int q)
{
  if(tokens[p].type==TK_LEFTB&&tokens[q].type==TK_RIGHTB)
  {
    int i=1,j=0;
    for(int n=p+1;n<=q;n++)
    {
      if(tokens[n].type==TK_LEFTB)i++;
      else if(tokens[n].type==TK_RIGHTB)
      {
        i--;  
        if(i==0)j++;
      }
    }
    if(i==0&&j==1)return true;
    else return false;
  }
  else return false;
}

word_t eval(int p,int q,bool *success)
{
  //printf("p=%d,q=%d\n",p,q);
  if (p > q) {
        /* Bad expression */
    printf("\033[31merror:bad expression1\n\033[0m");
  }
  else if (p == q) {
    word_t val=0;
    switch(tokens[p].type){
      case TK_NUMBER:
        sscanf(tokens[p].str,"%lu",&val);
        return val;
        break;
      case TK_REG:
        char regstr[32];
        sscanf(tokens[p].str,"$%s",regstr);
        val=isa_reg_str2val(regstr,success);
        if(*success)return val;
        else printf("\033[31merror:wrong reg name\n\033[0m");
        break;
      case TK_HEX:
        sscanf(tokens[p].str,"0x%lx",&val);
        return val;
        break;
      default:
        printf("\033[31merror:no operate number\n\033[0m");
        break;
    }
  }
  else if (check_parentheses(p, q) == true) {
        /* The expression is surrounded by a matched pair of parentheses.
         *      * If that is the case, just throw away the parentheses.
         *           */
    //printf("checkparentheses true\n");
        return eval(p + 1, q - 1,success);
  }
  else {
    int op=p;
    //find op
    for(int n=p;n<=q;n++)
    {
      //printf("p=%d,q=%d,n=%d\n",p,q,n);
      if(tokens[n].type==TK_RIGHTB)
      {
        printf("\033[31merror:parentheses matching failed:no '('\n\033[0m");
      }
      else if(tokens[n].level>=OP_LEVELMIN&&tokens[n].level<=OP_LEVELMAX)
      {
        //printf("typen=%d,typeop=%d\n",tokens[n].type,tokens[op].type);
        if(tokens[n].level>=tokens[op].level)op=n;
      }
      else if(tokens[n].type==TK_LEFTB){
        int lastn=n;
        while(!check_parentheses(lastn,n)){
          n++;
          if(n>q)break;
        }
      }
      if(n>q)
      {
        printf("\033[31merror:parentheses matching failed:no ')'\n\033[0m");
      }
    }
#ifdef SHOW_OP
      printf("op=%s n=%d\n",tokens[op].str,op);
#endif
    if(tokens[op].level>=OP_LEVELMIN&&tokens[op].level<=OP_LEVELMAX)
    {
    }
    else{
      printf("\033[31merror:no operator\n\033[0m");
    } 
        /*op = //the position of 主运算符 in the token expression;*/
    if(op==p)
    {
      word_t val = eval(op + 1, q,success);
      switch(tokens[op].type){
        case TK_PLUS:return val;
        case TK_MINUS:return -val;
        case TK_MULT:
        sscanf(tokens[op].str,"%lu",&val);
        val=vaddr_read(val,8);
        return val;
        default:{
                  printf("\033[31merror:bad expression2\n\033[0m");
                }
        }
    }
    else
    {
      word_t val1 = eval(p, op - 1,success);
      word_t val2 = eval(op + 1, q,success);
#ifdef SHOW_VAL
      printf("val1=%lu,op=%s val2=%lu\n",val1,tokens[op].str,val2);
#endif
      switch(tokens[op].type){
        case TK_EQ:
          if(val1==val2)return 1;
          else return 0;
          break;
        case TK_MULT:return (val1*val2);
          break;
        case TK_DIV:
          if(val2!=0)
            return (val1/val2);
          else{
            //assert(val2!=0);
            printf("val1=%lu,op=%s val2=%lu\n",val1,tokens[op].str,val2);
            printf("\033[31merror:divzero\n\033[0m");
          } 
          break;
        case TK_PLUS:return (val1+val2);
          break;
        case TK_MINUS:return (val1-val2);
          break;
        default:
          printf("\033[31merror:bad expression3\n\033[0m");
          break;
      }
    }
  }
  //printf("\033[31merror shown upside\n\033[0m");
  *success=false;
  return false;
}
word_t expr(char *e, bool *success) {
  if (!make_token(e)) {
    *success = false;
    return 0;
  }
  *success = true;

  /* TODO: Insert codes to evaluate the expression. */
  //TODO();

  return eval(0,nr_token-1,success);
}
