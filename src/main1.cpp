#include <iostream>
#include "task1.h"

using namespace std;

int main() {
  unsigned int min; unsigned max;
  cin >> min >> max;
  unsigned long ans =  findValue(min,max);
  cout << ans << endl;
}