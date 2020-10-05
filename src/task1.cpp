#include <iostream>
#include "task1.h"

using namespace std;

bool check(unsigned int min, unsigned max, unsigned int num)
{
    for (unsigned int i = min; i <= max; ++i)
    {
        if (num % i != 0)
            return false;
        if (i == max)
            return true;
    }
}

unsigned long findValue(unsigned int min, unsigned max)
{
    unsigned int num = max;
    while(!check(min, max, num))
    {
        ++num;
    };
    return num;
}
