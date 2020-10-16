#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
#include "task4.h"

int main() {
	char x[] = "1234";
	char *xptr = x;
	char y[] = "56789";
	char *yptr = y;
	std::cout << sum(xptr, yptr);
	return 0;
}
