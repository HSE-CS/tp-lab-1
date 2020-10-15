#include <iostream>
#include "task5.h"

using namespace std;

int main()
{
	char buf[] = "1113,2224,3332,441";
	int N = 0;
	char** result = nullptr;
	split(&result, &N, buf, ',');
	cout << N << endl;
	cout << result[0] << endl;
	cout << result[1] << endl;
	cout << result[2] << endl;
	cout << result[3] << endl;
	return 0;

}