#include "libmx.h"

char *mx_strtrim(const char *str) {
    if(str == NULL) return NULL;
    int len = mx_strlen(str); 
    int spaces = 0;

    for (int j = 0; j < mx_strlen(str); j++) {
        if(mx_isspace(*str)) {
            spaces++;
            str++;
        }
        if(!mx_isspace(*str)) break;
    }

    for (int i = mx_strlen(str) - 1 ; i > 0; i--) {
        if(!mx_isspace(str[i]))break;
        spaces++;
    }
    char *res = mx_strnew(mx_strlen(str) - spaces - 1);
    mx_strncpy(res, str, len - spaces);
    if(res == NULL) {
        mx_strdel(&res);
        return NULL;
    }
    //free(res);
    return res;
}
