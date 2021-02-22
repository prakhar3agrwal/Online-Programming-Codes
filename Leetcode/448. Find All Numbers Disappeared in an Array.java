class Solution {
    public List<Integer> findDisappearedNumbers(int[] nums) {
        List<Integer> ans = new ArrayList<Integer>();
        int n = nums.length;
        if(0==n){
            return ans;
        }
        for(int i=0;i<n;i++){
            if(nums[i]<=n){
                nums[Math.abs(nums[i])-1] = (-1)*Math.abs(nums[Math.abs(nums[i])-1]); 
            }
        }
        for(int i=0;i<n;i++){
            if(nums[i]>0){
                ans.add(i+1);
            }
        }
        return ans;
    }
}
