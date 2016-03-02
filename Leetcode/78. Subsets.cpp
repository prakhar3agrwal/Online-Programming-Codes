class Solution {
public:
    vector<vector<int> > subsets(vector<int> &s) {
        int i,j,k,n;
        n=s.size();
        k=n;
        n=1<<n;
        i=0;
        vector<int>ans;
        vector<vector<int> >Ans;
        while(i<n)
        {
            j=i;
            k=0;
            while(j>0)
            {
                if(j%2)
                ans.push_back(s[k]);
                k++;
                j/=2;
            }
            sort(ans.begin(),ans.end());
            Ans.push_back(ans);
            ans.clear();
            i++;
        }
        return Ans;
        
    }
};
