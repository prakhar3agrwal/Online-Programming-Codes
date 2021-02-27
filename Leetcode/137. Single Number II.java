https://leetcode.com/problems/single-number-ii
class Solution {
    public int singleNumber(int[] nums) {
        int ans = 0;
        int n = nums.length;
        int two = 1;
        for(int i=1;i<=32;i++){
            int ct = 0;
            for(int j=0;j<n;j++){
                if((nums[j]&two) !=0){
                    ct++;
                }
            }
            ans += (ct%3 !=0) ? two:0;
            two <<=1;
        }
        return ans;
    }
}
