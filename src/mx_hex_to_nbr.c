#include "libmx.h"

static bool mx_isdigit(int c);
static bool mx_isalpha(int c);
static bool mx_islower(int c);
static bool mx_isupper(int c);
static unsigned long mx_pow_rec(int n, int pow);

unsigned long mx_hex_to_nbr(const char *hex){
	int len = 0;
    while (hex[len]) {
    	len++;
    }
    unsigned long res = 0;
    int i = 0;
    while(hex[i]) {
    	if (mx_isdigit(hex[i])) {
            res += (hex[i] - 48) * mx_pow_rec(16,len - i - 1);
        }
        else if (mx_isalpha(hex[i])){
             if (mx_islower(hex[i])) {
                 res += (hex[i] - 87) * mx_pow_rec(16,len - i - 1);
             }
             else if (mx_isupper(hex[i])) {
                 res += (hex[i] - 55) * mx_pow_rec(16,len - i - 1);
             }
        }
    	i++;
    }
    return res;
}

static unsigned long mx_pow_rec(int n, int pow) {
    unsigned long res = 0;
    if (pow  >= 0) {
        if(pow == 0) {
            return 1;;
        }
        res = n;
        res *= mx_pow_rec(n, pow - 1);
    }
    return res;
}

static bool mx_isdigit(int c) {
    int n = 0;
    if (c >=48 && c <=57) {
        n++;
        return n;
    }
    else {
        return n;
    }
}

static bool mx_isalpha(int c) {
    int n = 0;
    if ((c >=65 && c <=90) || (c >=97 && c <=122)) {
        n++;
        return n;
    }
    else {
        return n;
    }
}

static bool mx_islower(int c) {
    int n = 0;
    if (c >=97 && c <=122) {
        n++;
        return n;
    }
    else {
        return n;
    }
}

static bool mx_isupper(int c) {
    int n = 0;
    if (c >=65 && c <=90) {
        n++;
        return n;
    }
    else {
        return n;
    }
}

