#include <iostream>
#include  <vector>
#include "task4.h"


using namespace std;
int main()
{
    char *x =(char*) "123456789";
    char *y = (char*)"000000001";
    char* summa = sum(x, y);
    cout << summa << endl;
    return 0;
}