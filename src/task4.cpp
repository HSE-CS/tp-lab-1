#include "task4.h"

char *sum(char *x, char *y)
{
    int x_len = strlen((const char *)x);
    int y_len = strlen((const char *)y);
    int max_len = 0;
    if (x_len > y_len)
        max_len = x_len;
    else
        max_len = y_len;
    char *sum = (char *)calloc(max_len + 2, sizeof(char));
    sum[max_len + 1] = '\0';
    char buf = 0;
    for (int i = max_len; i > -1; --i)
    {
        if (x_len && y_len)
        {
            buf = x[x_len - 1] - '0' + y[y_len - 1] - '0';
            sum[i] = buf % 10 + '0';
            buf /= 10;
        }
        else if (x_len)
        {
            sum[i] = x[x_len];
        }
        else if (y_len)
        {
            sum[i] = y[y_len];
        }
    }
    if (sum[0] == 0)
        return sum + 1;
    return sum;
};