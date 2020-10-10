#include "task2.h"

int main() {
	unsigned int num{ 0 };
	cout << "Enter the number you want to check on primary" << endl;
	cin >> num;
	if (checkPrime(num))
		cout << "It's prime" << endl;
	else
		cout << "it's no prime" << endl << endl;
	

	cout << "Enter, what in the prime number you want to find, and I can find the next prime number" << endl;
	cin >> num;
	unsigned long long n = nPrime(num);
	cout << "The " << num << "prime number is " << n << endl;
	cout << "The next prime number is " << nextPrime(n) << endl << endl;
	return 0;
}