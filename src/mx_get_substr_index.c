#include "libmx.h"

int mx_get_substr_index(const char *str, const char *sub) {
    int res = 0;
    if(str == NULL || sub == NULL) {
    	res = -2;
    	return res;
    }
    for ( ; *str != '\0'; str++) {
        if (!mx_strncmp(str, sub, mx_strlen(sub))) {
            return res;
        }
        res++;
    }
    res = -1;
    return res;
}
