#include <iostream>
#include "task5.h"
using namespace std;

int main(){
    char *buf="123,456,789";
    int N=0;
    char **result=nullptr;
    split(&result, &N, buf, ',');
    cout << N << endl;
    for (int i=0;i<3;i++){
        cout << result[i] << endl;
    }
    return 0;
}