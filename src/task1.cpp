#include "task1.h"

unsigned long findValue(unsigned int min, unsigned max) {
	int flag = 0;
	int count = 0;
	int i = min;
	long n = max;
	int sp = 0;
	while (1) {
		if (flag > 0) {
			return n;
		}
		else {
			n++;
			count = 0;
			for (int i = min; i <= max; i++) {
				sp = n % i;
				if (sp != 0) {
					count++;
				}
			}
			if (count == 0) {
				flag++;
			}
		}
	}
}