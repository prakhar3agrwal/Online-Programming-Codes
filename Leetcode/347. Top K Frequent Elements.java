class Solution {
    public int[] topKFrequent(int[] nums, int k) {
        Map<Integer, Integer> freq = new HashMap<Integer, Integer>();
        int n = nums.length;
        for(int i=0;i<n;i++){
            int ct = 1;
            if(freq.containsKey(nums[i])){
                ct += freq.get(nums[i]); 
            }
            freq.put(nums[i],ct);
        }

        Map<Integer, List<Integer>> revFreq = new HashMap<Integer, List<Integer>>();
        for(Integer val: freq.keySet()){
            int ct = freq.get(val);
            List<Integer> vals = revFreq.get(ct);
            if(vals == null){
                vals = new ArrayList<Integer>();
            }
            vals.add(val);
            revFreq.put(ct, vals);
        }
        
        List<Integer> ans = new ArrayList<Integer>();
        for(Integer vals: revFreq.keySet()){
            List<Integer> arr = revFreq.get(vals);
            
            for(int j=0;j<arr.size();j++){
                ans.add(arr.get(j));
            }
        }
        n = ans.size();
        int[] ans1  = new int[k];
        for(int i =0;i<k;i++){
            System.out.print(ans.get(n-1-i));
           ans1[i] = ans.get(n-1-i);
        }
        return ans1;
    }
}