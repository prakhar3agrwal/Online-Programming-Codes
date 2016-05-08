class Solution {
public:
    int integerBreak(int n) {
        vector<int> dp;
        dp.push_back(0);
        dp.push_back(1);
        int ans = 0;
        for(int i = 2; i<=n; i++){
            ans = 0 ;
            for(int j = 1; j <= i; j++)
            ans = max(ans,max(j,dp[j])* max(i-j, dp[i-j]));
            dp.push_back(ans);
        }
        return dp[n];
    }
};
