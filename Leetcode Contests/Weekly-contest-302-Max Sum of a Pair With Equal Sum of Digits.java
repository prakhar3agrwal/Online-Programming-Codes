/*
https://leetcode.com/contest/weekly-contest-302/problems/max-sum-of-a-pair-with-equal-sum-of-digits/

You are given a 0-indexed array nums consisting of positive integers. You can choose two indices i and j, such that i != j, and the sum of digits of the number nums[i] is equal to that of nums[j].

Return the maximum value of nums[i] + nums[j] that you can obtain over all possible indices i and j that satisfy the conditions.


*/

class Solution {
    private int getSum(int num){
        int sum = 0;
        while(num>0){
            sum += num%10;
            num/=10;
        }
        return sum;
    }
    
    public int maximumSum(int[] nums) {
        Map<Integer, List<Integer>> map = new HashMap<>();
        int ans = -1;
        for(int i=0;i<nums.length;i++){
            int currSum = getSum(nums[i]);
            if(!map.containsKey(currSum)){
                map.put(currSum, new ArrayList<>());
            }
            List<Integer> list = map.get(currSum);
            list.add(nums[i]);
            map.put(currSum, list);
        }
        for(Integer currSum: map.keySet()){
            List<Integer> list = map.get(currSum);
            if(list.size()<2){
                continue;
            }
            Collections.sort(list);
            ans = Math.max(ans, list.get(list.size()-1) + list.get(list.size()-2));
        }
        return ans;
    }
}
