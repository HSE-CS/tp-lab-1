#include <iostream>
#include "task2.h"

int main() 
{
	unsigned long n = { 1 };
	if (checkPrime(n)) std::cout << nPrime(n) << "\n";
	else std::cout << nextPrime(n) << "\n";
	std::cout << nextPrime(2);
	return 0;
}