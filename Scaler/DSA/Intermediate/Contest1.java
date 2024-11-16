public class Solution {
    public int solve(int[] A) {
        int ans = 0;
        Arrays.sort(A);
        int n = A.length;
        int largeElementCount = 0;
        
        if(A[n-1]==0){
            ans++;
        }
        for(int i=n-2;i>=0;i--){
            if(A[i] != A[i+1]){
                largeElementCount = n-1-i;
            }
            
            if(largeElementCount == A[i]){
                ans++;
            }
        }
        return ans>0?1:-1;
    }
}

//-6 -4 -2 -1 0
