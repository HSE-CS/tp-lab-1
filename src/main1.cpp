// current.cpp : main project file.
//Написать программу, определяющую, какое самое маленькое положительное целое 
//число делится на все числа из диапазона[1...20] без остатка.
#include <iostream>
#include "task1.h"

using namespace std;

int main()
{
	unsigned long res = findValue(1, 20);
	cout << res << endl;
	return 0;
}