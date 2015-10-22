int Solution::maxSubArray(const vector<int> &a) {
    int i,n,j,k,sum=0,temp,ans;
    n = a.size();
    if(n==0)
    return 0;
    temp = sum = ans= j= a[0];

    for(i=1;i<n;i++){
        temp +=a[i];
        j = max(j,a[i]);
        ans = max(ans,temp);
        if(temp<0)temp=0;
    }
    
    if(j<0)ans=j;
    
    return ans;
    
}
