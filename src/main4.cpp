#include <iostream>
#include "../include/task4.h"

using namespace std;


int main(){

     char* sum1 = sum((char*)"784", (char*)"1");

     int i=0;
     while (sum1[i] != '\0') {
         cout << sum1[i];
         i++;
     }


    return 0;
}