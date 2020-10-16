//
//  task5.cpp
//  programming-technologies
//
//  Created by Даниил Иванов on 12.10.2020.
//  Copyright © 2020 Daniil Ivanov. All rights reserved.
//

#include "task5.hpp"
#include <string>

void split(char*** result, int* N, char* buf)
{
    int length = strlen(buf);
    *N = countStrings(length);
    char** res{ 0 };
    res = new char* [*N];
    //result = (char***)malloc(sizeof(char**));
    for (int i = 0; i < *N; i++) {
        res[i] = 0;
    }
    if (res) {
        //*result = (char**)malloc(*N * sizeof(char*));
        for (int k = 0; k < *N;) { // sozdaem stroki
            for (int i = 0; i < length; i++) { // start podstroki
                for (int j = i; j < length; j++) {  //  end podstroki
                    int len = j - i + 1;  //dlina podstroki
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
