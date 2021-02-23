class Solution {
    public String getHint(String secret, String guess) {
        Map<Integer, Integer> ct = new HashMap<Integer, Integer>();
        int n = secret.length();
        int bulls = 0;
        int cows = 0;
        for(int i=0;i<n;i++){
            if(secret.charAt(i) == guess.charAt(i)){
                bulls++;
            }else{
                int corr = secret.charAt(i) - '0';
                int inCorr = guess.charAt(i) - '0';
                ct.put(corr, ct.getOrDefault(corr,0) + 1);
                ct.put(inCorr+10, ct.getOrDefault(inCorr+10,0) + 1);
            }
        }
        for(int i=0;i<10;i++){
            cows+= Math.min(ct.getOrDefault(i,0),ct.getOrDefault(i+10,0));
        }
        String ans = Integer.toString(bulls) + "A" + Integer.toString(cows) + "B";
        return ans;
    }
}
