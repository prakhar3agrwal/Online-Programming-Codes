int Solution::reverse(int a) {
    
    long long int r=1,n=0,ma,mi;
    if(a<0){
        r=-1;
        a = -a;
    }
    
    while(a>0){
        n = n*10+a%10;
        a/=10;
    }
    n = n*(long long int)r;
    
    if(n>INT_MAX || n< INT_MIN)
    n=0;
    return (int)n;
}

