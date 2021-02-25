class Solution {
    public int[] twoSum(int[] nums, int target) {
        int n = nums.length;
        List<Pair<Integer,Integer>> vals = new ArrayList<Pair<Integer,Integer>>();
        for(int i=0;i<n;i++){
            vals.add(new Pair(nums[i],i));
        }
        Collections.sort(vals, (v1,v2)-> v1.getKey().compareTo(v2.getKey()));
        int left = 0;
        int right = n-1;
        while(left<right){
            int currSum = vals.get(left).getKey() + vals.get(right).getKey();
            if(currSum == target){
                return new int[] {vals.get(left).getValue(),vals.get(right).getValue()};
            }
            else if(currSum < target){
                left++;
            }
            else{
                right--;
            }
        }
        return new int[]{};
    }
}
