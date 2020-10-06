#include "task4.h"
#include <stdlib.h>


char* sum(char* x, char* y)
{
	long long int number;
	int amount = 0;
	long long int first = atoll(x);
	long long int second = atoll(y);
	long long int answer = first + second;

	number = answer;

	for (int i = 0;; i++)
	{
		amount = amount + 1;
		number = number / 10;
		if (number == 0)
			break;
	}

	char* mas_answer = new char [amount];
	sprintf(mas_answer,'%lld', answer);

	return mas_answer;
};