int Solution::uniquePathsWithObstacles(vector<vector<int> > &a) {
    
    int i,j,k,n,m,ans =0;
    int dp[105][105] = {0};
    n = a.size();
    if(n==0)
    return ans;
    m = a[0].size();
    if(a[0][0] == 1)
    dp[0][0] = 0;
    else
    dp[0][0]=1;
    for(i=1;i<m;i++){
        if(a[0][i] == 1)
        dp[0][i] = 0;
        else
        dp[0][i] = dp[0][i-1];
    }
    for(i=1;i<n;i++){
        if(a[i][0] == 1)
        dp[i][0] = 0;
        else
        dp[i][0] = dp[i-1][0];
    }
    for(i=1;i<n;i++){
        for(j=1;j<m;j++)
        if(a[i][j] == 1)
        dp[i][j] = 0;
        else{
            dp[i][j] = dp[i-1][j];
            dp[i][j] += dp[i][j-1];
        }
    }
    
    return dp[n-1][m-1];
    
}
