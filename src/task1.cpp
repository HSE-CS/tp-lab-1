unsigned long findValue(unsigned int min, unsigned int max){
    unsigned long  div = max;
    unsigned int num = max;

    while (div != 0) {
        if (num % div == 0)
            div--;
        else{
            div = max;
            num++;
        }


    }
    return num;
}