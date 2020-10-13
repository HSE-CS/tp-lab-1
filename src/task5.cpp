#include "task5.h"
#include <cstring>

void split(char ***result, int *N, char *buf, char ch){

    int size = strlen(buf);
    int pos = 0;
    (*N) = 0;

    (*result) = new char*[size]();

    for (int i = 0; i < size; i++) {
        (*result)[i] = new char[size]();
    }

    for (int i = 0; i < strlen(buf); i++){
        if (buf[i] == ch) {
            (*result)[(*N)++][pos] = '\0';
            pos = 0;
        }
        else
            (*result)[(*N)][pos++] = buf[i];
    }

    (*N)++;

}
