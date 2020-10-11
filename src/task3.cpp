#include"task3.h"
#include<iostream>
using namespace std;

bool checkPrime(unsigned int x) {
	for (int i = 2; i * i <= x; i++) {
		if (!(x % i)) {
			return false;
		}
	}
	return true;
}

unsigned long long sumPrime(unsigned int hbound) {
	unsigned long long sum = 0;
	for (unsigned int i = 2; i < hbound; i++) {
		if (checkPrime(i)) {
			//cout << i << endl;
			sum += i;
		}
	}
	return sum;
}