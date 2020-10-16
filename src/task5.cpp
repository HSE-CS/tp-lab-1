//
//  task5.cpp
//  programming-technologies
//
//  Created by Даниил Иванов on 12.10.2020.
//  Copyright © 2020 Daniil Ivanov. All rights reserved.
//

#include "task5.hpp"
#include <string.h>

void split(char*** result, int* N, char* buf)
{
    int length = strlen(buf);
    *N = countStrings(length);
    char** res{ 0 };
    res = new char* [*N];
    for (int i = 0; i < *N; i++) {
        res[i] = 0;
    }
    if (res) {
        for (int k = 0; k < *N;) {
            for (int i = 0; i < length; i++) {
                for (int j = i; j < length; j++) {
                    int len = j - i + 1;  
                    char* temp{ 0 };
                    temp = new char[len];
                        for (int l = 0; l < len; l++) {
                                temp[l] = buf[i + l];
                        }
                        res[k] = temp;
                        res[k][len] = 0;
                        k++;
                }
            }
        }
    }
    (*result) = res;
}

int countStrings(int length) {
    return ((1 + length) * length) / 2;
}
