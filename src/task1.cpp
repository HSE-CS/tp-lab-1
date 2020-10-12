#include "task1.h"

unsigned long findValue(unsigned int min, unsigned max) {
    int n = max;
    while (true) {
        int k = 0;
        for (int i = min; i <= max; i++) {
            if (n % i == 0) {
                k++;
            }
        }
        if (k == max - min + 1) {
            return n;
        }
        else n++;
    }
}