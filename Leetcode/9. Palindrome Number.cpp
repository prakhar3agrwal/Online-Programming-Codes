class Solution {
public:
    bool isPalindrome(int x) {
        int i,j,k=1,n=1;
        if(x<0)
        {
            n=-1;
            x*=(-1);
        }
        k=x;j=0;
        while(k>0)
        {
            j=j*10+k%10;
            k/=10;
        }
        if(n==-1)
        return false;
        return (x==j);
        
    }
};
