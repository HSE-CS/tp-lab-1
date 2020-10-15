#include "task1.h"

unsigned long findValue(unsigned int min,unsigned max)
{
    bool check = 0;
    int i = 0;
    do
    {
        check =1;
        i+=max;
        for(unsigned j=min; j<max;j++)
            if(i % j != 0)
            {
                check = 0;
                break;
            }
    } while (!check);
    return i;
} 