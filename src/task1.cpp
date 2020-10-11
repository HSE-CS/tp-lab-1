#include <algorithm>
#include <iostream>
#include <cstdlib>
#include "task1.h"

using namespace std; 

unsigned int gcd(unsigned int a,unsigned int b) {
  int t=0;
  while (b != 0) {
    t = b;
    b = a % b;
    a = t;
  }
  return a;
}

unsigned long nok(unsigned int a, unsigned int b){
    
    return (a*b)/gcd(a,b);
}

unsigned long findValue(unsigned int min,unsigned max){
    unsigned int t=nok(min,min+1);
    for (int i=min+1; i<max;i++){
        t=nok(t,i+1);
    }
    return t;
}
