class Solution {
public:
    int singleNumber(int A[], int n) {
        sort(A,A+n);
        int i,j,k;
        for(i=0;i+2<n;)
        if(A[i]!=A[i+2])
        return A[i];
        else
        i+=3;
        return A[i];
    }
};
