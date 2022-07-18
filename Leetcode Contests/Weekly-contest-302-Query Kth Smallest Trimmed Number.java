/*
https://leetcode.com/contest/weekly-contest-302/problems/query-kth-smallest-trimmed-number/

You are given a 0-indexed array of strings nums, where each string is of equal length and consists of only digits.

You are also given a 0-indexed 2D integer array queries where queries[i] = [ki, trimi]. For each queries[i], you need to:

Trim each number in nums to its rightmost trimi digits.
Determine the index of the kith smallest trimmed number in nums. If two trimmed numbers are equal, the number with the lower index is considered to be smaller.
Reset each number in nums to its original length.
Return an array answer of the same length as queries, where answer[i] is the answer to the ith query.

Note:

To trim to the rightmost x digits means to keep removing the leftmost digit, until only x digits remain.
Strings in nums may contain leading zeros.

*/

class Solution {
    
    private List<Pair<String, Integer>> getStringsInSortedOrder(String[] nums, int len){
        int n = nums.length;
        int initLen = nums[0].length();
        List<Pair<String, Integer>> list = new ArrayList<>();
        for(int i=0;i<n;i++){
            StringBuilder x = new StringBuilder(nums[i].substring(initLen-len));
            while(x.length()>0){
                if(x.charAt(0) == '0'){
                   x.deleteCharAt(0);
                }else{
                   break;
                }
            }
            list.add(new Pair(x.toString(), i));
        }
        
        Collections.sort(list, (a,b)->{
                StringBuilder x = new StringBuilder(a.getKey());
                StringBuilder y = new StringBuilder(b.getKey());
                
                if(x.length()!=y.length()){
                    return x.length()-y.length();
                }
                if(x.toString().equals(y.toString())){
                    return a.getValue()-b.getValue();
                }
                return x.toString().compareTo(y.toString());
            });
        return list;
    }
    public int[] smallestTrimmedNumbers(String[] nums, int[][] queries) {
        int m = queries.length;
        int n = nums.length;
        int len = nums[0].length();
        int[] ans = new int[m];
        
        for(int i=0;i<m;i++){
            int trim = queries[i][1];
            int kSmallest = queries[i][0];
            List<Pair<String, Integer>> list = getStringsInSortedOrder(nums, trim);
            ans[i] = list.get(kSmallest-1).getValue();
        }
        return ans;
    }
}
