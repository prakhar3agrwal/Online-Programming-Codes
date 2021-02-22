class Solution {
    public boolean canPermutePalindrome(String s) {
        Map<Character, Integer> ct = new HashMap<>();
        int evenCt = 0;
        int oddCt = 0;
        for(int i=0;i<s.length();i++){
            int freq = 1;
            if(ct.containsKey(s.charAt(i))){
                freq+= ct.get(s.charAt(i));
            }
            ct.put(s.charAt(i), freq);
        }
        for(Character c: ct.keySet()){
            if(ct.get(c)%2 ==0){
                evenCt++;
            }else{
                oddCt++;
            }
        }
        if(oddCt >1){
            return false;
        }
        return true;
    }
}