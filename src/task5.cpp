#include "task5.h"
#include <cmath>
#include <stdio.h>
#include <algorithm>
#include <cstdlib>
#include <ctime>

void split(char*** result, int* N, char* buf, char ch)
{

    char time;
    int num = 0;
    int len = strlen(buf);
    int n = 1;
    for (int i = 0; i < len; i++)
    {
        if (buf[i] == ch) 
            n++;
    }
    *N = n;
    if (n != 0)
    {
        *result = new char* [n];
        int j = 0;
        for (int i = 0; i < n; i++)
        {
            while (j < len)
            {
                int k = j;
                int num1 = 0;
                while (buf[k] != ch)
                {
                    k++;
                    num1++;
                }
                (*result)[i] = new char[num1];
                int n1 = 0;
                for (int v = j; v < k; v++)
                {
                    (*result)[i][n1] = buf[v];
                    n1++;
                }
                (*result)[i][num1] = '\0';
                while (buf[k] == ch && k < len)
                    k++;
                j = k;
                if (j == len)
                    break;
                i++;
                if (i == n)
                    break;
            }
            if (i == n)
                break;
        }
    }
}

