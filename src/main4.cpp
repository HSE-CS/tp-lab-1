#include <iostream>
#include <cmath>
#include <algorithm>
#include <cstdlib>
#include <ctime>
#include "task4.h"
#include <string>

using namespace std;


int main()
{
    char* x = "99999999999999999999";
    char* y = "18888665";
    char* expected = "100000000000000000000";
    char* z = sum(x, y);
    cout << z << endl;
	return 0;
}