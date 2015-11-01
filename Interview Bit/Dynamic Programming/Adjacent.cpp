int Solution::adjacent(vector<vector<int> > &a) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    
    int i,j,k,n;
    n = a[0].size();
    vector<int>dp;
    for(i=0;i<n;i++)
    dp.push_back(max(a[0][i],a[1][i]));
    int ans[2][n+1];
    memset(ans,0,sizeof(ans));
    for(i=1;i<=n;i++){
        ans[0][i] = max(ans[0][i-1], ans[1][i-1]);  //exclude
        ans[1][i] = dp[i-1]+ans[0][i-1];
    }
    
    return max(ans[0][n], ans[1][n]);
    
}

