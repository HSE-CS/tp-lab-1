#include"task4.h"

int main() {

	char* _number1 = new char[12]{ "24332432746" };
	char* _number2 = new char[12]{ "00000000001" };
	std::cout << sum(_number1, _number2) << std::endl;
	
	return 0;
}