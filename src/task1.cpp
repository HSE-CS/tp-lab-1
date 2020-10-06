#include "task1.h"

unsigned long findValue(unsigned int min, unsigned max) {
    bool Flag = true;
    unsigned long num = 1;

    while (true) {
        for (auto div = min; div <= max; ++div) {
            if (num % div != 0) {
                Flag = false;
                continue;
            }
        }
        if (Flag) {
            return num;
        } else {
            num++;
            Flag = true;
        }
    }
}