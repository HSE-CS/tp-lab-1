#include <iostream>
#include "task1.h"


int main() {
    int min;
    int max;

    std::cout << "Insert min of the range:";
    std::cin >> min;
    std::cout << "Insert max of the range:";
    std::cin >> max;

    std::cout << "\nAnswer: " << findValue(min,max) << std::endl;

    return 0;
}

