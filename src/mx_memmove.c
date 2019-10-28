#include "libmx.h"

void *mx_memmove(void *dst, const void *src, size_t len){
  	char *dst1 = (char *)dst;
  	char *src1 = (char *)src;
  	char *buff = (char *)malloc(len);
  	for(size_t i = 0; i < len; i++) {
  		buff[i] = src1[i];
  		dst1[i] = buff[i];
  	}
  	free(buff);
  	return dst;
}
