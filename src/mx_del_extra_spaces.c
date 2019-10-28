#include "libmx.h"

char *mx_del_extra_spaces(const char *str) {
    if(str == NULL) return NULL;
    char *res = mx_strtrim(str);
    char *final = mx_strnew(mx_strlen(res));
    int j = 0;
    for(int i = 0; i < mx_strlen(res); i++) {
        if(mx_isspace(res[i]) && mx_isspace(res[i + 1])) {

        }
        else {
            final[j] = res[i];
            j++;
        }
    }
    free(res);
    if(final == NULL) {
        mx_strdel(&final);
        return NULL;
    }
    //free(final);
    return final;
}
