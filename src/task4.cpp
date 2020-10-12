#include <iostream>
#include "task4.h"
#include <cstring>
#include <stdlib.h>
using namespace std;

char * sum(char *x, char *y)
{
    int size_x = strlen(x);
    int size_y = strlen(y);
    int length;
    if (size_x > size_y)
        length = size_x + 1;
    else
        length = size_y + 1;

    int first_num = atoi(x);
    int second_num = atoi(y);
    int summa = first_num + second_num;
    char *res = new char[length];

    for(int i = length-2; i >= 0; i--)
    {
        res[i] = (char) ((summa%10) + '0');
        summa = summa / 10;
    }
    return res;
}