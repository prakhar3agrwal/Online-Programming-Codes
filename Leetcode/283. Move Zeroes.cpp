class Solution {
public:
    void moveZeroes(vector<int>& a) {
        int i,j,k,n;
        n = a.size();
        j  = 0;
        for(i=0;i<n;i++){
            if(a[i]!=0)
            a[j++] = a[i];
        }
        for(i=j;i<n;i++)
        a[i]=0;
    }
};