#include <iostream>
#include <cstring>
#include "task4.h"

int main() {
    char* x = strdup("234567");
    char* y = strdup("1");
    std::cout << sum(x, y);
    return 0;
}