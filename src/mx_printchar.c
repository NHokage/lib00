#include "libmx.h"



void mx_printchar(char c) {
    char *p;
    p = &c;
    write(1, p, 1);
}
