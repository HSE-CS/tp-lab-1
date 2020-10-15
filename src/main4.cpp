#include "task4.h"

int main() {
    char* x = "99999999999999";
    char* y = "1";
    char* z = sum(x, y);
    int i = 0;
    while (*(z + i) != '\0')
    {
        cout << *(z + i);
        i++;
    }
}