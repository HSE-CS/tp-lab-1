//
// Created by sharg on 06.10.2020.
//

#include <iostream>
#include "task5.h"
using namespace std;
int main(){
    char *buf="12dfdsfsdfdsf3!df6!78231232329";
    int N=0;
    char **result=nullptr;
    split(&result, &N, buf, '!');
    cout<<result[0];
}