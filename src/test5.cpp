//
// Created by islam on 07.10.2020.
//

#include "task5.h"
#include <iostream>
#include <cstring>
using namespace std;

void split(char ***result, int *N, char *buf, char ch)
{
    int del = 0;
    for(int i = 0; i < strlen(buf); i++)
    {
        if(buf[i] == ch)
            del++;
    }

    char **res = new char* [del + 1];
    for(int i=0; i < del + 1; i++)
        res[i] = new char[strlen(buf)];

    int i = 0;
    int t = 0;
    int f1 = 1;
    while(i < strlen(buf))
    {
        while(buf[i] !=ch && i < strlen(buf))
        {
            if(t == 0)
                res[t][i - f1 + 1] = buf[i];
            else
                res[t][i - f1 - 1] = buf[i];

            int resik = i - f1 + 1;
            char bufik = buf[i];
            i++;
        }
        if(buf[i] == ch || i == strlen(buf))
        {
            if(t == 0)
                res[t][i - f1 + 1] = '\0';
            else
                res[t][i - f1 - 1] = '\0';
            int resk = i - f1 + 1;
            f1 = i;
            t++;
        }
        i++;
    }
    *result = res;
    *N = del;
}