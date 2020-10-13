#include "task5.h"
#include <iostream>
#include <cstring>

using namespace std;

int main() 
{
	int N = 0,k=3;
	char* buf = "123,456,789";
	char** result = nullptr;
	split(&result, &N, buf, ',');
	cout << result[0] << endl << result[1] << endl << result[2] << endl<<N<< endl;
	if (strcmp(result[0], "123") == 0) 
	{
		cout << "yes" << endl;
	}
	else 
		cout << "no" << endl;
	if (strcmp(result[1], "456") == 0)
	{
		cout << "yes" << endl;
	}
	else
		cout << "no" << endl;
	if (strcmp(result[2], "789") == 0)
	{
		cout << "yes" << endl;
	}
	else
		cout << "no" << endl;
	for (int i = 0; i < k; i++)
	{
		delete[] result[i];
	}
	delete[] result;
}