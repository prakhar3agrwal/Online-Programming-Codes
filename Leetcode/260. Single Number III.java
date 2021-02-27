https://leetcode.com/problems/single-number-iii/
class Solution {
    private int findXOROfArray(int[] set){
        int ans = 0;
        for(int i=0;i<set.length;i++){
            ans ^= set[i];
        }
        return ans;
    }
    
    public int[] singleNumber(int[] nums) {
        int n = nums.length;
        int xor = findXOROfArray(nums);
        int rightmostSetBit = xor & (~xor) +1;
        int num1=0;
        int num2=0;
        for(int i=0;i<n;i++){
            if((nums[i]&rightmostSetBit) == 0){
                num1 ^= nums[i];
            }else{
                num2 ^= nums[i];
            }
        }
        return new int[]{num1,num2};
        
    }
}
