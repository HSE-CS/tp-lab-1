#include <iostream>
#include "task1.h"

using namespace std;

int main() {
  unsigned int min;
  unsigned int max;
  cin >> min;
  cin >> max;
  unsigned long ans = findValue(min, max);
  if (ans) {
    cout << ans << endl;
  }
}