// current.cpp : main project file.

#include "stdafx.h"
#include <iostream>
#include "task5.h" 

using namespace std;

int main()
{
	char buf[1000];
	char* str;
	cout << "input string: " << endl;
	cin.getline(buf, 999);
	str = new char[strlen(buf) + 1];
	str[0] = '\0';
	strcpy(str, buf);
	char** res;
	int n;
	char ch;
	cout << "input char: ";
	cin.getline(buf, 999);
	ch = buf[0];
	split(&res, &n, str, ch);
	cout << "split:" << endl;
	for (int i = 0; i < n; i++)
		cout << res[i] << endl;
	return 0;
}