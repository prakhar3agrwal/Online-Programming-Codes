int Solution::uniquePaths(int a, int b) {
    
    long long int i,j,k,ans=1,num=1,den=1;
    if(a<b)
    swap(a,b);
    j=b-1;
    if(j<1)
    j=1;
    for(i=a+b-2;i>=a;i--){
        
        num = num * i;
        den = den * j;
        j--;
        if(j<1)
        j=1;
        
        ans = __gcd(num,den);
        num /= ans;
        den /=ans;
    }
    
    return num/den;
}

