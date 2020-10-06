#include <iostream>
#include "task4.h"

int main()
{
	const char* x = "123456789";
	const char* y = "1";
	std::cout << sum((char*)x, (char*)y);
	return 0;
}
