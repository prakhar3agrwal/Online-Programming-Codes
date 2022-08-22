class Solution {
    public String largestPalindromic(String num) {
        int[] freq = new int[10];
        for(int i=0;i<num.length();i++){
            freq[num.charAt(i)-'0']++;
        }
        
        StringBuilder prefix = new StringBuilder();
        StringBuilder suffix = new StringBuilder();
        
        int odd = -1;
        for(int i=1;i<=9;i++){
            if(freq[i]%2!=0){
                odd = i;
            }
            int ct = freq[i]/2;
            for(int j=0;j<ct;j++){
                prefix.insert(0,(char)('0'+i));
                suffix.append((char)('0'+i));
            }
        }
        if(odd == -1 && prefix.length()==0){
            return "0";
        }
        if(odd == -1 && freq[0]%2!=0){
            odd = 0;
        }
        int ct = freq[0]/2;
        if(prefix.length()>0){
            for(int j=0;j<ct;j++){
            suffix.insert(0,(char)('0'));
            prefix.append((char)('0'));
            }    
        }
        
        if(odd != -1){
            prefix.append((char)(odd + '0'));
        }
        prefix.append(suffix);
        return prefix.toString();
    }
}
