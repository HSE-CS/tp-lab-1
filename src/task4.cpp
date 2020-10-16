#define _CRT_SECURE_NO_WARNINGS
#include "task4.h"
#include <cstring>
#include <algorithm>

using namespace std;

char* sum(char* x, char* y) 
{
	unsigned int strlen_X = strlen(x); //����� x
	unsigned int strlen_Y = strlen(y); // ����� y
	unsigned int Maxlen = max(strlen_X, strlen_Y); // �������� �� ���� ����
	char* x1 = new char[Maxlen + 1]; // ������ ��� ������ x
	char* y1 = new char[Maxlen + 1]; // ������ ��� ������ y
	
	//���� ������ ����� �� ���������, �� � ������� ��� ���������� ������ ���������� � ������ ������  �.�. '0' ����� ������ ��������������� ����������
    // ���� ������ ����� ���������, ��  �� ������� ������ ����� � ��������������� �������.
	if (strlen_X != strlen_Y) {
		if (strlen_X > strlen_Y) {
			for (unsigned int i = 0; i < strlen_X - strlen_Y; i++) {
				y1[i] = '0';
			}
			for (unsigned int i = 0; i <= strlen_Y; i++) {
				y1[i + strlen_X - strlen_Y] = y[i];
			}
			for (unsigned int i = 0; i <= Maxlen; i++) {
				x1[i] = x[i];
			}
			
		}
		else {
			for (unsigned int i = 0; i < strlen_Y - strlen_X; i++) {
				x1[i] = '0';
			}
			for (unsigned int i = 0; i <= strlen_X; i++) {
				x1[i + strlen_X - strlen_Y] = y[i];
			}
			for (unsigned int i = 0; i <= Maxlen; i++) {
				y1[i] = y[i];
			}
			
		}
	}
	else for (unsigned int i = 0; i <= Maxlen; i++) {
		x1[i] = x[i];
		y1[i] = y[i];
	}

	//������������ ���� �������� ��������������� �����
	bool overflowed = false;
	char* sum = new char[Maxlen + 3];
	sum[Maxlen + 1] = 0;
	for (unsigned i = 0; i <= Maxlen; i++) {
		if (i == Maxlen) {
			sum[0] = '0' + overflowed;
			break;
		}
		sum[Maxlen - i] = x1[Maxlen - i - 1] + y1[Maxlen - i - 1] + overflowed - '0';
		overflowed = false;
		if (sum[Maxlen - i] > '9') {
			overflowed = true;
			sum[Maxlen - i] = sum[Maxlen - i] - 10;
		}
	}
	if (sum[0] == '0') return sum + 1;
	return sum;
}