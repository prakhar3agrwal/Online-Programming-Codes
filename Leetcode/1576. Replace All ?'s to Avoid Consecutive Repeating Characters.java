class Solution {
    
    private char getChar(char prevChar, char nextChar){
        if(prevChar != 'a' && nextChar !='a'){
            return 'a';
        }
        else if(prevChar != 'b' && nextChar !='b'){
            return 'b';
        }
        return 'c';
    }
    
    public String modifyString(String s) {
        int len = s.length();
        if(1 == len){
            return s.charAt(0) != '?'?s:"a";
        }
        char prevChar = 'z';
        char nextChar = 'z';
        StringBuilder ans = new StringBuilder();
        for(int i=0;i<len;i++){
            prevChar = i > 0 ? ans.charAt(i-1) : 'z';
            nextChar = i < len-1 ? s.charAt(i+1) : 'z';
            if(s.charAt(i) == '?'){
                ans.append(getChar(prevChar, nextChar));
            }else{
                ans.append(s.charAt(i));
            }
        }
        return ans.toString();
    }
}
