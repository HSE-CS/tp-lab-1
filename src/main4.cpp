#include <iostream>
#include  <vector>
#include "task4.h"


using namespace std;
int main()
{
    char *x =(char*) "99843745563785";
    char *y = (char*)"4337387872387823";
    char* summa = sum(x, y);
    cout << summa << endl;
    return 0;
}