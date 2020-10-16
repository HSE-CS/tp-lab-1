#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <cstdlib>
#include "task1.h"

using namespace std;

unsigned long nod(unsigned long x, unsigned long y) {
	if (y == 0)
		return x;
	else
		return nod(y, x % y);
}
unsigned long findValue(unsigned int min, unsigned max) {
	unsigned long n = min;
	for (unsigned int i = min; i <= max; i++) {
		n = n * i / nod(n, i);
	}
return n;
}
