//
// Created by Vadim Makarov on 03.10.2020.
//

#include <iostream>
#include "task2.h"

using namespace std;

int main(){
    cout << checkPrime(2) << endl;
    cout << checkPrime(3) << endl;
    cout << checkPrime(12) << endl << endl;

    cout << nPrime(6) << endl;
    cout << nPrime(500) << endl << endl;

    cout << nextPrime(1031) << endl;
    cout << nextPrime(3559) << endl;
    cout << nextPrime(2) << endl << endl;

}