//
// Created by victor on 06.10.2020.
//
#include <cstdlib>
#include <cstring>
#include <iostream>
#include "task4.h"

char * sum(char *x, char *y){
    int size_x = strlen(x), size_y = strlen(y), length;

    if (size_x > size_y)
        length = size_x + 1;
    else
        length = size_y + 1;

    int a[size_x];
    memset(a, 0, size_x*sizeof(int));
    int c = 0;
    for(int i = size_x-1; i >= 0; i --){
        a[i] = x[c] - '0';
        c++;
    }

    int b[length];
    memset(b, 0, length*sizeof(int));
    c = 0;
    for(int i = size_y-1; i >= 0; i --){
        b[i] = y[c] - '0';
        c++;
    }

    for (int ix = 0; ix < length; ix++)
    {
        if (ix < size_x) {
            b[ix] += a[ix]; // суммируем последние разряды чисел
            b[ix + 1] += (b[ix] / 10); // если есть разряд для переноса, переносим его в следующий разряд
            b[ix] %= 10; // если есть разряд для переноса он отсекается
        }else break;
    }

    if (b[length - 1] == 0)
        length--;

    char *res = new char[length];
    c = 0;



    for(int i = length-1; i >= 0; --i) {
//        std::cout << b[i] << std::endl;
        res[c] = (char) (b[i] + '0');
        c++;
    }
    return res;
}
