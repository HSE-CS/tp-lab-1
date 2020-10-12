#include <task1.h>
int nok(int a, int b)
{
    int max = b;
    for(int i = max; i > 0; i++){

        if((i % a == 0) && (i % b == 0)){
            return i;
        }
    }
}
unsigned long findValue(unsigned int min,unsigned max){
    int otvet = min;
    for(int i=1;i<(max-min); i++){
        int peremennai = min+i;
        otvet=nok(otvet,peremennai);
    }
    return otvet;
}
