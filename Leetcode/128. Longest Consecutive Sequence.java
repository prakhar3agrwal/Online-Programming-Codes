class Solution {
    public int longestConsecutive(int[] nums) {
        int n = nums.length;
        int ans = 0;
        Set<Integer> set = new HashSet<Integer>();
        for(int num: nums){
            set.add(num);
        }
        for(int num: set){
            if(!set.contains(num-1)){
                int currMax = 1;
                int currNum = num+1;
                while(set.contains(currNum)){
                    currNum++;
                    currMax++;
                }
                ans = Math.max(ans, currMax);
            }
        }
        return ans;
    }
}
