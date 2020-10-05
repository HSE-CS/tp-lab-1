bool checkPrime(unsigned int n){
    for(int i=2;i<= n/2;i++) 
        if( (n%i)==0 ) return false;
    return true;
}

unsigned long long nPrime(unsigned int n){
    int k=0;
    for(int i=2;;i++)    
        if(checkPrime(i)){
            k++;
            if(k==n)
            return i;
        }
    return 1;
}

unsigned long long nextPrime(unsigned long long n){
    n++;
    for(;;n++)    
        if(checkPrime(n)){
            return n;
        }
    return 1;
}
