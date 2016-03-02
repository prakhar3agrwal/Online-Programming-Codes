class Solution {
public:
    int removeDuplicates(int a[], int n) {
        int i,j,k;
        j=1;k=1;
        if(n==0)
        return 0;
        for(i=1;i<n;i++){
            if(a[i]==a[i-1])
            k++;
            else
            k=1;
            if(k<=2)
            {
                a[j]=a[i];
                j++;
            }
        }
        return j;
    }
};
