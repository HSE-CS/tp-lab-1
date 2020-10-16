#include <iostream>
#include <malloc.h>
#include <cstring>
#include "../include/task5.h"

using namespace std;

int main() {
    char *buf="123,456,789";
    char ch = ',';
    int N = 0;
    char **result=nullptr;
    split(&result, &N, buf, ch);
    cout<<result[0]<<endl<<result[1]<<endl<<result[2]<<endl;
    return 0;
}