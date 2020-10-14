#include <iostream>
#include "task4.h"

using namespace std;

int main() 
{
	cout << "started" << endl;
	/*char *x = "111111111";
	char *y = "000000001";
	char *expected = "111111112";
	char *z = sum(x, y);
	cout<<"z:"<<endl;
	z[8] = '\0';
	for (int i = 0; i < sizeof(z); ++i) 
	{
		cout << z[i] << endl;
	}
	cout << "size of z " << sizeof(z) << endl;
	cout << expected << endl;
	cout << "size of sum " << sizeof(sum(x, y)) << endl;
	if ((*sum(x, y)) == (*expected))
	{
		cout << "yes, func is working" << endl;
	}/*
}