#include"task4.h"

int main() {

	const char* _number1 = new const char[] { "123456789" };
	const char* _number2 = new const char[] { "000000001" };
	std::cout << sum(_number1, _number2) << std::endl;

	return 0;
}