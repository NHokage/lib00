#include "libmx.h"

int mx_count_substr(const char *str, const char *sub){
    int res = 0;
    if(str == NULL || sub == NULL) {
        res--;
        return res;
    }
    char *str1 = mx_strstr(str, sub);
    int sub_len = mx_strlen(sub);
    if(!sub_len) {
        return res;
    }
    while (str1 != NULL) {
        str1 += sub_len;
        str1 = mx_strstr(str1, sub);
        res++;
    }
    return res;
}

