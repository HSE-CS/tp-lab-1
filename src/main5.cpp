//
// Created by Vadim Makarov on 03.10.2020.
//

#include <iostream>
#include "task5.h"

using namespace std;

int main(){
    char *buf="123,456,789";
    int N=0;
    char **result=nullptr;
    split(&result, &N, buf, ',');

    cout << result[0] << endl;
    cout << result[1] << endl;
    cout << result[2] << endl;
    cout << N << endl;

    for (int i = 0; i < 10; i++)
    {
        delete[] result[i];
    }
    delete[] result;

}