int Solution::singleNumber(const vector<int> &a) {
    
    long long int i,j,k,ans=0,n,x;
    int k1=0;
    n=a.size();
    k = 0;
    
    for(i=0;i<32;i++){
        x=0;
        k = 1<<i;
        for(j=0;j<n;j++){
            if(a[j]&k)
            x++;
        }
        if(x%3)
        ans |= k;
    }
    
    return ans;
}

