#include "task1.h"
#include <iostream>
#include <algorithm>

using namespace std;

int main() {

	setlocale(LC_ALL, "rus");
	int min = 0; 
	int max = 0;
	cout << "������� ������ ���������" << endl; 
	cin >> min;
	cout << "������� ����� ���������" << endl;
	cin>> max;
	while (min > max) 
	{
		cout << "������ ��� ����� ���������.���������� �����" << endl;
		cout << "������� ������ ���������" << endl;
		cin >> min;
		cout << "������� ����� ���������" << endl;
		cin >> max;
	}
	cout << findValue(min, max) << " - c���� ��������� ������������� ����� ����� ������� �� ��� ����� �� ���������[" << min << "..." << max <<"] ��� �������" << endl;
	return 0;
}