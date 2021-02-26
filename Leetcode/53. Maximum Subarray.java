class Solution {
    public int maxSubArray(int[] nums) {
        int n = nums.length;
        if(n==1){
            return nums[0];
        }
        int ans = nums[0];
        int currMax = nums[0];
        for(int i=1;i<n;i++){
            if(currMax + nums[i] >= nums[i]){
                currMax = currMax + nums[i];
            }else{
                currMax = nums[i];
            }
            ans = Math.max(ans, currMax);
        }
        return ans;
    }
}
