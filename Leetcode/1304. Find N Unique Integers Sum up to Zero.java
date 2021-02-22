class Solution {
    public int[] sumZero(int n) {
        int[] ans = new int[n];
        if(n%2 !=0){
        ans[n-1]=0;
        n--;
        if(n==0){
            return ans;
        }    
        }
        
        for(int i=0;i<n;i+=2){
            ans[i] = i+1;
            ans[i+1] = (-1)*(i+1);
        }
        return ans;
    }
}