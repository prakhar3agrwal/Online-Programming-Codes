class Solution {
public:
    int removeElement(int a[], int n, int elem) {
        int i,j,k=0;
        j=0;
        for(i=0;i<n;i++)
        {
         if(a[i]!=elem)
         {
             a[j]=a[i];
             j++;
         }
        }
        return j;
    }
};
