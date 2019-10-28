#include "libmx.h"

char *mx_itoa(int number) {
    int len = 0;
    int tmp_nbr = number;
    while(tmp_nbr > 0) {
        tmp_nbr /= 10;
        len++;
    }
    char *str = mx_strnew(len);
    len = 0;
    while(number > 0){
        int c = number % 10;
        number /= 10;
        str[len] = c + 48;
        len++;
    }
    int i;
    for(i = 0;i < len / 2; i++){
        char tmp;
        tmp = str[i];
        str[i] = str[len - i - 1];
        str[len - i - 1] = tmp;
    }
    return str;
}
