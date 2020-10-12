#include "task5.h"

void split(char ***result, int *N, char *buf, char ch)
{
    unsigned long long index_l = 0;
    unsigned long long count = 0;
    unsigned long long buf_len = strlen(buf);
    for (auto i = 0; i < buf_len; i++)
    {
        if(buf[i] == ch)
        {
            strncpy(*((*result) + i), buf + index_l, i - index_l);
            count++;
            index_l = i + 1;
        }
    }
    *N = count;
    return;
}
