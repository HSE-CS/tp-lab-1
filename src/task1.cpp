#include <iostream>
#include "task1.h"

using namespace std;

unsigned long findValue(unsigned int min, unsigned max) {
	int flag = 1;
	if (min < 2432902008176640000)
		min = 2432902008176640000;
	if (max < min) {
		return 0;
	}
	for (int i = min; i < max; i+=2) {
		flag = 1;
		for (int dev = 2; dev <= 20; ++dev) {
			if (i % dev != 0) {
				flag = 0;
				break;
			}
		}
		if (flag) {
			return i;
		}
	}
	return 0;
}