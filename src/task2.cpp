#pragma once
#include <iostream>
#include "task2.h"
#include "task3.h"

bool checkPrime(unsigned int value) {
	if (value == 2)
		return true;
	for (unsigned int j = 2; j < value; ++j) {
		if (value % j == 0) {
			return false;
		}
	}
	return true;
}

bool checkPrime(unsigned long long value) {
	if (value == 2)
		return true;
	for (int j = 2; j < value; ++j) {
		if (value % j == 0) {
			return false;
		}
	}
	return true;
}

unsigned long long nPrime(unsigned n) {
	int i = 1;
	unsigned long long num = 1;
	int flag = 1;
	while (i != n) {
		++num;
		for (int j = 2; j < num; ++j) {
			flag = 1;
			if (num % j == 0) {
				flag = 0;
				break;
			}
		}
		if (flag == 1)
			++i;
	}
	return num;
}
unsigned long long nextPrime(unsigned long long value) {
	if (value == 2)
		return value;
	while (!checkPrime(value))
		++value;
	return value;
}
