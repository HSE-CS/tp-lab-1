#include <iostream>
#include "task5.h"

int main()
{
	const char* buf = "123,456,789";
	int N = 0;
	char** result = nullptr;
	split(&result, &N, (char*)buf, ',');
	std::cout << N << std::endl;
	for (unsigned int i = 0; i < N; i++)
		std::cout << result[i] << std::endl;
	return 0;
}
