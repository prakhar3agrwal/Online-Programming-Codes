class Solution {
    public String generateTheString(int n) {
        StringBuilder ans = new StringBuilder();
        if(n%2 == 0){
            ans.append("a");    
            n--;
        }
        for(int i=0;i<n;i++){
            ans.append("b");    
        }
        return ans.toString();
    }
}