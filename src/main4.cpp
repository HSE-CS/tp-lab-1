#include <iostream>
#include "task4.h"

using namespace std;

int main() {
    char* x = "987654321";
    char* y = "000000005";
    char* expected = "987654326";
    char* z = sum(x, y);
    cout << z << endl;
    z[8] = '\0';
    for (int i = 0; i < sizeof(z); ++i) {
        cout << z[i] << endl;
    }
    cout << "size -- " << sizeof(z) << endl;
    cout << expected << endl;
    cout << "size -- " << sizeof(sum(x, y)) << endl;

    if ((*sum(x, y)) == (*expected)) {
        cout << "yes" << endl;
    }

}