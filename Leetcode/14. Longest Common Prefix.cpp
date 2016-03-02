class Solution {
public:
    string longestCommonPrefix(vector<string> &strs) {
        sort(strs.begin(),strs.end());
        int i,j,k=0,n;
        string ans="";
        n=strs.size();
        if(n==0)
        return "";
        for(i=0;i<strs[0].length();i++)
        {
            for(j=1;j<n;j++)
            if(strs[j][i]!=strs[0][i])
            {
                k=1;
                break;
            }
            if(k==1)
            break;
            else
            ans+=strs[0][i];
        }
        return ans;
        
    }
};
