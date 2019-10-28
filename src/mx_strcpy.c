#include "libmx.h"

char *mx_strcpy(char *dst, const char *src) {
	int i;
	int len = 0;
	while(src[len]){
		len++;
	}
    for(i = 0; src[i] != '\0' && i < len; i++) {
        dst[i] = src[i];
    }
    dst[i] = '\0';
    return dst;
}
