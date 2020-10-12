#include "task5.h"

int main(){
    char *buf="123,456,789";
    int N=0;
    char **result=nullptr;
    split(&result, &N, buf, ',');
    cout <<N;
    cout <<"\n";
    cout <<result[0];
    cout <<"\n";
    cout <<result[1];
    cout <<"\n";
    cout <<result[2];
    return 0;
}