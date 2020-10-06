//
// Created by victor on 06.10.2020.
//
#include <cstdlib>
#include <cstring>
#include <iostream>
#include "task4.h"

char * sum(char *x, char *y){
    int size_x, size_y, length;
    size_x = strlen(x);
    size_y = strlen(y);
    if (size_x > size_y)
        length = size_x + 1;
    else
        length = size_y + 1;

    int a[size_x];
    int c = 0;
    for(int i = size_x; i >= 0; i --){
        a[i] = x[c] - '0';
        c++;
    }

    int b[length];
    c = 0;
    for(int i = size_y; i >= 0; i --){
        b[i] = atoi(&y[c]);
        c++;
    }

    for (int ix = 0; ix < length; ix++)
    {
        b[ix] += a[ix]; // суммируем последние разряды чисел
        b[ix + 1] += (b[ix] / 10); // если есть разряд для переноса, переносим его в следующий разряд
        b[ix] %= 10; // если есть разряд для переноса он отсекается
    }

    if (b[length - 1] == 0)
        length--;

    char res[length];
    c = 0;



    for(int i = length; i >= 0; --i) {
        std::cout << b[i] << std::endl;
        res[c] = (char) (b[i] + '0');
        c++;
    }
    return res;
}
