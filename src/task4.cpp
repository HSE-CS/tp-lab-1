#include <iostream>
#include <cstring>
#include "task4.h"

using namespace std;

char * sum(char *x, char *y)
{
    int max_length = max(strlen(x), strlen(y));
    int count_x = strlen(x);
    int count_y = strlen(y);

    char * str = new char[max_length];
    if (count_x > count_y)
	{
        for (int i = 0; i < count_x - count_y; ++i)
            str[i] = '0';
        for (int j = 0; j < count_y; ++j)
            str[count_x - count_y + j] = y[j];
        y = str;
    }
    if (count_y > count_x)
	{
        for (int i = 0; i < count_y - count_x; ++i)
            str[i] = '0';
        for (int j = 0; j < count_x; ++j)
            str[count_y - count_x + j] = x[j];
        x = str;
    }
    delete [] str;

    int num = 0;
    char * new_str = new char[max_length+1];
    for (int i = max_length-1; i > -1; --i)
	{
        new_str[i] = x[i] + y[i] + num - '0';
        num = 0;
        if (new_str[i] > 57)
		{
            new_str[i] = new_str[i] - 10;
            num++;
            if (i == 0 && num > 0)
			{
                for (int i = max_length; i > -1; --i)
                    new_str[i] = new_str[i-1];
                new_str[0] = '1';
            }
        }
        if (i == 0 && num == 0)
            new_str[max_length] = '\0';
    }
	
    return new_str;
}