#include "../include/task2.h"
#include <time.h>
#include <cstdlib>

bool ferma(long long x) {
	//if (x == 2)
	//	return true;
	srand(time(NULL));
	for (int i = 0; i < 100; i++) {
		long long a = (rand() % (x - 2)) + 2;
		if (gcd(a, x) != 1)
			return false;
		if (pows(a, x - 1, x) != 1)
			return false;
	}
	return true;
}

long long gcd(long long a, long long b) {
	if (b == 0)
		return a;
	return gcd(b, a % b);
}

long long mul(long long a, long long b, long long m) {
	if (b == 1)
		return a;
	if (b % 2 == 0) {
		long long t = mul(a, b / 2, m);
		return (2 * t) % m;
	}
	return (mul(a, b - 1, m) + a) % m;
}

long long pows(long long a, long long b, long long m) {
	if (b == 0)
		return 1;
	if (b % 2 == 0) {
		long long t = pows(a, b / 2, m);
		return mul(t, t, m) % m;
	}
	return (mul(pows(a, b - 1, m), a, m)) % m;
}


bool checkPrime(unsigned long long value)
{
	if (value > 1000)
		return ferma(value);
	if (value <= 1) return false;
	for (unsigned int i = 2; i < value; ++i)
		if (value % i == 0) return false;
	return true;
}

unsigned long long nPrime(unsigned int n)
{
	unsigned int i = 0;
	unsigned int j = 0;
	while (j != n)
	{
		++i;
		if (checkPrime(i))
			++j;
	}
	return i;
}

unsigned long long nextPrime(unsigned long long value)
{
	++value;
	while (!checkPrime(value))
		++value;
	return value;
}
