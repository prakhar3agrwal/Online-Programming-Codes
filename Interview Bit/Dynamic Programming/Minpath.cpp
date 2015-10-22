int Solution::lis(const vector<int> &a) {
    
    int i,j,k,n,ans=1;
    n = a.size();
    if(n==0)
    return 0;
    int dp[n+1];
    dp[0]=1;
    for(i=1;i<n;i++){
        dp[i] = 1;
        for(j=0;j<i;j++)
        if(a[j]<a[i])
        dp[i] = max(dp[i], dp[j]+1);
        ans = max(ans,dp[i]);
    }
    
    return ans;
}
