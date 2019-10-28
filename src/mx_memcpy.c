#include "libmx.h"

void *mx_memcpy(void *restrict dst, const void *restrict src, size_t n){
  	char *dst1 = dst;
    char *src1 = (char *)src;
  	while(n) {
      	*dst1++ = *src1++; 
      	n--;
    }
  	return (dst);

}
