#include "task5.h"
#include <cstdlib>
#include <iostream>
int main(){
    char buf[] = "123456,789";
    int N = 0;
    char** result = nullptr;
    split(&result, &N, buf, ',');
    std::cout <<"Buf "<<buf<<"\nResult " << (*result)[N];
    return 0;
}