#include "task1.h"
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#include <string.h>
#include <malloc.h>
unsigned long findValue(unsigned int min, unsigned max) {
	
	int least = 1;
	while (1)  {
		for (int i = min; i <= max; i++) {
			if ((least % i == 0) && (i == max))
				return least;
			if (least % i != 0)
				break;
		}
		least++;
	}
}