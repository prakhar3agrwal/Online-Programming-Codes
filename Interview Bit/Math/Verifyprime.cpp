int Solution::isPrime(int a) {
    
    int i;
    if(a==1)
    return 0;
    for(i=2;i<=sqrt(a);i++){
        if(a%i==0)
        return 0;
    }
    return 1;
}

