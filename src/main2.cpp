#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <cstdlib>
#include "task2.h"

int main()
{
	printf("%ld\n",nextPrime(1031));
	printf("%ld\n", checkPrime(2));
	printf("%ld\n", checkPrime(3));;
	printf("%ld\n", nPrime(500));
	
	return 0;
}