int dp[2000][2000];
int solve(int start, int end, vector<int> &a){
    if(start> end)
    return 0;
    if(start == end)
    return a[start];
    else if(dp[start][end] != -1)
    return dp[start][end];
    
    int x = a[start] + min(solve(start + 2, end, a), solve(start+1, end-1,a));
    int y = a[end] + min(solve(start, end-2, a), solve(start+1, end-1,a));
    dp[start][end] = max(x,y);
    return dp[start][end];
}

int Solution::maxcoin(vector<int> &a) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    int i,j,k,n;
    n = a.size();
    //int dp[n][n];
    for(i=0;i<n;i++){
        for(j=0;j<n;j++)
        dp[i][j] = -1;
    }
    
    return (solve(0,n-1,a));
}

