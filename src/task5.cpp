#include "task5.h"

void split(char ***result, int *N, char *buf, char ch) {
    char ** r = new char* [10];
    for (int i = 0; i < 10; i++)
        r[i] = new char[10];
    int strnum = 0, index = 0;
    for (int i = 0; i < strlen(buf); i++) {
        if (buf[i] == ch) {
            r[strnum][index] = '\0';
            strnum++;
            index = 0;
            (*N)++;
        }
        else {
            r[strnum][index] = buf[i];
            index++;
        }
    }
    r[strnum][index] = '\0';
    (*N)++;
    *result = r;
}
