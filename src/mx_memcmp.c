#include "libmx.h"

int mx_memcmp(const void *s1, const void *s2, size_t n) {
    char *s1_1 = (char *)s1;
    char *s2_1 = (char *)s2;
  	for(size_t i = 0; i < n; i++) {
  		if(s1_1[i] != s2_1[i]) return s1_1[i] - s2_1[i];
  	}
  	return 0;
}
