#include "trap.h"
int a[]={3,2,0,-2,-3};
unsigned int b[]={0,1,2,3,4};
int main()
{
  int i=0;
  while(i++<100)
  {

  for(int i=0;i<2;i++)
  {
    check(a[i]>=1);
  }
  for(int i=0;i<1;i++)
  {
    check(a[i]>1);
  }
  for(int i=2;i<5;i++)
  {
    check(a[i]<=0);
  }
  for(int i=3;i<5;i++)
  {
    check(a[i]<0);
  }
  if(a[4]>1)check(0);
  a[4]--;
  if(a[4]>=1)check(0);
  a[4]--;
  if(a[4]<1)check(1);
  a[4]--;
  if(a[4]<=1)check(1);
  a[4]--;
  if(a[4]>-1)check(0);
  a[4]--;
  if(a[4]>=-1)check(0);
  a[4]--;
  if(a[4]<-1)check(1);
  a[4]--;
  if(a[4]<=-1)check(1);
  a[4]--;
  if(a[0]>1)check(1);
  a[0]++;
  if(a[0]>=1)check(1);
  a[0]++;
  if(a[0]<1)check(0);
  a[0]++;
  if(a[0]<=1)check(0);
  a[0]++;
  if(a[0]>-1)check(1);
  a[0]++;
  if(a[0]>=-1)check(1);
  a[0]++;
  if(a[0]<-1)check(0);
  a[0]++;
  if(a[0]<=-1)check(0);
  a[0]++;
  if(b[4]>1)check(1);
  b[4]++;
  if(b[4]>=1)check(1);
  b[4]++;
  if(b[4]<1)check(0);
  b[4]++;
  if(b[4]<=1)check(0);
  b[4]++;
  if(b[4]<a[1])check(0);
  b[4]++;
  if(b[4]<=a[4])check(1);
  b[4]++;
  if(b[4]>a[1])check(1);
  b[4]++;
  if(b[4]>=a[4])check(0);
  b[4]++;
  if(b[4]>-1)check(0);
  if(b[4]>=-1)check(0);
  if(b[4]<-1)check(1);
  if(b[4]<=-1)check(1);
 a[4]=-3;
 a[3]=-2;
 a[1]=2;
 a[0]=3;
 b[4]=4;
 b[3]=3;
  check(a[4]/a[1]==-1);
  check(a[4]%a[1]==-1);
  check(a[0]/a[1]==1);
  check(a[0]%a[1]==1);
  check(a[4]/a[3]==1);
  check(a[4]%a[3]==-1);
  check(a[0]/a[3]==-1);
  check(a[0]%a[3]==1);
  check(b[4]/b[3]==1);
  check(b[4]%b[3]==1);
  }
  return 0;
}
