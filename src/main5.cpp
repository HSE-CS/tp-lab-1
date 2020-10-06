//
// Created by islam on 07.10.2020.
//

#include "task5.h"

int main(){
    int N = 0;
    char **result = nullptr;

    split(&result, &N, "123,456,789", ',');
    return 0;
}