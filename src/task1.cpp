//
// Created by freeb on 11.10.2020.
//

#include "task1.h"

unsigned long findValue(unsigned int min, unsigned int max) {
    unsigned long result = 1;
    for (unsigned int w = min; w <= max; w++) {
        result *= w;
    }
    return result;
}
