class Solution {
    public List<List<Integer>> minimumAbsDifference(int[] arr) {
        Arrays.sort(arr);
        int diff = arr[1]-arr[0];
        int n = arr.length;
        for(int i=2;i<n;i++){
            diff = Math.min(diff, arr[i]-arr[i-1]);
        }
        List<List<Integer>> ans= new ArrayList<List<Integer>>();
        for(int i=1;i<n;i++){
            if(arr[i]-arr[i-1] == diff){
                List<Integer> tupple = new ArrayList<>();
                tupple.add(arr[i-1]);
                tupple.add(arr[i]);
                ans.add(tupple);
            }
        }
        return ans;
    }
}