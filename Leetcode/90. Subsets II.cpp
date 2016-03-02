class Solution {
public:
    vector<vector<int> > subsetsWithDup(vector<int> &s) {
        int i,j,k,n;
        n=s.size();
        k=n;
        n=1<<n;
        i=0;
        vector<int>ans;
        vector<vector<int> >Ans;
        map<vector<int>,bool>p3a;
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
            if(p3a[ans]==0)
            Ans.push_back(ans);
            p3a[ans]=1;
            ans.clear();
            i++;
        }
        return Ans;
    }
};
