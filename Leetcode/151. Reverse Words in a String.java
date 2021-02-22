class Solution {
    public String reverseWords(String s) {
        String[] tokens = s.trim().split(" ");
        int n = tokens.length;
        StringBuilder ans = new StringBuilder();
        for(int i=n-1;i>=0;i--){
            if(!tokens[i].trim().isEmpty()){
                ans.append(" ");
                ans.append(tokens[i].trim());
            }
        }
        return ans.toString().trim();
    }
}