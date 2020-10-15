#include <iostream>
#include <cstring>
#include <algorithm>
#include "task4.h"

using namespace std;

char* reversit(char *a, int maxsize)
{
    int s1, s2, s3;
    char *c = (char*)calloc(maxsize + 2, sizeof(char));
    s1 = strlen(a);
    s3 = s1;
    for (s2 = 0; s2 < s1; s2++, s3--)
        c[s2] = a[s3 - 1];
    return c;
}

char* sum(char* x, char* y) {
    int size_text_a = strlen(x);
    int size_text_b = strlen(y);
    int maxsize = max(strlen(x), strlen(y));
    int f1 = 0;
    int f2 = 0;
    int result = 0;
    int buf = 0;
    x = reversit(x, maxsize);
    y = reversit(y, maxsize);
    char * z = 0;
    int length = 0;
    if (size_text_a < size_text_b)
        length = size_text_b + 1;
    else
        length = size_text_a + 1;
    
    int ix = 0;
    for (ix = 0; ix < maxsize; ix++)
    {
        if (y[ix]) {
            f1 = y[ix] - 48;
        }
        else {
            f1 = y[ix];
        }
        if (x[ix]) {
            f2 = x[ix] - 48;
        }
        //
        else {
            f2 = x[ix];
        }
        //
        result = (f1 + f2 + buf) % 10;
        buf = (f1 + f2 + buf) / 10;
        y[ix] = (char)result + 48;
    }
    --ix;
    if (buf == 1) {
        y[ix+1] = '1';
    }
    else
        ix--;
    z = reversit(y,maxsize);
    return z;
}
