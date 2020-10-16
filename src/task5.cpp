//
//  task5.cpp
//  programming-technologies
//
//  Created by Даниил Иванов on 12.10.2020.
//  Copyright © 2020 Daniil Ivanov. All rights reserved.
//

#include "task5.h"
#include <string.h>

void split(char*** result, int* N, char* buf, char ch)
{
    int length = strlen(buf);
    char** res{ 0 };
    int count_of_razdel{ 0 };
    for (int i = 0; i < length; i++) {
        if (buf[i] == ch)
            count_of_razdel++;
    }
    *N = count_of_razdel + 1;

    res = new char* [*N];
    for (int i = 0; i < *N; i++) {
        res[i] = 0;
    }
    int last_index{ 0 };
    int k{ 0 };
    for (int i = 0; i < length; i++) {
        if (buf[i] == ch) {
            int len = i - last_index;
            res[k] = substitution(buf, last_index, len);
            last_index = i + 1;
            k++;
        }
    }
    int len = length - last_index;
    res[k] = substitution(buf, last_index, len);
    (*result) = res;
}

char* substitution(char* buf, int start, int len)
{
    char* sub = 0;
    sub = new char[len+1];
    for (int i = 0; i < len; i++)
    {
        sub[i] = buf[start + i];
    }
    sub[len] = '\0';
    return sub;
}


