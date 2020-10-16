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
    unsigned int n1;
    unsigned n2;
    unsigned long long n3;
    cout << "Input fist num: ";
    cin >> n1;
    /*The checkPrime function takes an unsigned int as input, checks it for simplicity,
    and returns bool (true - the number is simple, false - the number is not simple).*/
    if (checkPrime(n1))
        cout << "ok" << endl;

    /*The nPrime function takes unsigned as input, and returns the nth Prime number.*/
    cout << "Input second num: ";
    cin >> n2;
    cout << nPrime(n2) << endl;

    /*The next Prime function takes an unsigned long long as input, and finds and returns
    the nearest next Prime number to the passed function.*/
    cout << "Input third num: ";
    cin >> n3;
    cout << nextPrime(n3) << endl;
    return 0;
}