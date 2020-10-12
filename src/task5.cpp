#include <iostream>
#include <cstring>
#include "task5.h"

using namespace std;

void split(char*** result, int* N, char* buf, char ch) 
{
    char** test = new char* [3];
    for (int i = 0; i < 3; ++i) 
    {
        test[i] = new char[3];
    }

    (*result) = test;

    int let = 0;
    for (int i = 0; i < strlen(buf); i++) 
    {
        if (buf[i] == ch) 
        {
            test[(*N)][let] = '\0';
            (*N)++;
            let = 0;

            continue;
        }
        if (i == strlen(buf) - 1) 
        {
            test[(*N)][let + 1] = '\0';
        }
        test[(*N)][let] = buf[i];
        let++;
    }
    (*N)++;
}