#include<stack>
class Solution {
public:
    bool isValid(string s) {
        int i,j,k,open[3]={0};
        k=s.length();
        stack<char>temp;
        char ch;
        for(i=0;i<k;i++)
        {
            if(s[i]=='(' || s[i]=='[' || s[i]=='{')
            temp.push(s[i]);
            else if(s[i]==')' || s[i]==']' || s[i]=='}')
            {
                if(!temp.empty())
                {
                    ch=temp.top();
                    temp.pop();
                    if((s[i]==')' && ch=='(') || (s[i]=='}' && ch=='{') || (s[i]==']' && ch=='['))
                       {}
                    else
                    return false;
                    
                }
                else
                return false;
            }
        }
        if(temp.empty())
        return true;
        return false;
        
    }
};
