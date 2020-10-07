#include "task4.h"
#include <stdio.h>
#include <iostream>
#define MAX_LEN 100

using namespace std;

int main()
{
	char a[MAX_LEN] = "999999\0";
	char b[MAX_LEN] = "99999999999\0";
	char* p = sum(a, b);
	cout << p;
	return 0;
}