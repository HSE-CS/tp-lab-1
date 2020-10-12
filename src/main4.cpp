#include "task4.h"
#include <iostream>

using namespace std;

int main()
{
	char *x = "45599377", *y = "5555660024";
	char *bigSum = sum(x,y);
	cout << bigSum << endl;
	delete[] bigSum;
	return 0;
}