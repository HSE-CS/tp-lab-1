#include "task1.h"
#include <iostream>

using namespace std;


unsigned long findValue(unsigned int min, unsigned max) {
    unsigned v=max;

    while (true)
    {
        for (int i = max; i >= min; i--) {

             if (i == min)
                 return v;
             if (v % i != 0)
                 break;
        }
        v = v + max;
    }

}