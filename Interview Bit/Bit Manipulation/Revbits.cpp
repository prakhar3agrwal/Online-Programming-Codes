unsigned int Solution::reverse(unsigned int a) {
    
    unsigned int ans=0,two=1<<31;
    while(a>0){
        ans += two*(a&1);
        a/=2;
        two >>=1;
    }
    
    return ans;
}

