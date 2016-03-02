class Solution {
public:
    int maxProfit(vector<int> &prices) {
        int buy,sell,i,n,ans=0;
        n=prices.size();
        if(n==0)
        return ans;
        buy=sell=0;
        i=0;
        while(i<n)
        {
            while(i<n-1 && prices[i+1]<=prices[i])
            i++;
            if(i==n-1)
            break;
            buy=i;
            i++;
            while(i<n && prices[i]>=prices[i-1])
            i++;
            ans+=prices[i-1]-prices[buy];
        }
        return ans;
    }
};
