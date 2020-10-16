#include <algorithm>
#include <iostream>
#include "task2.h"
//- �������� ����� �� ��������.
bool checkPrime(unsigned int value) {
    if (value > 1) {
        for (long long i = 2; i <= sqrt(value); i++) {
            if (value % i == 0) {
                return false;
            }
        }
        return true;

    }
    else return false;
}
//- ���������� n - ��� �������� �����(� ����)		
unsigned long long nPrime(unsigned n) {
    unsigned int count = 0;
    bool found = false;
    int num = -1;
    int k = 2;
    while (!found) {
        int dels = 0;
        for (int i = 2; i < k; i++) {
            if (k % i == 0) {
                dels++;
            }
        }
        if (dels == 0) {
            count++;
            if (count == n) {
                found = true;
                num = k;
                break;
            }
        }
        k++;
    }
    return num;

}
//- ���������� ���������� ���������� �������� ����� � value.
unsigned long long nextPrime(unsigned long long value) {
    long long result = value + 1;
    while (1) {
        int k = 0;
        for (int i = 2; i < result; i++) {
            if (result % i == 0) {
                k++;
            }
        }
        if (k > 0) {
            result++;
        }
        else return result;
    }
}