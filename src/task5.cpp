//
// Created by Алексей Трутнев on 05.10.2020.
//

#include "task5.h"
#include <cstring>


void split(char*** result, int* N, char* buf, char ch){
    unsigned int count = {0};
    *N = {0};   // substring
    unsigned int lenString = {0};
    for (auto i = 0; i < strlen(buf); i++) if (ch == buf[i]) count++;
    if (0 == count) return;
    (*result) = new char *[count + 2];
    for (auto i = 0; i < strlen(buf); i++)
        if (ch == buf[i]){
            (*result)[*N] = new char[lenString + 1];
            for(unsigned int j = {0}; j < lenString; j++) (*result)[*N][j] = buf[i - lenString + j];
            (*result)[*N][lenString] = '\0';
            lenString = {0};
            (*N)++;
        }
        else lenString++;
    if (0 != lenString){
        (*result)[*N] = new char[lenString + 1];
        for(unsigned int i = {0}; i < lenString; i++) (*result)[*N][i] = buf[strlen(buf) - lenString + i];
        (*result)[*N][lenString] = '\0';
        (*N)++;
    }
}
