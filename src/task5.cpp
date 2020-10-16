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
            res[k] = new char[len + 1];
            for (int i = 0; i < len; i++)
            {
                res[k][i] = buf[last_index + i];
            }
            res[k][len] = '\0';
            last_index = i + 1;
            k++;
        }
    }
    int len = length - last_index;
    res[k] = new char[len + 1];
    for (int i = 0; i < len; i++)
    {
        res[k][i] = buf[last_index + i];
    }
    res[k][len] = '\0';
    (*result) = res;
}




