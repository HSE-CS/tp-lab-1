#include "task1.h"
#include <iostream>

using namespace std;

bool checkMod(unsigned int min, unsigned max, unsigned int a) {
    for (unsigned int i = min; i <= max; ++i) {
        if (a % i != 0) {
            return true;
        }
    }
    return false;
}

unsigned long findValue(unsigned int min, unsigned max) {
    unsigned int value = 1;
    while (checkMod(min, max, value)) {
        ++value;
    }
    return value;
}