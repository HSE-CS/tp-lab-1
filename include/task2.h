#ifndef TASK2_H
#define TASK2_H

//- проверка числа на простоту.
bool checkPrime(unsigned int value);
//- нахождение n - ого простого числа(в ряду).
unsigned long long nPrime(unsigned n);
//-нахождение ближайшего следующего простого числа
unsigned long long nextPrime(unsigned long long value);

//Дополнительно реализовал
//Решето Эратосфена
int* sieveOfEratosphenes(int size);

#endif
