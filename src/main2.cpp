// current.cpp : main project file.
#include <iostream>
#include "task2.h"

using namespace std;

int main()
{
	unsigned long long start;
	cout << "input your number: ";
	cin >> start;
	if (checkPrime(start))
		cout << "it's prime number!" << endl;
	else
		cout << "it's not prime number!" << endl;
	cout << "next prime number is " << nextPrime(start) << endl;
	cout << "input number of prime: ";
	int num;
	cin >> num;
	cout << num << " prime number is " << nPrime(num)<<endl;
	return 0;
}