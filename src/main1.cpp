/*
Написать программу, определяющую, какое самое маленькое положительное 
целое число делится на все числа из диапазона [1...20] без остатка.
 unsigned long findValue(unsigned int min,unsigned max) - функция поиска числа.
     Делители: [min..max]
   - int main()
*/

#include<iostream>
#include "task1.h"
using namespace std;

int main()
{
    //unsigned long outcome = findValue(1, 20);
    //unsigned long outcome = findValue(1, 10);
    //cout << outcome;
    unsigned long out = findValue(1,20);
    cout << out << endl;
   /* for (int i = 1; i <= 20; i++) {
        int t = (int)out / i;
        cout << i << " -> " << t << endl;
    }*/
}