#include "task4.h"
#include <iostream>

using namespace std;

int main() 
{
	char *x = "099999";
	char *y = "000001";
	char *expected = "100000";
	char *z = sum(x, y);
	cout << z << endl;
	z[8] = '\0';
	for (int i = 0; i < sizeof(z); i++) 
	{
		cout << z[i] << endl;
	}
	cout << "size -- " << sizeof(z) << endl;
	cout << expected << endl;
	cout << "size -- " << sizeof(sum(x, y)) << endl;
	if ((*sum(x, y)) == (*expected))
	{
		cout << "yes, func sum is working" << endl;
	}
	else
		cout<<"something went wrong"<<endl;
}