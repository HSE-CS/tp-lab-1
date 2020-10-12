#include <iostream>
#include "../include/task2.h"

using namespace std;

int main()
{
	cout << (checkPrime(5) ? "5 is prime" : "5 is not prime") << endl;
	cout << " 6th prime num is " << nPrime(6) << endl;
	cout << "next Prime to 13 is " << nextPrime(13) << endl;
}