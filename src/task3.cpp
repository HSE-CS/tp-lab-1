#include "task3.h"
#include <math.h>
bool checkNum(unsigned int value) {

	if (value >= 2) {
		for (long long i = 2; i <= sqrt(value); i++) if (0 == value % i) return false;
		return true;
	}
	else return false;
}
unsigned long long sum(unsigned int hbound) {

	unsigned long sum = { 0 };
	for (unsigned int i = { 1 }; i < hbound; i++) if (checkNum(i)) sum += i;
	return sum;

}