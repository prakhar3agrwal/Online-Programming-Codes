int Solution::climbStairs(int a) {
    
    int i,j,k;
    int dp[a+1];
    if(a==0)
    return 0;
    if(a==1)
    return 1;
    if(a==2)
    return 2;
    dp[1] = 1;
    dp[2] = 2;
    for(i=3;i<=a;i++)
    dp[i] = dp[i-1]+dp[i-2];
    
    return dp[a];
}