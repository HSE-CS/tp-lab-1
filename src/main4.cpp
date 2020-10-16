
#include <iostream>
#include <cstring>
#include "task4.h"

int main() {
	char x[] = "385";
	char* xx = x;
	char y[] = "962145";
	char* yy = y;
	std::cout << sum(xx, yy);
	return 0;
}