class Solution {
public:
    double myPow(double x, int n) {
        double ans = 1, temp = x;
        bool neg = false;
        if(n<0){
            n = n*(-1);
            neg = true;
        }
        while(n>0){
            if(n&1)
            ans = ans * temp;
            temp = temp * temp;
            n >>= 1;
        }
        if(neg)
        ans = 1.0/ans;
        return ans;
    }
};