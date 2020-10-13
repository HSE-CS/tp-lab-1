#include <iostream>
using namespace std;

//Greatest common divisor
unsigned GCD(unsigned one, unsigned two) {
	while (one != two) {
		if (one > two) one -= two;
		else two -= one;
	}
	return one;
}

//Least common multiple
unsigned LCM(unsigned one, unsigned two) {
	return one * two / GCD(one, two);
}

//Least common multiple from range of divisors
unsigned long findValue(unsigned int min, unsigned max) {
	unsigned long div_num(LCM(min, min + 1));
	for (size_t i = min + 2; i < max; i++)
	{
		div_num = LCM(div_num, i);
	}
	return div_num;
}

// Previous uneffective algorithm
//unsigned long findValue(unsigned int min, unsigned max) {
	//	for (unsigned long divided_num = 1; divided_num < ULONG_MAX;divided_num++)
	//	{
	//		for (size_t divisor = min; divisor <= max; divisor++)
	//		{
	//			if ((divisor == max) && (divided_num % divisor == 0)) return divided_num;
	//			if (divided_num % divisor == 0) continue;
	//			else break;
	//		}	
	//	}
	//}