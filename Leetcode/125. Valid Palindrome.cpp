class Solution {
public:
    bool isPalindrome(string s) {
        int i,j,k;
        string x="";
        k=s.length();
        for(i=0;i<k;i++)
        if((s[i]>=65 && s[i]<=90)||(s[i]>=97 && s[i]<=122) || (s[i]>=48 && s[i]<=57))
        {
            if(s[i]<=90)
            x+=char(s[i]+32);
            else
            x+=s[i];
        }
        k=x.length();
        for(i=0;i<k/2;i++)
        if(x[i]!=x[k-1-i])
        return false;
        return true;
        
    }
};
