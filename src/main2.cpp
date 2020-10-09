#include <iostream>
#include <cmath>
#include <algorithm>
#include <cstdlib>
#include <ctime>
#include "task2.h"
#include <string>

using namespace std;


int main()
{
    if (checkPrime(2))
        cout << "ok" << endl;
    cout << nPrime(500) << endl;
    cout << nextPrime(1031) << endl;
    return 0;
}