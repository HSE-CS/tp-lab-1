#include <iostream>
#include "task4.h"
#include <cstring>
#include <stdlib.h>
using namespace std;

char * sum(char *x, char *y)
{
    int size_x = strlen(x);
    int size_y = strlen(y);
    int length;


    if (size_x > size_y)
        length = size_x + 1;
    else
        length = size_y + 1;

    int a[size_x];
    memset(a, 0, size_x*sizeof(int));
    int count = 0;
    for(int i = size_x-1; i >= 0; i --)
    {
        a[i] = x[count] - '0';
        count++;
    }

    int b[length];
    memset(b, 0, length*sizeof(int));
    count = 0;
    for(int i = size_y-1; i >= 0; i --)
    {
        b[i] = y[count] - '0';
        count++;
    }

    for (int ix = 0; ix < length; ix++)
    {
        if (ix < size_x)
        {
            b[ix] += a[ix];
            b[ix + 1] += (b[ix] / 10);
            b[ix] %= 10;
        }
        else
            break;
    }

    if (b[length - 1] == 0)
        length--;

    char *res = new char[length];
    count = 0;

    for(int i = length-1; i >= 0; --i)
    {
        res[count] = (char) (b[i] + '0');
        count++;
    }
    res[length] = '\0';
    return res;
}