#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstdlib>
#include "task3.h"
#include <algorithm>
using namespace std;


int main() {
	unsigned int hbound = 0;
	
	cout<<"hbound = ";
	cin>>hbound;
	cout<<sumPrime(hbound);

	
	return 0;
}
