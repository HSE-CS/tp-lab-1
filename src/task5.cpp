#include "task5.h"
#include <cmath>
#include <stdio.h>
#include <algorithm>
#include <cstdlib>
#include <ctime>


void split(char*** result, int* N, char* buf, char ch)
{
    int s = strlen(buf);
    char preds;
    int numword = 0;
    int n = 1;
    for (int i = 0; i < s; i++)
    {
        if (i == 1)
            preds = buf[i];
        if (buf[i] == ch && buf[i] != preds)
            n++;
    }
    *N = n;
    if (n != 0)
    {
        *result = new char* [n];
        int j = 0;
        for (int i = 0; i < n; i++)
        {
            while (j < s)
            {
                int k = j;
                int numc = 0;
                while (buf[k] != ch)
                {
                    k++;
                    numc++;
                }
                (*result)[i] = new char[numc];
                int ns = 0;
                for (int v = j; v < k; v++)
                {
                    (*result)[i][ns] = buf[v];
                    ns++;
                }
                (*result)[i][numc] = '\0';
                while (buf[k] == ch && k < s)
                    k++;
                j = k;
                if (j == s)
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