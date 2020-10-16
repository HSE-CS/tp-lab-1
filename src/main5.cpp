#include <iostream>
#include "task5.h"

using namespace std;

int main()
{

	char *buf = "abc,123,!?$";
	int N = 0;
	char **result = nullptr;
	split(&result, &N, buf, ',');

	for (int i = 0; i < N; i++)
	{
		for (int j = 0; result[i][j] != '\0'; j++)
			cout << result[i][j];
		cout << endl;
	}


}