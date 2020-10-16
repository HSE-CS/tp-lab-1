#include "task1.h"
#include <iostream>
#include <algorithm>

using namespace std;

int main() {

	setlocale(LC_ALL, "rus");
	int min = 0; 
	int max = 0;
	cout << "Введите начало диапозона" << endl; 
	cin >> min;
	cout << "Введите конец диапозона" << endl;
	cin>> max;
	while (min > max) 
	{
		cout << "Ошибка при вводе диапозона.Попробуйте снова" << endl;
		cout << "Введите начало диапозона" << endl;
		cin >> min;
		cout << "Введите конец диапозона" << endl;
		cin >> max;
	}
	cout << findValue(min, max) << " - cамое маленькое положительное целое число делится на все числа из диапазона[" << min << "..." << max <<"] без остатка" << endl;
	return 0;
}