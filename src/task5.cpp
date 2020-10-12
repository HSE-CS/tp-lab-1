#include "task5.h"
#include <cstring>
#include <iostream>


void split(char*** result, int* N, char* buf, char ch)
{
    const int length = 1000;
    int count { 0 };
    (*result) = new char* [length]();
    for (int i = 0; i < length; i++)
    {
        (*result)[i] = new char[length]();
    }

    for (int i = 0; i <= strlen(buf); i++)
    {
        if (buf[i] == ch)
        {
            (*result)[(*N)++][count] = '\0';
            count = 0;
            continue;
        }
        (*result)[(*N)][count++] = buf[i];
    }
    (*N)++;
}