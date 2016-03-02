class Solution {
public:
    void merge(int A[], int m, int B[], int n) {
        int i,j,k;
        if(m>0)
        for(i=m-1;i>=0;i--)
        A[i+n]=A[i];
        if(m==0)
        {
            for(i=0;i<n;i++)
            A[i]=B[i];
            return;
        }
        if(n==0)
        {
            return;
        }
        k=0;
        i=0;j=n;
        while(i<n && j<m+n)
        {
            if(B[i]<A[j])
            {
                A[k]=B[i];
                k++;
                i++;
            }
            else
            {
                A[k]=A[j];
                k++;
                j++;
            }
        }
        while(i<n)
        {
            A[k]=B[i];
            k++;
            i++;
            
        }
        while(j<m+n)
        {
            A[k]=A[j];
            k++;
            j++;
        }
    }
};
