#include <iostream>
#include "task4.h"
#include <cstring>

int main() {
	char a[] = "123456789";
	char b[] = "000000001";
	char* c = sum(a, b);
	for (int i = 0; i < strlen(c); i++)
		std::cout << c[i];

	return 0;

}