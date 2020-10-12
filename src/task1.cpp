#include "task1.h"
#include <algorithm>
#include <iostream>

unsigned long findValue(unsigned int min, unsigned max) {
	unsigned int count = max;
	while (1) {
		int check = 0;
		for (int i = min; i <= max; i++) {
			if (count % i == 0) {
				check++;
			}
		}
		if (check == max - min + 1) {
			return count;
		}
		count++;
	}
}