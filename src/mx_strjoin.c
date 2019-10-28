#include "libmx.h"


char *mx_strjoin(char const *s1, char const *s2) {
    char *res = NULL;
    if (s1 == NULL && s2 == NULL) {
        return res;
    }
    else if (s1 == NULL || s2 == NULL) {
        if (s1 == NULL) {
            res = mx_strdup(s2);
        }
        else {
            res = mx_strdup(s1);
        }
        return res;
    }
    else {
        char *ss1 = mx_strdup(s1);
        char *ss2 = mx_strdup(s2);
        res = mx_strcat(ss1, ss2);
        //free(ss1);
        //free(ss2);
    }
    return res;

}
