#include "task5.h"

void split(char ***result, int *N, char *buf, char ch)
{
    *N = 1;
    for (int i = 0; i < strlen(buf); i++) if (buf[i] == ch) (*N)++;
    (*result) = new char*[*N];
    for (int i = 0; i < *N; i++){
        (*result)[i] = new char[strlen(buf)];
        (*result)[i][0] = '\0';
    }
    int c = 0;
    for(int i = 0; i < strlen(buf); i++){
        if (buf[i] != ch) continue;
        int len = i - c;
        for (int j = 0; j < len; j++) (*result)[*N][j] = buf[c++];
        (*result)[*N++][len] = '\0';
        c = i + 1;
    }
}