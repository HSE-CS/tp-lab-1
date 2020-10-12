#include <iostream>
#include "task4.h"
#include <cstring>

int main() {
	char* a = "99999999999999999999";
	char* b = "1";
	char* c = new char[strlen(a)+strlen(b)];
	c = sum(a, b);
	for (int i = 0; i < strlen(c); i++)
		std::cout << c[i];
	return 0;

} 