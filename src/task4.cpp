#include "task4.h"

char* sum(char* x, char* y)
{
	int lengthX = strlen(x);
	int lengthY = strlen(y);
	int lengthSum = std::max(lengthX, lengthY);
	int minLength = std::min(lengthX, lengthY);
	char* res = new char[lengthSum + 1];
	for (int i = 0; i < lengthSum; i++)
		res[i] = 0;
	int dobavka = 0;
	// Складываем разряды до разницы в числах, т.е. XXXYYYY + YYYY
	for (int i = 0; i < minLength; i++)
	{
		int s = (int)x[lengthX - 1 - i] + (int)y[lengthY - 1 - i] + dobavka - 96;
		if (s > 9)
			dobavka = s % 9;
		else
			dobavka = 0;
		char symbol = (char)((s > 9) ? ((s - 10) + '0') : (s + '0'));
		res[lengthSum - 1 - i] = symbol;
	}
	bool isX = lengthSum == strlen(x) ? true : false;
	// Складываем после разницы в в числах, т.е XXX + dobavka
	for (int i = minLength; i < lengthSum; i++)
	{
		int s = 0;
		if (isX)
			s = (int)x[lengthX - 1 - i] + dobavka - 48;
		else
			s = (int)x[lengthX - 1 - i] + dobavka - 48;
		if (s > 9)
			dobavka = s % 9;
		else
			dobavka = 0;
		char symbol = (char)((s > 9) ? ((s - 10) + '0') : (s + '0'));
		res[lengthSum - 1 - i] = symbol;
	}
	char* res2 = new char[lengthSum + 2];
	if (dobavka > 0) // Есть доп. разряд?
	{
		res2[0] = dobavka + '0';
		for (int i = 1; i < lengthSum + 1; i++)
		{
			res2[i] = res[i - 1];
		}
		res2[lengthSum + 1] = '\0';
		return res2;
	}
	res[lengthSum] = '\0';
	return res;
}