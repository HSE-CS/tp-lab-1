#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstdlib>
#include "task3.h"



int main() {
	unsigned int hbound = 0;
	
	printf("hbound = ");
	scanf("%u", &hbound);
	
	printf("Sum = %llu", sumPrime(hbound));

	
	return 0;
}