#include <stdint.h>
#include <klib.h>
#include <assert.h>
#include <stdio.h>
//#include <limits.h>



#define N 32

uint8_t data[N];

void reset() {
  int i;
  for (i = 0; i < N; i ++) {
    data[i] = i + 1;
  }
}
// 检查[l,r)区间中的值是否依次为val, val + 1, val + 2...
void check_seq(int l, int r, int val) {
  int i;
  for (i = l; i < r; i ++) {
    assert(data[i] == val + i - l);
	  //printf("data[%d]=%d\n",i,data[i]);
  }
}

// 检查[l,r)区间中的值是否均为val
void check_eq(int l, int r, int val) {
 int i;
  for (i = l; i < r; i ++) {
    assert(data[i] == val);
	  //printf("data[%d]=%d\n",i,data[i]);
  }
}

void test_memset() {
  int l, r;
  for (l = 0; l < N; l ++) {
    for (r = l + 1; r <= N; r ++) {
      reset();
      uint8_t val = (l + r) / 2;
      memset(data + l, val, r - l);
      check_seq(0, l, 1);
      check_eq(l, r, val);
      check_seq(r, N, r + 1);
    }
  }
	printf("test_memset passed\n");
}

void test_memcpy() {
  int l, r;
  for (l = 0; l < N; l ++) {
    for (r = l + 1; r <= N; r ++) {
      reset();
      uint8_t val[N]={0};
			//printf("r=%d l=%d\n",r,l);
      memcpy(data + l, val+l, r - l);
      check_seq(0, l, 1);
      check_eq(l, r, val[0]);
      check_seq(r, N, r + 1);
    }
  }
	printf("test_memcpy passed\n");
}

#  define INT_MIN	(-INT_MAX - 1)
#  define INT_MAX	2147483647

/* Maximum value an `unsigned int' can hold.  (Minimum is 0.)  */
#  define UINT_MAX	4294967295U
void test_memcmp()
{
  int l, r;
  for (l = 0; l < N; l ++) {
    for (r = l + 1; r <= N; r ++) {
      reset();
			int ll;
			for (ll = 0; ll < N; ll ++) {
				int i=memcmp(data + l,data+ll , r - l);
			  if(ll==l)assert(i==0);
				else assert(i!=0);
			}
    }
  }
	printf("test_memcmp passed\n");
}
void test_strlen()
{
  int l, r;
  for (l = 0; l < N; l ++) {
    for (r = l + 1; r <= N; r ++) {
      reset();
			memset(data+l,0,r-l);
			for(int i=0;i<l;i++)
			{
			//printf("l=%d\n",strlen((char*)data+i));
				assert(strlen((char *)data+i)==l-i);
			}
    }
  }
	printf("test_strlen passed\n");
}
void test_sprintf()
{
	int limit[]={0,INT_MAX/17,INT_MAX,INT_MIN,INT_MIN+1,UINT_MAX,UINT_MAX/17};
	printf("%d\n",limit[0]);
	printf("%d\n",limit[1]);
	printf("%d\n",limit[2]);
	printf("%d\n",limit[3]);
	printf("%d\n",limit[4]);
	printf("%u\n",limit[5]);
	printf("%u\n",limit[6]);
}

int main()
{
  test_memset();
	test_memcpy();
	test_memcmp();
	test_strlen();
	test_sprintf();
	return 0;
}
