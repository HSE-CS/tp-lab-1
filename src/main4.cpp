#include "task4.h"

int main(){
    char* otvet= sum("123456789", "000000001");
    for (int i = 0; i < strlen(otvet); i++) {
        cout << otvet[i];
    }
    cout<<"\n23456790";
    return 0;
}