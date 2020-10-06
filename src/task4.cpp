//
// Created by sharg on 06.10.2020.
//
#include "task4.h"
#include <string>
#include <cstring>
#include "istream"
using namespace std;
char * sum(char *x, char *y){
    unsigned long long length,sizeX=strlen(x),sizeY=strlen(y);
    length = sizeY + 1;
    if (sizeX > sizeY)
        length = sizeX + 1;
    char * sum = new char[length]; // Выделение памяти для массива
    for (int ix = 0; ix < length; ix++)
    {
        sum+=x[ix]-'0' + y[ix]-'0'; // суммируем последние разряды чисел
        sum[ix + 1]+= (x[ix]) / 10); // если есть разряд для переноса, переносим его в следующий разряд
        sum[ix] %= 10; // если есть разряд для переноса он отсекается
    }

    if (sum[length - 1] == 0)
        length--;
    return sum;
}//сумма чисел x и y