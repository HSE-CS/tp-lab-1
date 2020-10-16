#define _CRT_SECURE_NO_WARNINGS
#include <algorithm>
#include <iostream>
#include <cstdlib>
#include <ctime>
#include "task2.h"
using namespace std;

#define SIZE 10000

bool checkPrime(unsigned int value) {

	if ((value == 0) || (value == 1))
		return false;

	for (unsigned int i = 2; i * i <= value; i++) {

		if (value % i == 0)
			return false;

	}
		
	return true;

}

unsigned long long nPrime(unsigned n) {
	
	bool r[SIZE];
	int k = 0;

	r[0] = false;
	r[1] = false;

	for (unsigned long long i = 2; i < SIZE; i++) {

		r[i] = true;

	}

	for (unsigned long long i = 2; i * i < SIZE; i++) {

		if (r[i] == 1) {
			
			k += 1;
			if (k == n)
				return i;

			for (unsigned long long j = i * i; j < SIZE; j += i)
				r[j] = 0;
			
		}

	}

	return 0;

}

unsigned long long nextPrime(unsigned long long value) {

	while (!checkPrime(value))
		value += 1;

	return value;

}