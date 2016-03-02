class Solution {
public:
    int climbStairs(int n) {
        vector<int>dp;
        int i,j,k;
        dp.push_back(0);
        dp.push_back(1);
        dp.push_back(2);
        for(i=3;i<=n;i++)
        dp.push_back(dp[i-1]+dp[i-2]);
        return dp[n];
    }
};
