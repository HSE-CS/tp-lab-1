#include "task5.h"

int main(){
    char buf[] = "13413,3446,3745735,2455";
    int N = 0;
    char **result = nullptr;
    split(&result, &N, buf, ',');
    cout << N;
    return 0;
}