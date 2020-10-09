#include "task1.h"

unsigned long findValue(unsigned int min, unsigned int max) {
	bool is_value = true;

	unsigned long number = 1;

	while (true){

		for (auto div = min; div <= max; div++) {

			if ( (number % div) != 0 ){
				is_value = false;
				break;
			}
		}

		if (is_value) {
			return number;
		}

		is_value = true;
		number += 1;
	}
}