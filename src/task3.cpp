#include "task2.h"
#include "task3.h"

using namespace std;

unsigned long long sumPrime(unsigned int hbound) {
	unsigned long int sum = 0;
	for (unsigned long int i = 2; i < hbound; i++) {
		if (checkPrime(i)) {
			sum = sum + i;
		}
	}
	return sum;
}