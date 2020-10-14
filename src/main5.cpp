#include <iostream>
#include <cstring>
#include "task5.h"

using namespace std;

int main() 
{
	char* buf = "123,456,789";
	int N = 0;
	char **result = nullptr;
	split(&result, &N, buf, ',');
	cout << result[0] <<endl<< result[1] << endl << result[2] << endl<<N<<endl;
	for (int i = 0; i < sizeof(result) / sizeof(int); ++i) 
	{
		cout << result[i] << endl;
	}
	if (strcmp(result[0], "123") == 0)
	{
		cout << "yes" << endl;
	}
	else cout << "no" << endl;
	for (int i = 0; i < 3; i++)
	{
		delete[] result[i];
	}
	delete[] result;
}