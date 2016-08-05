class Solution {
public:
    vector<int> singleNumber(vector<int>& a) {
        int i,j,k,n,aXORb = 0,x,y;
        x = y = 0;
        n  = a.size();
        vector<int>ans;
        if(n==0)
        return ans;
        for(i=0;i<n;i++)
        aXORb ^= a[i];
        k = aXORb & (-aXORb);
        for(i=0;i<n;i++){
            if(a[i]&k)
            x ^= a[i];
            else
            y ^= a[i];
        }
        ans.push_back(x);
        ans.push_back(y);
        return ans;
    }
};