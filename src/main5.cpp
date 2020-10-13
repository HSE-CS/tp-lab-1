#include "task5.h"
#include <iostream>

int main(){
    const char *line = "split|me|like|one|of|your|french | lines";
    int N;
    char **splits;
    split(&splits, &N, line, '|');
    for (int i = 0; i < N; ++i){
        std::cout << "[" << i << "]" << splits[i] << '\n';
        free(splits[i]);
    }
    free(splits);
    return 0;
}