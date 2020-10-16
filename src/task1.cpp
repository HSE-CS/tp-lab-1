#define _CRT_SECURE_NO_WARNINGS
#include "task1.h"
#include <stdio.h>

unsigned long findValue(unsigned int min, unsigned max) {
	
	int least = 1;
	while (true)  {
		for (int i = max; i <= max; i++) {
			if ((least % i == 0) && (i == max))
				return least;
			if (least % i != 0)
				break;
		}
		least++;
	}
}