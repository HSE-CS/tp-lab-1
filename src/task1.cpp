#include "task1.h"

using namespace std;

unsigned long findValue(unsigned int min, unsigned max) {
	for (long long int i = min; ; i++) {
		int count = 0;
		for (unsigned int j = min; j < max; j++) {
			if (i % j != 0) {
				count = 1;
				break;
			}
		}
		if (count == 0) {
			return i;
		}
	}

}

