// current.cpp : main project file.

#include "stdafx.h"
#include <iostream>
#include "task4.h"

using namespace std;

int main()
{
	char buf[1000];
	char*x, *y;
	cout << "number 1: ";
	cin.getline(buf,999);
	x = new char[strlen(buf) + 1];
	x[0] = '\0';
	strcpy(x, buf);
	cout << "number 2: ";
	cin.getline(buf, 999);
	y = new char[strlen(buf) + 1];
	y[0] = '\0';
	strcpy(y, buf);
	char* res = sum(x, y);
	cout << "result: " << res << endl;
	return 0;
}