https://leetcode.com/problems/product-of-array-except-self/submissions/
class Solution {
    public int[] productExceptSelf(int[] nums) {
        int n = nums.length;
        int[] output = new int[n]; 
        output[0]=1;
        for(int i=1;i<n;i++){
            output[i] = output[i-1]*nums[i-1];
        }
        int right = nums[n-1];
        for(int i=n-2;i>=0;i--){
            output[i] = output[i]*right;
            right *= nums[i];
        }
        return output;
    }
}
