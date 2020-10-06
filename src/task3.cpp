#include "task3.h"

unsigned long long sumPrime(unsigned int hbound)
{
	unsigned long long answer{ 0 };
	for (unsigned int num{ 2 }; num < hbound; num++)
		if (checkPrime(num)) answer += num;
	return answer;
}
