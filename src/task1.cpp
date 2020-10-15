#include "task1.h"

unsigned long findValue(unsigned int min, unsigned int max) {
    vector<int> arr;
    for (int i = min; i <= max; i++) {
        arr.push_back(i);
    }
    int N = arr.size();
    long a, b;
    long res = arr[0];
    for (int i = 1; i < N; i++) {
        a = res;
        b = arr[i];
        while (a - b != 0) {
            if (a > b)
                a -= b;
            else
                b -= a;
        }
        res = (res * arr[i]) / a;
    }
    return res;
}