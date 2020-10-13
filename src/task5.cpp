#include "task5.h"

void split(char ***result, int *N, char *buf, char ch)
{

    int len = strlen(buf),  count = 1;
    for (int i = 0; i < len; i++) if (buf[i] == ch) count++;
    *N = count;
    count = 0;
    (*result) = new char *[*N];
    for (int i = 0; i < *N; i++) {
        (*result)[i] = new char[len];
        (*result)[i][0] = '\0';
    }
    int c = 0;
    for (int i = 0; i <= len; i++) {
        if (i != len && buf[i] != ch) continue;
        int wlength = i - c;
        for (int j = 0; j < wlength; j++) (*result)[count][j] = buf[c++];
        (*result)[count++][wlength] = '\0';
        c = i + 1;
    }
}