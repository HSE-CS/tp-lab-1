#include <iostream>
#include "task5.h"

using namespace std;

int main()
{

  char *buf="123,456,789";
  int N=0;
  char **result=nullptr;
  split(&result, &N, buf, ',');

}
