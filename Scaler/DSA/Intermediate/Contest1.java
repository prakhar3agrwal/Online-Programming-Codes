//Nobel Integer

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


//Divisibility by 7
public class Solution {
    public int[] solve(int[] A, int[][] B) {
        int n = A.length;
        int m = B.length;
        int[] ans = new int[m];
        
        if(A[0]%7 == 0){
            A[0]=1;
        }else{
            A[0]=0;
        }
        for(int i=1;i<n;i++){
            if(A[i]%7==0){
                A[i] = A[i-1]+1;
            }
            else{
                A[i] = A[i-1];
            }
        }
        
        for(int i=0;i<m;i++){
            int l = B[i][0];
            int r = B[i][1];
            int currAns = A[r];
            if(l!=0){
                currAns -= A[l-1];
            }
            
            ans[i] = currAns;
        }
        return ans;
    }
}
