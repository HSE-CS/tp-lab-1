#include "task1.h"
#include <iostream>
using namespace std;
int main()
{


	unsigned int min, max{ 0 };
	unsigned int number{ 0 };
	cout << "Input" << endl;
	cin >> min >> max;
	number = findValue ( min, max);
	cout << "number:" << number;


}