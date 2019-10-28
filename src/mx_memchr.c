#include "libmx.h"

void *mx_memchr(const void *s, int c, size_t n) {
  	unsigned char *s1 = (unsigned char *)s;
  	while(*s1 && n-- > 0) {
      	if(*s1 == (unsigned char)c) return s1;
      	s1++; 
    }
  	return NULL;
}
