#define _CRT_SECURE_NO_WARNINGS
#include <algorithm>
#include <iostream>
#include <cstdlib>
#include <ctime>
#include "task1.h"
using namespace std;

unsigned long nod(unsigned long a, unsigned long b) {

    if (b == 0)
        return a;
    else
        return nod(b, a % b);

}
unsigned long findValue(unsigned int min, unsigned max) {

    unsigned long value = min;

    for (unsigned int i = min; i <= max; i++) {

        value = value * i / nod(value, i);
       // printf("%lu ", value);

    }

    return value;
}