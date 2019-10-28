#include "libmx.h"

char *mx_file_to_str(const char *file) {
    int fread = open(file, O_RDONLY);
    if (fread < 0) { 
        return NULL;
    }
    char *str = (char *)malloc(sizeof(fread));
    char *buff = (char *)malloc(sizeof(char) * 2); 
    int bytes;
    while ((bytes = read(fread, buff, 1)) > 0) {
        buff[mx_strlen(buff)] = '\0';
        str = mx_strjoin(str,buff);
    }
    str = mx_strjoin(str, "\0");
    free(buff);
    close(fread);
    return str;   
}
