#include <iostream>
#include "task1.h"

using namespace std;

bool checkMod(unsigned long number,unsigned int min, unsigned int max){
    for (int i = min; i <= max; ++i) {
        if(number % i)
            return false;
    }
    return true;
}

unsigned long findValue(unsigned int min,unsigned max){
    unsigned long number = 1;
    while(!checkMod(number,min,max)){
        number++;
    }
    return number;
}
