#include <iostream>
#include <cstring>
#include "task5.h"

using namespace std;


int main() {

    setlocale(LC_ALL, "rus");
    char buf[] = "3333;555456;67653231;56787654;3576798;1;234;45;77";
    int N = 0;
    char** result = nullptr;
    split(&result, &N, buf, ';');
    cout <<"Количество подстрок "<< N << endl;
    for (int i = 0; i < N; i++)
    {
        cout << result[i] << endl;
        
    }
    return 0;
}