#ifndef TASK1_CPP
#define TASK1_CPP

#include "task1.h"

unsigned long lcm(unsigned int a, unsigned int b){
    unsigned long result = a * b;
    while (a != 0 && b != 0)
        if (a > b)
            a %= b;
        else
            b %= a;
    return result / (a+b);
}

unsigned long findValue(unsigned int min,unsigned max){
    unsigned result = 1;
    for (int i = min; i < max; ++i)
        result = lcm(result, i);
    return result;
}

#endif // TASK1_CPP