#include"../include/task3.h"
#include"../include/task2.h"

unsigned long long sumPrime(unsigned int hbound) {
	unsigned long long sum = 0;
	unsigned long long prime = 2;
	while (prime < hbound) {
		sum += prime;
		prime = nextPrime(prime);
	}
	return sum;
}