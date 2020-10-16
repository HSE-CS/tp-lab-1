#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstdlib>
#include "task2.h"


int main() {
	unsigned int v1 = 0;
	unsigned long long v2 = 0;
	unsigned n = 0;
	printf("value 1 = ");
	scanf("%u", &v1);
	if (checkPrime(v1) == 1)
		printf("True");
	else
		printf("False");
	printf("\n");

	printf("n = ");
	scanf("%d", &n);
	printf("Number: %llu", nPrime(n));

	printf("\n");

	printf("value 2 = ");
	scanf("%u", &v2);
	printf("Number: %llu", nextPrime(v2));
	return 0;
}