#include "task4.h"

char * sum(char *x, char *y)
{
    while (*x == '0')
        x++;
    while (*y == '0')
        y++;
    unsigned long long len_x = strlen(x);
    unsigned long long len_y = strlen(y);

    if (len_x > len_y)
    {
        swap (len_x, len_y);
        //swap (x, y);
        char * temp = new char [len_y + 2];

        strcpy(temp, x);
        strcpy(y, temp);

    }
    unsigned long long len_res = len_y;
    reverse(x, x + len_x);
    reverse(y, y + len_y);
    char * result = new char [len_y + 2];
    memset(result, '0', len_y + 1);
    for (unsigned long long i = 0; i < len_x; i++)
    {
        result[i] += x[i] + y[i] - 2 * '0';
        if (result[i] > '9')
        {
            result[i + 1] += 1;
            result[i] -= 10;
            if (i + 1 == len_y)
                len_res = len_y + 1;
        }
        //cout << result[i] << result[i + 1] << "\n";
    }
    for (unsigned long long i = len_x; i < len_y; i++)
    {
        result[i] += y[i] - '0';
        if (result[i] > '9')
        {
            result[i + 1] += 1;
            result[i] -= 10;
            if (i + 1 == len_y)
                len_res = len_y + 1;
        }
        //cout << result[i] << result[i + 1] << "\n";
    }
    //printf("%s\n", result);
    reverse(result, result + len_res);
    result[len_res] = 0;
    return result;
}

