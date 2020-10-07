#include "task4.h"
#include <cstring>
#include <algorithm>
#include <iostream>

char * sum(char *x, char *y)
{
    char * rez = new char[std::max(strlen(x), strlen(y)) +1];
    int * tmpRez = new int[std::max(strlen(x), strlen(y)) +1];
    int * tmpX = new int[strlen(x)];
    int * tmpY = new int[strlen(y)];
    for(unsigned i = 0; i<strlen(x); i++)
        tmpX[i] = x[strlen(x)-1-i] - '0';
    for(unsigned i = 0; i<strlen(y); i++)
        tmpY[i] = y[strlen(y)-1-i] - '0';
    unsigned i, ost = 0;
    for(i = 0; i<std::min(strlen(x), strlen(y)); i++)
    {
        tmpRez[i] = (ost + tmpX[i] + tmpY[i]) % 10;
        ost = (ost + tmpX[i] + tmpY[i]) / 10;
    }
    if(i < strlen(x))
        for(;i<strlen(x); i++)
        {
            tmpRez[i] = (ost + tmpX[i]) % 10;
            ost = (ost + tmpX[i]) / 10;
        }
    if(i < strlen(y))
        for(;i<strlen(y); i++)
        {
            tmpRez[i] = (ost + tmpY[i]) % 10;
            ost = (ost + tmpY[i]) / 10;
        }
    unsigned len;
    if(tmpRez[std::max(strlen(x), strlen(y))] == 0)
        len = std::max(strlen(x), strlen(y));
    else
        len = std::max(strlen(x), strlen(y)) + 1;
    for(unsigned i = 0; i<len; i++)
        rez[i] = tmpRez[len -1 -i] + '0';
    delete tmpRez;
    delete tmpX;
    delete tmpY;
    return rez;
}
