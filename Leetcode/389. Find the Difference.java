https://leetcode.com/problems/find-the-difference
class Solution {
    public char findTheDifference(String s, String t) {
        int l1 = s.length();
        int l2 = t.length();
        
        char ans = t.charAt(l2-1);
        for(int i=0;i<l1;i++){
            ans ^= (s.charAt(i)^t.charAt(i));
        }
        return ans;
    }
}
