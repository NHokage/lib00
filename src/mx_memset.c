#include "libmx.h"

void *mx_memset(void *b, int c, size_t len){
	/*if(sizeof(b) < len){
		mx_printerr(strerror(errno));
    	exit(0);
    }*/
  	char *s = b;
  	while(len > 0) {
      	*s++ = c;
      	len--;
    }
  	return (b);
}
