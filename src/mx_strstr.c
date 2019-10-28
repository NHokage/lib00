#include "libmx.h"

char *mx_strstr(const char *haystack, const char *needle){
    int len1 = mx_strlen(haystack);
    int len2 = mx_strlen(needle);
    if (len1 < len2) {
        return NULL;
    }
    if(!len1) {
        return (char *) haystack;
    }
    for ( ; (haystack = mx_strchr(haystack, needle[0])) != NULL; haystack++) {
        if (!mx_strncmp(haystack, needle, len2)) {
            return (char *) haystack;
        }
    }
    return NULL;
}


