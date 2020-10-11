#include <iostream>
#include <cstdlib>
#include <string>
#include <cstring>

unsigned long findValue(unsigned int min, unsigned int max) {
	unsigned int i = max+1;
	int ostatok = 0;
	while ostatok != 0{
		ostatok = 0;
		for (unsigned int j = min; j < max + 1; j++) {
			ostatok = ostatok + i % j;
		}
		i++
	}
	return i--
}