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
    unsigned int otvet = min;
    for(unsigned int i=1;i<(max-min); i++){
        unsigned int peremennai = min+i;
        otvet=nok(otvet,peremennai);
    }
    return otvet;
}
