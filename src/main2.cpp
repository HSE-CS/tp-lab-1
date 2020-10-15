#include "task2.h"
#include <iostream>

using namespace std;

int main() {

    setlocale(LC_ALL, "rus");

    if (checkPrime(2) == true)
         cout << "Число является простым" << endl;
    else cout << "Число не является простым" << endl;

    cout << nPrime(2) << endl;
    cout << "Ближайшее простое число "<< nextPrime(7) << endl;
    return 0;
}