class Solution {
public:
    int maxSubArray(int A[], int n) {
        int i,j,k,ans,cs;
        ans=cs=A[0];
        for(i=1;i<n;i++)
        {
            if(cs<0)
            cs=0;
            cs+=A[i];
            ans=max(ans,cs);
        }
        return ans;
    }
};
