#include "task5.h"
#include <iostream>
using namespace std;
int main()
{
    //char **ptrarray = new char* [];
    char *buf="123,456,789";
    int N=0;
    char **result=nullptr;
    split(&result, &N, buf, ',');
    cout << result[2];
    return 0;
}