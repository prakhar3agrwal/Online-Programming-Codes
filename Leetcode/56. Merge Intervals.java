https://leetcode.com/problems/merge-intervals

class Solution {
    public int[][] merge(int[][] intervals) {
        Arrays.sort(intervals, (a,b)->Integer.compare(a[0],b[0]));
        
        int n = intervals.length;
        
        List<int[]> merged = new ArrayList<int[]>();
        int start = intervals[0][0];
        int end = intervals[0][1];
        for(int i=1;i<n;i++){
            int currStart= intervals[i][0];
            int currEnd= intervals[i][1];
            
            if(end>=currStart){
                end = Math.max(end,currEnd);
            }else{
                merged.add(new int[]{start,end});
                start = currStart;
                end = currEnd;
            }
        }
        merged.add(new int[]{start,end});
        return merged.toArray(new int[merged.size()][]);
        
        
    }
}
