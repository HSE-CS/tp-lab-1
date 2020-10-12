// current.cpp : main project file.
//Найти сумму всех простых чисел, меньше двух миллионов.
#include <iostream>
#include "task2.h"
#include "task3.h"

using namespace std;

int main()
{
	unsigned long long res = sumPrime(2000000);
	cout << res << endl;
	return 0;
}