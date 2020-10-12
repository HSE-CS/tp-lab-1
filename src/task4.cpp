#include "task4.h"

char * sum(char *x, char *y)
{
    while (*x == '0')
        x++;
    while (*y == '0')
        y++;

    unsigned long long len_x = strlen(x);
    unsigned long long len_y = strlen(y);

    auto x_to_string = string(x, x + len_x);
    auto y_to_string = string(y, y + len_y);

    if (len_x > len_y)
    {
        swap (len_x, len_y);
        swap (x_to_string, y_to_string);
    }

    unsigned long long len_res = len_y;
    reverse(x_to_string.begin(), x_to_string.end());
    reverse(y_to_string.begin(), y_to_string.end());

    string result_to_string;
    result_to_string.resize(len_y + 2);
    fill(result_to_string.begin(), result_to_string.end(), '0');

    for (unsigned long long i = 0; i < len_x; i++)
    {
        result_to_string[i] += x_to_string[i] + y_to_string[i] - 2 * '0';
        if (result_to_string[i] > '9')
        {
            result_to_string[i + 1] += 1;
            result_to_string[i] -= 10;
            if (i + 1 == len_y)
                len_res = len_y + 1;
        }
    }

    for (unsigned long long i = len_x; i < len_y; i++)
    {
        result_to_string[i] += y_to_string[i] - '0';
        if (result_to_string[i] > '9')
        {
            result_to_string[i + 1] += 1;
            result_to_string[i] -= 10;
            if (i + 1 == len_y)
                len_res = len_y + 1;
        }
    }

    result_to_string.resize(len_res);
    reverse(result_to_string.begin(), result_to_string.end());

    char *result = new char [len_res + 1];
    for (unsigned long long i = 0; i < len_res; i++)
        result[i] = result_to_string[i];
    result[len_res] = 0;
    return result;
}

