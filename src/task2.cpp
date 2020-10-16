#include "task2.h"
#include <math.h>

unsigned long long Prime(unsigned n) {

	unsigned long long sch = { 0 };
	bool iter = false;
	unsigned long long num;
	unsigned long long k = { 2 };
	while (!iter) {
		int div = { 0 };
		for (int i = 2; i < k; i++) if (0 == k % i) div++;
		if (0 == div) {
			sch++;
			if (sch == n) {
				iter = true;
				num = k;
				break;
			}
		}
		k++;
	}
	return num;

}

bool checkNum(unsigned int value) {

	if (value >= 2) {
		for (long long i = 2; i <= sqrt(value); i++) if (0 == value % i) return false;
		return true;
	}
	else return false;
}

unsigned long long nextNum(unsigned long long value) {

	value++;
	while (true) {
		int div = { 0 };
		for (int i = 2; i < value; i++) if (0 == value % i) div++;
		if (0 == div) return value;
		else value++;

	}
}