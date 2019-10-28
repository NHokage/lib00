#include "libmx.h"


void *mx_memmem(const void *big, size_t big_len, const void *little, size_t little_len) {
  	unsigned char *big1 = (unsigned char *) big;
  	unsigned char *little1 = (unsigned char *)little;
  	while((big1 = mx_memchr(big1, little1[0], big_len))){
      	if(!mx_memcmp(big1, little1, little_len)) return big1;
    	big1 += little_len;
	}
  	return NULL;
}
