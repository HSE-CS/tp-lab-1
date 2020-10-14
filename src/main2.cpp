#include <cstdlib>
#include <iostream>
#include "task2.h"
using namespace std;

int main()
{
	unsigned int value = 0;
	unsigned n = 0;
	unsigned long long num = 0;
	printf("Enter value which will be checked\n");
	cin >> value;
	printf("Enter n (number of prime num which you would like to see)\n");
	cin >> n;
	printf("Enter num (to find the closest prime number)\n");
	cin >> num;
	printf("\n%d\n", checkPrime(value));
	printf("%u\n", nPrime(n));
	printf("%llu\n", nextPrime(num));
	return 0;
}