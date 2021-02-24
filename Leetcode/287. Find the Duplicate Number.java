class Solution {
    public int findDuplicate(int[] nums) {
        int n = nums.length;
        for(int i=0;i<n;i++){
            int curr = Math.abs(nums[i]);
            nums[curr-1] = (-1)*nums[curr-1];
            if(nums[curr-1]>0){
                return curr;
            }
        }

        return -1;
    }
}
