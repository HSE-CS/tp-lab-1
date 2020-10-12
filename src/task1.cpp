#include "task1.h"

unsigned long findValue(unsigned int min, unsigned max) {
    unsigned result = max - 1;
    unsigned int count = 0;
    while (count != (max - min) + 1) {
        unsigned int i = min;
        result++;
        count = 0;
        while ((result % i == 0)&&(i <= max)) {
            count++;
            i++;
        }
    }
    return result;
}
