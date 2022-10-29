#include <klib.h>
#include <klib-macros.h>
#include <stdint.h>

#if !defined(__ISA_NATIVE__) || defined(__NATIVE_USE_KLIB__)

size_t strlen(const char *s) {
  int i=0;
  while(*(s+i)!=0)
  {
    i++;
  }
	return i;
}

char *strcpy(char *dst, const char *src) {
  int i=0;
  while(*(src+i)!=0)
  {
    *(dst+i)=*(src+i);
    i++;
  }
  *(dst+i)=0;
  return dst;
}

char *strncpy(char *dst, const char *src, size_t n) {
  panic("Not implemented");
}

char *strcat(char *dst, const char *src) {
  int i=0;
  int n=0;
  while(*(dst+n)!=0)n++;
  while(*(src+i)!=0)
  {
    *(dst+n+i)=*(src+i);
    i++;
  }
  *(dst+n+i)=0;
  return dst;
}

int strcmp(const char *s1, const char *s2) {
  int i=0;
  while((*(s1+i)!=0)|(*(s2+i)!=0))
  {
    int diff=*(s1+i)-*(s2+i);
    if(diff!=0)return diff;
    i++;
  }
  return 0;
}

int strncmp(const char *s1, const char *s2, size_t n) {
  panic("Not implemented");
}

void *memset(void *s, int c, size_t n) {
  int i=0;
  while(i!=n)
  {
    *((unsigned char*)s+i)=(unsigned char)c;
    i++;
  }
  return s;
}

void *memmove(void *dst, const void *src, size_t n) {
  panic("Not implemented");
}

void *memcpy(void *out, const void *in, size_t n) {
  int i=0;
  while(i!=n)
  {
    *((unsigned char*)out+i)=*((unsigned char*)in+i);
    i++;
  }
  return out;
}

int memcmp(const void *s1, const void *s2, size_t n) {
  int i=0;
  while(i!=n)
  {
    int diff=*((unsigned char*)s1+i)-*((unsigned char*)s2+i);
    if(diff!=0)return diff;
    i++;
  }
  return 0;
}

#endif
