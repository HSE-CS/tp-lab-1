#include <iostream>
#include "task5.h"
using namespace std;

int main(){

    char **result = nullptr;
    int N = 0;
    char *buf = (char*)"   hello world     ok";
    char ch = ' ';

    split(&result, &N, buf, ch);

    printf("%s:%s:%s", result[0], result[1], result[2]);

    //cout << result[0] << ":" << result[1] ":" << result[2] << endl;

    return 0;
}
