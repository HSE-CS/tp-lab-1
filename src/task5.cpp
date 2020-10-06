#include <iostream>
#include <cmath>
#include <string.h>

void split(char*** result, int* N, char* buf, char ch)
{
    char** answer = new char* [10];
    for (int i = 0; i < 10; i++)
        answer[i] = new char[10];

    int num = 0;
    int id = 0;
    for (int i = 0; i < strlen(buf); i++)
	{
        if (buf[i] == ch)
		{
            answer[num][id] = '\0';
            ++num;
            id = 0;
            continue;
        }
        else
		{
            answer[num][id] = buf[i];
        }
        ++id;
    }
    answer[num][id] = '\0';
    *N = id;
    *result = answer;
}