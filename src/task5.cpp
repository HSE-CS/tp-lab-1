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
        if (buf[i] == ch)
            n++;
    }
    *N = n;
    if (n != 0)
    {
        *result = (char**)malloc(n*sizeof(char*));
        int j = 0;
 
        for (int i = 0; i < n; i++)
        {
            if (n == 1 && buf[0] != ch)
            {
                (*result)[0] = (char*)malloc(s * sizeof(char));
                strcpy((*result)[0], buf);
                break;
            }
            while (j < s)
            {
                int k = j;
                int numc = 0;
                while (buf[k] != ch)
                {
                    k++;
                    numc++;
                    if (k >= s)
                        break;
                }
                if (k == 0)
                {
                    (*result)[i] = (char*)malloc(2 * sizeof(char));
                    (*result)[i][0] = ' ';
                    (*result)[i][1] = '\0';
                    i++;
                    j++;
                    continue;
                }
                if (k >= 1 && buf[k] == ch && buf[k - 1] != ch && j == k)
                {
                    j++;
                    if (j == s)
                    {
                        (*result)[i] = (char*)malloc(2 * sizeof(char));
                        (*result)[i][0] = ' ';
                        (*result)[i][1] = '\0';
                        i++;
                        j++;
                    }
                    continue;
                }
                if (k >= 1 && buf[k] == buf[k - 1])
                {
                    //Emty string? 
                    (*result)[i] = (char*)malloc(2 * sizeof(char));
                    (*result)[i][0] = ' ';
                    (*result)[i][1] = '\0';
                    i++;
                    j++;
                    if (j == s)
                    {
                        (*result)[i] = (char*)malloc(2 * sizeof(char));
                        (*result)[i][0] = ' ';
                        (*result)[i][1] = '\0';
                        i++;
                        j++;
                    }
                    continue;
                }
                (*result)[i] = (char*)malloc(numc + 1 * sizeof(char));
                int ns = 0;
                for (int v = j; v < k; v++)
                {
                    (*result)[i][ns] = buf[v];
                    ns++;
                }
                (*result)[i][numc] = '\0';
                if (j == k)
                    k++;
                else j = k;
                i++;
            }
        }
    }
}