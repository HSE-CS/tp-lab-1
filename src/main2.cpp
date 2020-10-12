#include "task2.h"
#include <algorithm>
#include <iostream>

int main() {
	int a=0, b=0, n=0;
	std::cout << "For check\n";
	std::cin >> a;
	a = checkPrime(a);
	if (a == 1) std::cout << "Prime\n";
	else std::cout << "Not prime\n";

	std::cout << "N for n prime\n";
	std::cin >> n;
	n = nPrime(n);
	std::cout << n << std::endl;

	std::cout << "next prime for ";
	std::cin >> b;
	b = nextPrime(b);
	std::cout << b;

	return 0;
}