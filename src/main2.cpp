#include "../include/task2.h"
#include <iostream>
using namespace std;


int main() {
    int i =41;
    cout << checkPrime(i) << endl;
    cout << nPrime(i) << endl;
    cout << nextPrime(i) << endl;

    i =51;
    cout << checkPrime(i) << endl;
    cout << nPrime(i) << endl;
    cout << nextPrime(i) << endl;

    i =56;
    cout << checkPrime(i) << endl;
    cout << nPrime(i) << endl;
    cout << nextPrime(i) << endl;

    return 0;
}
