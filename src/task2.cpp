#include "task2.h"

bool checkPrime(unsigned int value) {
  for (unsigned int i = 2; i < value; i++) {
    if (value % i == 0) {
      return false;
    }
  }
  return true;
}
unsigned long long nPrime(unsigned n) {
  int count = 0;
  unsigned int i = 2;
  while (count != n) {
    if (checkPrime(i)) {
      count++;
    }
    i++;
  }
  return i - 1;
}
unsigned long long nextPrime(unsigned long long value) {

  int i = 2;
  while (1) {

    if (checkPrime(i) && i > value) {
      return i;
    }
    i++;

  }

}
