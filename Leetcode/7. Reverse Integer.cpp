class Solution {
public:
    int reverse(int x) {
        int i,j=0,k=1;
        if(x<0)
        {
            k=-1;
            x=x*(-1);
        }
        while(x>0)
        {
            j=j*10+x%10;
            x/=10;
        }
        
        j*=k;
        return j;
    }
};
