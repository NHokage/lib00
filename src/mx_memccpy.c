#include "libmx.h"

void *mx_memccpy(void *restrict dst, const void *restrict src, int c, size_t n) {
  	unsigned char *dst1 = dst;
    unsigned char *src1 = (unsigned char *)src;
  	while(n && *src1 != (unsigned char)c) {
      	*dst1++ = *src1++; 
      	n--;
    }
  	return (dst);

}
