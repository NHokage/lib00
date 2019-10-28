#include "libmx.h"


void *mx_memrchr(const void *s, int c, size_t n) {
  	unsigned char *s1 = (unsigned char *)s + n;
  	while(n) {
      	if(*s1 == (unsigned char)c) return s1;
      	s1--; 
      	n--;
    }
  	return NULL;

}
