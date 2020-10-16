#define _CRT_SECURE_NO_WARNINGS
#include <algorithm>
#include <iostream>
#include <cstdlib>
#include <ctime>
#include "task3.h"
#include "task2.h"
using namespace std;

unsigned long long sumPrime(unsigned int hbound) {
    
  unsigned long long c = 2;
  unsigned long long sum = 2;
    
  c = nextPrime(c);
  
  while(c < hbound) {
      
    sum += c;
    c = nextPrime(c);
      
  }
    
  return sum;

}

