class Solution {
    public String longestPalindrome(String s) {
        int n = s.length();
        if(n<2){
            return s;
        }
        int currMaxLen = 1;
        int currLeft,currRight;
        currLeft = currRight = 0;
        //odd length
        for(int i=0;i<n;i++){
            int left = i-1;
            int right = i+1;
            while(left >=0 && right<n){
                if(s.charAt(left) != s.charAt(right))
                    break;
                if(right-left+1>currMaxLen){
                    currMaxLen = right-left+1;
                    currLeft = left;
                    currRight = right;
                }
                left--;
                right++;
            }
        }
        
        //length
        for(int i=1;i<n;i++){
            if(s.charAt(i) != s.charAt(i-1)){
                continue;
            }
            if(currMaxLen <2){
                currMaxLen = 2;
                currLeft = i-1;
                currRight = i;
            }
            int left = i-2;
            int right = i+1;
            while(left >=0 && right<n){
                if(s.charAt(left) != s.charAt(right))
                    break;
                if(right-left+1>currMaxLen){
                    currMaxLen = right-left+1;
                    currLeft = left;
                    currRight = right;
                }
                left--;
                right++;
            }
        }
        StringBuilder ans = new  StringBuilder();
        for(int i=currLeft; i<=currRight;i++){
            ans.append(s.charAt(i));
        }
        return ans.toString();
    }
}
