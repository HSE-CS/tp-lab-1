#include <cstdlib>
#include <iostream>
#include "task3.h"
using namespace std;

int main()
{
	unsigned int hbound = 2000000;
	unsigned long long sum = sumPrime(hbound);
	printf("%llu", sum);
}