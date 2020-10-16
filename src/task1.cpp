#include <iostream>
#include "task1.h"

using namespace std;

unsigned long findValue(unsigned int min,unsigned max)
{
    bool ok = true;
    unsigned long k = max;
    while(ok)
    {
        int range = {0};
        for (unsigned int i = min; i < max; i++)
        {
            if (k % i != 0){
                ok = false;
                break;
            }
        }
        if (ok == false)
        {
            k++;
            ok = true;
        }
        else return k;
    }
}
