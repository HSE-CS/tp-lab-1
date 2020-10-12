#include <iostream>
#include <cstring>
#include "task4.h"

using namespace std;

char* sum(char* x, char* y) 
{
    int maxlen = max(strlen(x), strlen(y));
    int coutX = strlen(x);
    int coutY = strlen(y);
    char* buf = new char[maxlen + 1];
    char* t = new char[maxlen];

    int oflow = 0;

    if (coutX > coutY) 
    {
        for (int i = 0; i < coutX - coutY; ++i) 
        {
            t[i] = '0';
        }
        for (int j = 0; j < coutY; ++j) 
        {
            t[coutX - coutY + j] = y[j];
        }
        y = t;
    }
    if (coutY > coutX) 
    {
        for (int i = 0; i < coutY - coutX; ++i) 
        {
            t[i] = '0';
        }
        for (int j = 0; j < coutX; ++j) 
        {
            t[coutY - coutX + j] = x[j];
        }
        x = t;
    }

    for (int i = maxlen - 1; i > -1; --i) 
    {
        buf[i] = x[i] + y[i] + oflow - '0';
        oflow = 0;
        if (buf[i] > 57) 
        {
            buf[i] = buf[i] - 10;
            oflow++;

            if (i == 0 && oflow > 0) 
            {
                for (int i = maxlen; i > -1; --i) 
                {
                    buf[i] = buf[i - 1];
                }
                buf[0] = '1';
            }
        }
        if (i == 0 && oflow == 0) 
        {
            buf[maxlen] = '\0';
        }
    }
    delete[] t;
    return buf;
}