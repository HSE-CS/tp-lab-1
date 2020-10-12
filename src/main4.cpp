#include <iostream>
#include "task4.h"

using namespace std;

int main()
{
  char *x="123";
  char *y="1";
  char *expected="100000000000000000000";
  char *z=sum(x,y);
  for (int i = 0; z[i] != '\0'; i++)
    cout << z[i];
}
