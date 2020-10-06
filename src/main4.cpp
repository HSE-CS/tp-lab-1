#include "task4.h"
#include <iostream>
using namespace std;

int main()
{
	char* x = new char[21];
	char* y = new char[1];
	cin >> x >> y;
	char* res = sum(x,y);

	cout << res;
	return 0;
}