#include "task2.h"

bool checkPrime(unsigned int value)
{
	for (unsigned int divider{ 2 }; divider < value; divider++)
		if (value % divider == 0) return 0;
	return 1;
}

unsigned long long nPrime(unsigned int n)
{
	for (unsigned int num{ 2 }, pos{ 1 };; num++)
	{
		bool flag = checkPrime(num);
		if (flag && pos == n) return num;
		else if (flag && pos != n) pos++;
	}
}

unsigned long long nextPrime(unsigned long long value)
{
	for (unsigned long long answer{ value+1 };; answer++)
		if (checkPrime(answer)) return answer;
}
