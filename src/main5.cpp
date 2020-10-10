#include <iostream>
#include "task5.h"

int main() {

	char **result = new char*;
	int N = 0;
	char buf[100] = "123,456,789";
	split(&result, &N, buf, ',');

	for (int i = 0; i < N; i++)
		std::cout << result[i] << std::endl;

	return 0;

}