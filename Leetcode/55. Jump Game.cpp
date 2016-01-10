class Solution {
public:
    bool canJump(int A[], int n) {
        int i,j,k;
        k=A[0];
        for(i=1;i<n;i++)
        {
            if(i<=k)
            {
                k=max(k,i+A[i]);
            }
        }
        if(k>=n-1)
        return true;
        return false;
    }
};
