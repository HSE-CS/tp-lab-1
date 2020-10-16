#include "task1.h"
#include <limits.h>

unsigned long findValue(unsigned min, unsigned max) {
    if (max < min) return 0;
    for (int i = max; i < ULONG_MAX; ++i) {
        int divisible = 1;
        for (int j = min; j <= max; ++j) {
            if (i % j != 0) {
                divisible = 0;
                break;
            }
        }
        if (divisible == 1) {
            return i;
        }
    }
    return 0;
}