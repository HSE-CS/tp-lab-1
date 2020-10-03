//
// Created by Vadim Makarov on 03.10.2020.
//

#include <iostream>
#include "task4.h"

using namespace std;

int main(){
    char *x="123456789";
    char *y="000000001";
    char *expected="123456790";
    cout << sum(x, y) << endl;
    cout << expected << endl;
    cout << "size -- " << sizeof(sum(x, y)) << endl;

    if ((*sum(x, y)) == (*expected)){
        cout << "yes" << endl;
    }



}

