//
// Created by freeb on 11.10.2020.
//

#include "task1.h"

unsigned long findValue(unsigned int min, unsigned int max) {
    unsigned long result = 1;
    while (true) {
        bool f = true;
        for (unsigned int i = min; i <= max; ++i) {
            if (result % i != 0) {
                f = false;
                break;
            }
        }
        if (f) break;
        result++;
    }
    return result;
}
