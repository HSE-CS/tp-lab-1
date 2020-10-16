#include "task1.h"

unsigned long findNum(unsigned int min, unsigned max) {
	unsigned t = max;
	while (true) {

		int attemp = { 0 };
		for (int i = min; i <= max; i++) if (0 == t % i) attemp++;
		if (max - min + 1 == attemp) return t;
		else t++;

	}
}