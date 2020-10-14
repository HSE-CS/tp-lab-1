#include "task1.h"
#include <iostream>

using namespace std;


unsigned long findValue(unsigned int min, unsigned max) {
    while (max <=20)
    {
        if (min % max == 0) {
            max++;
        }
        else { min++; max = 1; }
    }
    cout << min << endl;

}