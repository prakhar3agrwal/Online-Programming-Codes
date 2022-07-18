/*

https://leetcode.com/contest/weekly-contest-302/problems/minimum-deletions-to-make-array-divisible/

You are given two positive integer arrays nums and numsDivide. You can delete any number of elements from nums.

Return the minimum number of deletions such that the smallest element in nums divides all the elements of numsDivide. If this is not possible, return -1.

Note that an integer x divides y if y % x == 0.
*/

class Solution {
    
    private int gcd(int a, int b)
    {
      if (b == 0)
        return a;
      return gcd(b, a % b);
    }
    
    public int minOperations(int[] nums, int[] numsDivide) {
        int n = numsDivide.length;
        int arrayGcd = numsDivide[0];
        for(int i=1;i<n;i++){
            arrayGcd = gcd(arrayGcd, numsDivide[i]);
        }
        Arrays.sort(nums);
        int deletions = 0;
        for(int i=0;i<nums.length;i++){
            if(arrayGcd%nums[i]!=0){
                deletions++;
            }else{
                break;
            }
        }
        if(deletions == nums.length){
            deletions = -1;
        }
        return deletions;
    }
}
