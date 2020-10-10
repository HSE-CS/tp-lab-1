#include <iostream>
#include <cmath>
using namespace std;

//- проверка числа на простоту.
bool checkPrime(unsigned int value) { 
	for (long long divizor = 2; divizor <= sqrt(value); divizor++)
	{
		if (value % divizor == 0) return false;
	}
	return true;
}

//Решето Эратосфена
int* sieveOfEratosphenes(int size) {
    int* simple_table = new int[size] {0};
    int number = 0;
    for (int i = 2; i < size; i++)
    {
        simple_table[i] = i;
    }
    for (int p = 2; p < size; p++)
    {
        if (simple_table[p] != 0)
        {
            for (int j = 2 * p; j < size; j += p) {//обнуляем все числа, кратные данному
                simple_table[j] = 0;
            }
        }
    }
    return simple_table;
}

//- нахождение n - ого простого числа(в ряду).
unsigned long long nPrime(unsigned n){ 
    unsigned long long simple_num(0);
    int* simple_table = sieveOfEratosphenes(10000000);
    for (int i = 2; i < 10000000 && n > 0; i++) {
        if (simple_table[i] != 0) {
            n--;
            simple_num = simple_table[i];
        }
    }
    delete[] simple_table;
    return simple_num;
}

//-нахождение ближайшего следующего простого числа
unsigned long long nextPrime(unsigned long long value){
    unsigned long long simple_num(0);
    int* simple_table = sieveOfEratosphenes(10000000);
    for (unsigned long long i = value + 1; i < 10000000; i++) {
        if (simple_table[i] != 0) {
            simple_num = simple_table[i];
            delete[] simple_table;
            return simple_num;
        }
        else continue;
    }
}