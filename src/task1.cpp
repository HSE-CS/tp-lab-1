unsigned long findValue(unsigned int min,unsigned max){

    unsigned long value = max;
    bool trueValue = false;

    while (!trueValue){
        for (unsigned int i = min; i <= max; ++i) {
            if(value % i != 0){
                value++;
                break;
            }else if(i == max){
                trueValue = true;
            }
        }
    }
    return value;
}