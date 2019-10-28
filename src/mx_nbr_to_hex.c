#include "libmx.h"

char *mx_nbr_to_hex(unsigned long nbr) {
    int tmp_nbr = nbr;
    int len = 0;
    while(tmp_nbr > 1) {
        tmp_nbr /= 16;
        len++;
    }
    char *string = mx_strnew(len);
    len = 0;
    int c;
    while(nbr) {
        c = nbr%16;
        nbr /= 16;
        if (c < 10) {
            string[len] = c + 48;
        }
        else {
            string[len] = c + 87;
        }
        len++;
    }
    int i;
    for(i = 0;i < len / 2; i++){
        char tmp;
        tmp = string[i];
        string[i] = string[len - i - 1];
        string[len - i - 1] = tmp;
    }

    return string;
}
