#include "task1.h"
#include <iostream>
using namespace std;

unsigned long findValue(unsigned int min,unsigned max)
{
    unsigned div = min;
    unsigned long num = max;
    while (div <= max)
    {
        if (num % div != 0)
        {
            num++;
            div=min;
        }
        else
        {
            div++;
        }
    }
    return num;
}