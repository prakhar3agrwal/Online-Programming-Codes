class Solution {
    public int lengthOfLongestSubstring(String s) {
        int[] freq = new int[300];
        int n = s.length();
        if(n<2){
            return n;
        }
        int ans = 1;
        int left, right;
        left = right =0;
        int currLen = 1;
        freq[s.charAt(0)]++;
        for(int i=1;i<n;i++){
            char c = s.charAt(i);
            freq[c]++;
            if(freq[c] > 1){
                while(s.charAt(left)!=c){
                    freq[s.charAt(left)]--;
                    left++;
                }
                freq[c]--;
                left++;
            }
            right++;
            ans = Math.max(ans,right-left+1);
        }
        return ans;
    }
}
