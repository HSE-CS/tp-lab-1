#include "task4.h"
#include <stdio.h>
#include <cstring>

using namespace std;

char* sum(char* x, char* y)
{
    int length = 0;
    if (strlen(x) > strlen(y))
        length = strlen(x) + 1;
    else
        length = strlen(y) + 1;

    char* result = new char(length + 1);
    memset(result, '0', length + 1);

    if (strlen(x) > strlen(y))
    {
        for (int i = 0; i < strlen(y); i++)
            result[strlen(x) - strlen(y) + 1 + i] = y[i];
        for (int i = length - 1; i > 0; i--)
        {
            result[i] += x[i - 1] - 48;
            result[i - 1] += (result[i] - 48) / 10;
            result[i] = (result[i] - 48) % 10 + 48;
        }
    }
    else
    {
        for (int i = 0; i < strlen(x); i++)
            result[strlen(y) - strlen(x) + 1 + i] = x[i];
        for (int i = length - 1; i > 0; i--)
        {
            result[i] += y[i - 1] - 48;
            result[i - 1] += (result[i] - 48) / 10;
            result[i] = (result[i] - 48) % 10 + 48;
        }
    }
    
    if (result[0] == 48)
    {
        for (int i = 0; i < length - 1; i++)
            result[i] = result[i + 1];
        result[length - 1] = '\0';
    }
    else
        result[length] = '\0';
    return result;
};