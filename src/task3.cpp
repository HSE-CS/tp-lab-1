#include <iostream>
#include "task3.h"
#include "task2.h"

using namespace std;
unsigned int hbound = 1999999;


unsigned long long sumPrime(unsigned int hbound) {
	long sum = 0;
	for (int i = 2; i < hbound; i++) {
		if (checkPrime(i) == true) {
			sum += i;
		}
	}

	return sum;



}