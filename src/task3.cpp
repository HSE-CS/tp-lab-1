#include"task2.h"
#include"task3.h"
#include<iostream>
using namespace std;


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