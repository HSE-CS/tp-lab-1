#include <iostream>
#include "task5.h"


int main() {
    char **res;
    char *string = "Hello world!";
    int num = 0;
    char ch = ' ';
    split(&res, &num, string, ch);
    for(int i = 0; i < num; ++i){
        for(int j = 0; j < strlen(res[i]); ++j){
            std::cout << res[i][j];
        }
        std::cout << std::endl;
    }
    return 0;
}
