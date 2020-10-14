#include"task4.h"

const size_t size_array = 100000;

int main() {

	const char _number1[size_array] = { "1234" };
	const char _number2[size_array] = { "0001" };
	std::cout << sum(_number1, _number2) << std::endl;

	return 0;
}