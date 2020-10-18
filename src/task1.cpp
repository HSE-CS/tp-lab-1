#include <iostream>
#include "task1.h"

using namespace std;

unsigned long findValue(unsigned int min, unsigned max) {
	int flag = 1;
	for (int i = 20; ; i++) {
		flag = 1;
		for (int dev = min; dev <= max; ++dev) {
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