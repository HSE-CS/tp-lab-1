#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
#include "task4.h"

using namespace std;

int main() 
{
	setlocale(LC_ALL, "rus");

	char x[28] = "111111111111111111111111111";
	char y[28] = "11111";
	cout << "Сумма двух строк равна " << sum(x, y) << endl;
	return 0;
}

