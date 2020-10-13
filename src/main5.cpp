#include "task5.h"
#include <iostream>
#include <cstring>

using namespace std;

int main() 
{
	int N = 0;
	char* buf = "111,135,999";
	char** result = nullptr;
	split(&result, &N, buf, ',');
	cout << result[0] << endl << result[1] << endl << result[2] << endl<<N<< endl;
	if (strcmp(result[0], "111") == 0) 
	{
		cout << "yes" << endl;
	}
	else 
		cout << "no" << endl;
	if (strcmp(result[1], "135") == 0)
	{
		cout << "yes" << endl;
	}
	else
		cout << "no" << endl;
	if (strcmp(result[2], "999") == 0)
	{
		cout << "yes" << endl;
	}
	else
		cout << "no" << endl;
	for (int i = 0; i < 3; i++)
	{
		delete[] result[i];
	}
	delete[] result;
}