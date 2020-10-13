#include "task2.h"
#include <iostream>

using namespace std;

int main()
{
	cout << "simplicity check " << checkPrime(3) << endl;
	cout << "simplicity check " << checkPrime(12) << endl;
	cout << "prime number " << nPrime(1) << endl;
	cout << "prime number " << nPrime(2) << endl;
	cout << "next prime number " << nextPrime(5) << endl;
	cout << "next prime number " << nextPrime(15) << endl;
	return 0;
}