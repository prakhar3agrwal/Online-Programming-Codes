class Solution {
public:
    int removeDuplicates(int a[], int n) {
        int i,j,k;
        if(n<2)
        return n;
        j=1;
        for(i=1;i<n;i++)
        {
            if(a[i]!=a[i-1])
            {
                a[j]=a[i];
                j++;
            }
        }
        return j;
    }
};
