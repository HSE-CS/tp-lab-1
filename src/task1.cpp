#include <math.h>
#include <stdio.h>
#include "task1.h"
#include <iostream>
#include <cstring>

using namespace std;



unsigned long findValue(unsigned int min,unsigned max)
{
    int val = max;
    int i = min;

    while(1){
        for (i = min; i < max; ++i) {
            if (val % i != 0)
                break;
        }
    if (i != max)
        val = val + max;
    else
        return val;
    }
}

