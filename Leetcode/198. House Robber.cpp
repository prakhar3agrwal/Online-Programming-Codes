class Solution {
public:
    int rob(vector<int> &num) {
        int i,j,n,ans=0;
        n=num.size();
        int dp[n+1];
        dp[0]=0;
        if(n>0)
            dp[1]=num[0];
        else
            return 0;
        for(i=1;i<n;i++){
            dp[i+1] = max(dp[i-1]+num[i] , dp[i]);
        }
        
        return dp[n];
    }
};
