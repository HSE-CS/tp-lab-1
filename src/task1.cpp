#include <stdio.h>

unsigned long long findValue(unsigned int min, unsigned max){
    int len = max - min + 1;

    unsigned int *arr = new unsigned int[len];

    for(int i = 0; i < len; i++){
        arr[i] = min + i;
    }

    unsigned long long composition = 1;

    for(int i = 0; i < len; i++){
        int value = arr[i];
        composition *= value;
        for(int j = i; j < len; j += value){
            if(arr[j] % value == 0){
                arr[j] /= value;
            }
        }
        for(int i = 0; i < len; i++){
            printf("%d ", arr[i]);
        }
        printf("\n");
    }
    /*
    for(int i = 0; i < len; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");
    */
    return composition;
}
