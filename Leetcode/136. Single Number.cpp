class Solution {
public:
    int singleNumber(int A[], int n) {
        int i=A[0],j;
        for(j=1;j<n;j++)
        i=i^A[j];
        return i;
    }
};
