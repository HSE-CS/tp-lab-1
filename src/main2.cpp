//
// Created by toliman on 05.10.2020.
//

#include "task2.h"

using namespace std;

signed main() {
    cout << checkPrime(3) << endl;
    cout << checkPrime(87) << endl;
    cout << checkPrime(243) << endl;
    cout << checkPrime(1e9 + 7) << endl;

    cout << nPrime(23) << endl;
    cout << nPrime(1000) << endl;
    cout << nPrime(169) << endl;

    cout << nextPrime(2) << endl;
    cout << nextPrime(1000000006) << endl;
    cout << nextPrime(2387487378378) << endl;


    return 0;
}
