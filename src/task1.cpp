#include "task1.h"
#include <cmath>
#include <stdio.h>
#include <algorithm>
#include <cstdlib>
#include <ctime>




int comp1(const void* a, const void* b) 
{
    return (*(int*)a - *(int*)b);
}

int comp2(const void* a, const void* b)
{
    if ((*(double*)a < *(double*)b))
        return -1;
    if ((*(double*)a == *(double*)b))
        return 0;
    if ((*(double*)a > *(double*)b))
        return 1;
}

int comp3(const void* a, const void* b)
{
    const char** fist = (const char**)a;
    const char* fistr = *fist;
    int ax = strlen(fistr);
    int sum1 = 0;
    for (int i = 0; i < ax; i++)
        sum1 += fistr[i];
    const char** two = (const char**)b;
    const char* twor = *two;
    int bx = strlen((twor));
    int sum2 = 0;
    for (int i = 0; i < bx; i++)
        sum2 += twor[i];
    int c = sum1 - sum2;
    return c;
}

int comp4(const void* a, const void* b)
{
    const char** fist = (const char**)a;
    const char* fistr = *fist;
    int ax = strlen(fistr);

    const char** two = (const char**)b;
    const char* twor = *two;
    int bx = strlen((twor));
    int c = ax - bx;
    return c;
}

int comp5(const void* a, const void* b)
{
    
    int sum1 = 0;
    const char** fist = (const char**)a;
    const char* fistr = *fist;
    int ax = strlen(fistr);
    for (int i = 0; i < ax; i++)
        if (fistr[i] == ' ')
            sum1++;
    
    int sum2 = 0;
    const char** two = (const char**)b;
    const char* twor = *two;
    int bx = strlen((twor));
    for (int i = 0; i < bx; i++)
        if (twor[i] == ' ')
            sum2++;
    int c = sum1 - sum2;
    return c;
}

int comp6(const void* a, const void* b)
{
    Person* fist = (Person*)a;
    
    Person* two = (Person*)b;

    return (fist->age - two->age);
}
/*
comp2: вещественное число(сравнение по значению) - тип double
comp3 : строка(сравнение по значению) - тип const char*
comp4 : строка(сравнение по длине) - тип const char*
comp5 : строка(сравнение по количеству пробелов) - тип const char*
comp6 : структура Person(сравнение по возрасту)
*/