#include "task1.h"

unsigned long findValue(unsigned int min,unsigned max){
    unsigned int loc_min = min;
    unsigned int challenger = 1;
    while (loc_min <= max){
        if (challenger%loc_min == 0)
            loc_min++;
        else{
            challenger++; 
            loc_min = min; 
        }
    }
    return challenger;
}