class Solution {
    private int getMinDeletionCost(int[] cost, int startIndex, int endIndex){
        if(startIndex == endIndex){
            return 0;
        }   
        int maxCost = cost[startIndex];
        int total = cost[startIndex];
        for(int i=startIndex+1;i<=endIndex;i++){
            maxCost = Math.max(maxCost, cost[i]);
            total += cost[i];
        }
        return total-maxCost;
    }
    
    public int minCost(String s, int[] cost) {
        int n = s.length();
        if(1==n){
            return 0;
        }
        int ans = 0;
        Character lastChar = s.charAt(0);
        int startIndex = 0;
        int endIndex = 0;
        for(int i=1;i<n;i++){
            Character currChar = s.charAt(i);
             if(!currChar.equals(lastChar)){
                 ans += getMinDeletionCost(cost, startIndex, endIndex);
                 startIndex = endIndex = i;
                 lastChar = currChar;
                 //System.out.println(currChar + " " + lastCh)
             }else{
                 endIndex++;
             }
        }
        ans += getMinDeletionCost(cost, startIndex, endIndex);
        return ans;
    }
}
