#include "task2.h"
#include <iostream>

using namespace std;

int main() {

    setlocale(LC_ALL, "rus");

    if (checkPrime(2) == true)
         cout << "����� �������� �������" << endl;
    else cout << "����� �� �������� �������" << endl;

    cout << nPrime(2) << endl;
    cout << "��������� ������� ����� "<< nextPrime(7) << endl;
    return 0;
}