class Solution {
public:
    int firstMissingPositive(int a[], int n) {
        int i,j,k;
        j=0;
        for(i=0;i<n;i++)
        {
            if(a[i]>0)
            a[j++]=a[i];
        }
        for(i=0;i<j;i++)
        {
            if(a[i]-1<j)
            a[abs(a[i])-1]=-abs(a[abs(a[i])-1]);
        }
        for(i=0;i<j;i++)
        if(a[i]>0)
        return i+1;
        return j+1;
    }
};
