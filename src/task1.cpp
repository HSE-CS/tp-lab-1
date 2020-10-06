#include "task1.h"
#include <iostream>

using namespace std;

bool check(unsigned int min, unsigned max, unsigned int i) {
    for (unsigned int j = min; j < max; j++) {
        if (i % j != 0) {
            return false;
        }
    }
    return true;
}

unsigned long findValue(unsigned int min, unsigned max) {
    unsigned int res = max;
    while (!check(min, max, res)) {
        ++res;
    };
    return res;
}
