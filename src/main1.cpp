// �������� ���������, ������������, ����� ����� ��������� ������������� �����
// ����� ������� �� ��� ����� �� ���������[1...20] ��� �������.

#define _CRT_SECURE_NO_WARNINGS
#include <algorithm>
#include <iostream>
#include <cstdlib>
#include <ctime>
#include "task1.h"

int main() {
	
	int min = 1;
	int max = 20;

	printf("Answer: %lu", findValue(min, max));

	return 0;
}