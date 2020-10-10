#include "task1.h"
#include <map>
#include <iostream>
#include <cmath>

unsigned long findValue(unsigned int min, unsigned max)
{
	std::map <int, int> backetEasyNumbers;
	std::map <int, int> NOK;

	for (int i = min; i <= max; i++) {

		backetEasyNumbers = EasyNumber(i);

		for (auto it = backetEasyNumbers.begin(); it != backetEasyNumbers.end(); it++) {

			if (NOK[(it->first)] < it->second)
				NOK[(it->first)] = it->second;
		}
	}

	int result = 1;

	for (auto it = NOK.begin(); it != NOK.end(); it++) {
		result *= pow(it->first, it->second);
		std::cout << it->first << " " << it->second << std::endl;
	}

	return result ;

}

std::map<int, int> EasyNumber(unsigned int num)
{
	std::map<int, int> easyNums;

	for (int i = 2; i <= sqrt(num); i++) {
		while (num % i == 0) {
			easyNums[i]++;
			num /= i;
		}
	}

	if (num != 1) {
		easyNums[num]++;
	}
	return easyNums;
}
	
