class Solution {
    private int getLastAvailableSlot(int[] freq, int curr){
        for(int i=curr;i>=0;i--){
            if(freq[i]==0){
                return i;
            }
        }
        return 0;
    }
    public int minDeletions(String s) {
        int[] freq = new int[100005];
        Map<Character,Integer> ct = new HashMap<Character,Integer>();
        int n = s.length();
        if(1==n){
            return 0;
        }
        for(int i=0;i<n;i++){
            ct.put(s.charAt(i), ct.getOrDefault(s.charAt(i),0) + 1);
        }
        int ans = 0;
        for(Character c= 'a' ;c <='z'; c++){
            int currFreq = ct.getOrDefault(c,0);
            if(0==currFreq){
                continue;
            }
            int currSlot = getLastAvailableSlot(freq, currFreq);
            ans += currFreq - currSlot;
            if(0!=currSlot){
                freq[currSlot] = 1;
            }
        }
        return ans;
    }
}
