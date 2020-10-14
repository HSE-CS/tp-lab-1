#include"task4.h"

const size_t size_array = 100000;

int main() {

	const char* _number1 = new char[size_array] = { "123456789" };
	const char* _number2 = new char[size_array] = { "000000001" };
	std::cout << sum(_number1, _number2) << std::endl;

	return 0;
}