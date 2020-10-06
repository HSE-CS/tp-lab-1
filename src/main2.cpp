#include <iostream>
#include "task2.h"

int main()
{
	std::cout << (checkPrime(2) ? "true" : "false") << "\n";
	std::cout << (checkPrime(3) ? "true" : "false") << "\n";
	std::cout << (checkPrime(12) ? "true" : "false") << "\n\n";

	std::cout << nPrime(6) << "\n";
	std::cout << nPrime(500) << "\n\n";

	std::cout << nextPrime(1031) << "\n";
	std::cout << nextPrime(3559) << "\n";
	std::cout << nextPrime(2) << "\n";

	return 0;
}