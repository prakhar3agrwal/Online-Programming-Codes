/*

https://leetcode.com/contest/weekly-contest-302/problems/maximum-number-of-pairs-in-array/

You are given a 0-indexed integer array nums. In one operation, you may do the following:

Choose two integers in nums that are equal.
Remove both integers from nums, forming a pair.
The operation is done on nums as many times as possible.

Return a 0-indexed integer array answer of size 2 where answer[0] is the number of pairs that are formed and answer[1] is the number of leftover integers in nums after doing the operation as many times as possible.
*/

class Solution {
    public int[] numberOfPairs(int[] nums) {
        int[] f = new int[101];
        for(int num:nums){
            f[num]++;
        }
        int pairs = 0;
        for(int i=0;i<101;i++){
            pairs += (f[i]/2);
        }
        return new int[]{pairs, nums.length-2*pairs};
    }
}
