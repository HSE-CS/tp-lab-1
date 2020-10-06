#include "task5.h"
#include <iostream>
using namespace std;

int main()
{
	char buf[] = "123,456,789";
	int N = 0;
	char** result = nullptr;
	split(&result, &N, buf, ',');
	cout << N << endl;
	cout << result[0] << endl;
	cout << result[1] << endl;
	cout << result[2] << endl;
	return 0;
}