#include "libmx.h"

void mx_str_reverse(char *s) {
    int n = 0;
    int len = mx_strlen(s)-1;
    while(s[n]) {
        if (n <= len / 2){
        mx_swap_char(&s[len-n], &s[n]);
        }
    n++;
    }
}
