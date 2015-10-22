int Solution::numSetBits(unsigned int a) {
    
    int ans=0;
    while(a>0){
        if(a&1)
        ans++;
        a/=2;
    }
    return ans;
}

