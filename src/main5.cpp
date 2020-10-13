#include "task5.h"
#include <iostream>
#include <cstring>

using namespace std;

int main() 
{
	char* buf = "123,456,789";
	int N = 0;
	char** result = nullptr;
	split(&result, &N, buf, ',');
	cout << result[0] <<endl<< result[1] << endl << result[2] << endl<<N<<endl;
	if (strcmp(result[0], "123") == 0)
	{
		cout << "yes" << endl;
	}
	for (int i = 0; i < 3; i++)
	{
		delete[] result[i];
	}
	delete[] result;
}