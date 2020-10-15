#include<iostream>
#include"task2.h"
using namespace std;

int main()
{
	bool t;
	unsigned int x;
	unsigned y;
	unsigned long long  z;

	cin >> x >> y >> z;
	t = checkPrime(x);
	cout << t << endl;
	cout<< nPrime(y) << endl;
	cout << nextPrime(z) << endl;



}