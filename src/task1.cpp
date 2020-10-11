#include "task1.h"
#include <iostream>


using namespace std;

unsigned int min = 1;
unsigned max = 1;

unsigned long findValue(unsigned int min, unsigned max) {
    while (max <=20)
    {
        if (min % max == 0) y++;
        else { min++; max = 1; }
    }
    cout << min << endl;

}

