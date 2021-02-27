https://leetcode.com/problems/missing-number/submissions/
class Solution {
    public int missingNumber(int[] nums) {
        int n = nums.length;
        int ans = n;
        for(int i=0;i<n;i++){
            ans ^= nums[i]^i;
        }
        return ans;
    }
}
