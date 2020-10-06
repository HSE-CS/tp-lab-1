#define _CRT_SECURE_NO_WARNINGS
#include "task5.h"
#include <iostream>
#include<string>
#include <cstring>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

using namespace std;
const int len{ 1000 };

void split(char*** result, int* N, char* buf, char ch){
    (*result) = new char* [len]();
    for (int i = 0; i < len; i++) {
        (*result)[i] = new char [len]();
    }
    char* tmp_char;
    string s (1, ch);
    const char* sep = s.c_str();
    tmp_char = strtok(buf, sep);    // вызовем функцию strtok для разделения строки в buff по пробелам
    while (tmp_char != NULL) {  ///выводим части пока они существуют
        (*result)[(*N)++] = tmp_char;   
        tmp_char = strtok(NULL, sep);    ///получим следующую часть
    }
    //(*N)++;
   
}
