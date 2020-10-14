#include "task1.h"

unsigned long findValue(unsigned int min, unsigned max) {
	int flag = 0;
	int count = 0;
	int i = min;
	for (int n = 0; n <= 100000; n++) {
		i = min;
		while ((flag == 0) && (i <= max)) {
			if (n % i == 0) {
				i++;
			}
			else {
				flag++;
			}
		}
		if (i == max) {
			return n;
			break;
		}
	}
}