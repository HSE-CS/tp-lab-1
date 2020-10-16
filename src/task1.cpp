#include "task1.h"
#include <iostream>
#include <algorithm>


unsigned long findValue(unsigned int min, unsigned max) {
	int count = max;
	while (true) {
		int Flag = 0;
		for (int i = min; i <= max; i++) {
			if (count % i == 0) {
				Flag++;
			}
		}
		if (Flag == max - min + 1) {
			return count;
		}
		count++;
	}
}