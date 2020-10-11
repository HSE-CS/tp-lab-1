#include <iostream>
#include <cstdlib>
#include <string>
#include <cstring>
#include <malloc.h>
#include <string.h>

char* sum(char* x, char* y) {
    int La = strlen(x);
    int Lb = strlen(y);
    int L = (La > Lb) ? La : Lb;
    L++;
    char* c = (char*)malloc(L);
    memset(c, ' ', L);
    c[L] = '\0';
    int z = 0;
    for (int i = 1; i <= L; i++) {
        int a1 = (i > La) ? 0 : x[La - i] - '0';
        int b1 = (i > Lb) ? 0 : y[Lb - i] - '0';
        int c1 = a1 + b1 + z;
        c[L - i] = '0' + c1 % 10;
        z = c1 / 10;
    }
    if (c[0] == '0' && c[1] != '0') {
        for (int i = 0; i < L - 1; i++)
            c[i] = c[i + 1];
        c[L - 1] = '\0';
    }
    return c;
}