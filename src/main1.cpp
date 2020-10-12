#include <iostream>
#include "task1.h"

using namespace std;

int main()
{
  unsigned int l, r;
  cin >> l >> r;
  unsigned int ans = findValue(l, r);
  cout << ans;
}
