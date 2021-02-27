https://leetcode.com/problems/first-missing-positive/
class Solution {
    public int firstMissingPositive(int[] a) {
        int n = a.length;
        int i,j,k;
        j=0;
        for(i=0;i<n;i++)
        {
            if(a[i]>0)
            a[j++]=a[i];
        }
        for(i=0;i<j;i++)
        {
            if(Math.abs(a[i])-1<j){
                int ind = Math.abs(a[i])-1;
                if(ind>=0){
                    a[ind]=-Math.abs(a[ind]);        
                }
            }
        }
        for(i=0;i<j;i++)
        if(a[i]>0)
        return i+1;
        return j+1;
    }
}
