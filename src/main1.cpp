#include "task1.h"
#include <iostream>
#include <algorithm>

int main() {
	int a = 0,b = 0;
	std::cout << "Enter borders\n";
	std::cin >> a >> b;
	if (a > b) {
		std::swap(a, b);
	}
	std::cout << findValue(a, b);
	return 0;
}