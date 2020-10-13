#include <iostream>
#include "task2.h"
using namespace std;

// sum of prime numbers before hbound(excluding it)
unsigned long long sumPrime(unsigned int hbound) {
	unsigned long long prime_sum(0);
	int* simple_table = sieveOfEratosphenes(hbound);
	for (size_t i = 2; i < hbound; i++)
	{
		if (simple_table[i] > 0) prime_sum += simple_table[i];
	}
	delete[] simple_table;
	return prime_sum;
}