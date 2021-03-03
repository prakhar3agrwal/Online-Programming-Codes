https://leetcode.com/problems/meeting-rooms-ii

class Solution {
    public int minMeetingRooms(int[][] intervals) {
        int n = intervals.length;
        Integer[] start = new Integer[n];
        Integer[] end = new Integer[n];
        for(int i =0;i<n;i++){
            start[i] = intervals[i][0];
            end[i] = intervals[i][1];
        }
        Arrays.sort(start, (a,b)->Integer.compare(a,b));
        Arrays.sort(end, (a,b)->Integer.compare(a,b));
        int ans = 1;
        int startInd = 1;
        int endInd = 0;
        int currVal = 1;
        while(startInd<n && endInd<n){
            if(start[startInd]<end[endInd]){
                currVal++;
                startInd++;
            }else if(start[startInd]>end[endInd]){
                currVal--;
                endInd++;
            }else{
                startInd++;
                endInd++;
            }
            ans = Math.max(ans,currVal);
        }
        return ans;
    }
}
