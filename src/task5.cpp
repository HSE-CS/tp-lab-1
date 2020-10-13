#include "task5.h"

void split(char ***result, int *N, char *buf, char ch)
{
    int index_l = 0;
    int count = 0;
    int len_buf = strlen(buf);
    string buf_to_string = string (buf, buf + len_buf);
    buf_to_string.push_back(ch);
    *result = new char*[len_buf + 2];

    for (int i = 0; i <= len_buf; i++)
    {
        if(buf_to_string[i] == ch)
        {
            (*result)[count] = new char[len_buf + 1];
            int len_res = 0;

            for (int j = 0; j < i - index_l; j++)
            {
                (*result)[count][j] = buf_to_string[index_l + j];
                len_res++;
            }

            (*result)[count][len_res] = 0;
            index_l = i + 1;
            count++;
        }
    }

    *N = count;
    return;
}
