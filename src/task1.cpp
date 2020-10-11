#include "task1.h"

unsigned long findValue(unsigned int min, unsigned int max) {
	int num = min - 1;
	bool is_it = false;
	while (!is_it) {
		is_it = true;
		num++;
		for (int i = min; i <= max; i++) {
			if (num % i) {
				is_it = false;
				break;
			}
		}
	}
	return num;
}