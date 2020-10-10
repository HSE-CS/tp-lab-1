#include "task5.h"

void split(char ***result, int *N, char *buf, char ch){
    int len = 0, c1 = 0, c2 = 0;
    char **strs = nullptr;
    while (c1 < strlen(buf)){
        while (buf[c2] != ch && c2 < strlen(buf)) {
            c2++;
        }
        if (c1 != c2){
            char *s = new char[c2-c1+1];
            strncpy(s, &buf[c1], c2-c1);
            s[c2-c1] = '\0';
            len++;
            strs = (char**) realloc(strs, sizeof(char*)*len);
            strs[len-1] = s;
        }
        c2++;
        c1 = c2;
    }
    *N = len;
    *result = strs;
}
