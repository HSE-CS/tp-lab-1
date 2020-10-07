#include <iostream>
#include "task5.h"

using namespace std;

int main()
{
	char buf[] = "111 222 333 4444";
	int N = 0;
	char** result = nullptr;
	split(&result, &N, buf, ' ');
	cout << N << endl;
	cout << result[0] << endl;
	cout << result[1] << endl;
	cout << result[2] << endl;
	cout << result[3] << endl;
	return 0;
}