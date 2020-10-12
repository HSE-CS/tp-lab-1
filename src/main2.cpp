#include "../include/task2.h"
#include <iostream>
using namespace std;


int main() {
    int i =32;
    cout << checkPrime(i) << endl;
    cout << nPrime(i) << endl;
    cout << nextPrime(i) << endl;

    i =54;
    cout << checkPrime(i) << endl;
    cout << nPrime(i) << endl;
    cout << nextPrime(i) << endl;

    i =101;
    cout << checkPrime(i) << endl;
    cout << nPrime(i) << endl;
    cout << nextPrime(i) << endl;

    return 0;
}
