unsigned long findValue(unsigned int min,unsigned int max){
    for (long long i = min; ; i++)
    {
        int t=0;
        for (unsigned int j = min; j <= max; j++)
        {
            if (i%j!=0){
                t=1;
                break;
            }
        }
        if (t==0){
            return i;
        }
    }
    
}