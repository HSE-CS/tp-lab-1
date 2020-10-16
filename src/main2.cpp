#include <iostream>
#include "task2.h"
using namespace std;

int main(){
  cout << "checkPrime(1) = " << checkPrime(1) << endl;
  cout << "checkPrime(2) = " << checkPrime(2) << endl;
  cout << "checkPrime(7) = " << checkPrime(7) << endl;
  cout << "checkPrime(8) = " << checkPrime(8) << endl;

  cout << "nPrime(1) = " << nPrime(1) << endl;
  cout << "nPrime(10) = " << nPrime(10) << endl;

  cout << "nextPrime(11) = " << nextPrime(11) << endl;
  cout << "nextPrime(122) = " << nextPrime(122) << endl;
  return 0;
}
