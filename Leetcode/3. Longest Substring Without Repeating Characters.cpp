class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int i,j,len,n,ans=0,k=0;
        n=s.length();
        int a[300]={0};
        len=0;
        for(i=0;i<n;i++)
        {
            len++;
            a[s[i]]++;
            if(a[s[i]]>1)
            {
                for(j=k;j<i;j++)
                {
                    if(s[j]==s[i])
                    break;
                    len--;
                    a[s[j]]--;
                }
                a[s[j]]--;
                len--;
                k=j+1;
            }
            ans=max(ans,len);
        }
        return ans;
    }
};
