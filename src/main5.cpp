#include <iostream>
#include <stdio.h>
#include <cstdlib>
#include <cstring>
#include <string.h>
#include <iterator>
#include "task5.h"

using namespace std;

int main()
{
	cout << "started" << endl;
	char* buf = "111,22,3";
	int N = 0;
	char** result = nullptr;
	split(&result, &N, buf, ',');
	cout << result[0] << endl<< result[1] << endl<< result[2] << endl<< N << endl;
	if (strcmp(result[0], "111") == 0)
	{
		cout << "yes, func is working" << endl;
	}
	else cout << "no"<< endl;
	if (strcmp(result[1], "22") == 0)
	{
		cout << "yes, func is working" << endl;
	}
	else cout << "no" << endl;
	if (strcmp(result[2], "3") == 0)
	{
		cout << "yes, func is working" << endl;
	}
	else cout << "no" << endl;

	for (int i = 0; i < 3; i++)
	{
		delete[] result[i];
	}
	delete[] result;
	return 0;
}