#include <iostream>
#include "task1.h"

using namespace std;

unsigned long findValue(unsigned int min, unsigned max) {
	int flag = 1;
	for (int i = min; i < max; i++) {
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