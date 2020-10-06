//
// Created by sharg on 06.10.2020.
//

#include <iostream>
#include "task5.h"
using namespace std;
int main(){
    char *buf="123,456,789";
    int N=0;
    char **result=nullptr;
    split(&result, &N, buf, ',');
    cout<<result[1]<<"\n"<<N;
}