#include <iostream>
#include <cstring>
#include "task4.h"
using namespace std;

int main(){
    char* res = sum("123456789", "000000001");
    for (int i = 0; i < strlen(res); ++i) {
        cout << res[i];
    }
    return 0;
}


