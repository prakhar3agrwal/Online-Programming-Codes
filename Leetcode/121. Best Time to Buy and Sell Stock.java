class Solution {
    public int maxProfit(int[] prices) {
        int ans = 0;
        int n = prices.length;
        if(1==n){
            return 0;
        }
        int minVal = prices[0];
        for(int i=1;i<n;i++){
            if(prices[i]>minVal){
                ans = Math.max(ans, prices[i]-minVal);
            }else{
                minVal = prices[i];
            }
        }
        return ans;
    }
}
