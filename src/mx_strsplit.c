#include "libmx.h"

char **mx_strsplit(char const *s, char c){

    int count = mx_count_words(s, c);

    char **arr = (char **)malloc(count * sizeof(char *));

    int word = 0;
    int countchars = 0;
    int i = 0;
    int j = 0;
    while (s[i]) {
        while (s[i] != c && s[i]) {
            countchars++;
            word = 1;
            i++;
        }
        if (word) {
            arr[j] = mx_strnew(countchars);
            mx_strncpy(arr[j], s + i - countchars, countchars);
            word = 0;
            countchars = 0;
            j++;
        }
        i++;
   }
   arr[j] = NULL;
   return arr;
}
