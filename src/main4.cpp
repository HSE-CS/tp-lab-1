#include <iostream>
#include "task4.h"

int main() {
    char *ans = sum("8500","2000");
    for (int i = 0; i < strlen(ans); ++i){
        std::cout << ans[i];
    }
    return 0;
}
