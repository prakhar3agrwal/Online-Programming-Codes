class Solution {
public:

    map<vector<int>,bool>p3a;
    void _do(int start,vector<int>&num,vector<vector<int> >&ans )
    {
        if(start>=num.size())
        return;
        vector<int>temp;
        for(int i=start;i<num.size();i++)
        {
            swap(num[start],num[i]);
            temp.clear();
            for(int j=0;j<num.size();j++)
            temp.push_back(num[j]);
            if(p3a[temp]==0)
            ans.push_back(temp);
            p3a[temp]=1;
            _do(start+1,num,ans);
            swap(num[start],num[i]);
        }
    }
    vector<vector<int> > permute(vector<int> &num) {
        vector<vector<int> >ans;

        (_do(0,num,ans));
        return ans;
    }
};
