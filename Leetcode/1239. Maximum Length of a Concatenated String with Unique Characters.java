class Solution {
    private int isUnique(List<String>vals){
        if(null == vals || vals.isEmpty()){
            return -1;
        }
        Map<Character, Integer> mp = new HashMap<Character,Integer>();
        int sum = 0;
        for(String str:vals){
            int len = str.length();
            sum += len;
            for(int i=0;i<len;i++){
                Character c = str.charAt(i);
                int currVal = mp.getOrDefault(c, 0);
                if(currVal > 0){
                    return -1;
                }
                mp.put(c,1);
            }
        }
        return sum;
    }

    
    int ans = 0;
    private void generateString(List<String> arr, List<String> currList, int ind){
        ans  = Math.max(ans, isUnique(currList));
        if(ind == arr.size()){
            return;
        }
        currList.add(arr.get(ind));
        generateString(arr, currList, ind+1);
        
        currList.remove(currList.size()-1);
        generateString(arr, currList, ind+1);
        
    }
    public int maxLength(List<String> arr) {
        generateString(arr, new ArrayList<String>(), 0);
        return ans;
    }
}
