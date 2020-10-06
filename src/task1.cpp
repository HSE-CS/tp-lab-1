#include <iostream>
#include <string.h>

int nod(int first, int second) {
	while (first != second) {
		if (first > second) {
			first -= second;
		}
		else {
			second -= first;
		}
	}
	return first;
}

int nok(int first, int second) {
	int p = nod(first, second);
	return (first / p) * (second / p) * p;
}

unsigned long findValue(unsigned int min, unsigned max) {
	unsigned long currentNok = min * (min + 1);
	for (int i = min + 2; i <= max; i++) {
		currentNok = nok(currentNok, i);
	}
	return currentNok;
}