//Написать прототип библиотеки для работы с простыми(prime) числами.

#define _CRT_SECURE_NO_WARNINGS
#include <algorithm>
#include <iostream>
#include <cstdlib>
#include <ctime>
#include "task2.h"

int main() {

	unsigned int value1 = 0;
	unsigned long long value2 = 0;
	unsigned n = 0;

	printf("Enter value1: ");
	scanf("%u", &value1);
	if (checkPrime(value1) == 1)
		printf("True");
	else
		printf("False");

	printf("\n");

	printf("Enter n: ");
	scanf("%d", &n);
	printf("Number: %llu", nPrime(n));

	printf("\n");

	printf("Enter value: ");
	scanf("%u", &value2);
	printf("Number: %llu", nextPrime(value2));

	return 0;
}