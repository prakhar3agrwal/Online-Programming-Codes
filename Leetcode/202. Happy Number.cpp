class Solution {
public:
    map<int,bool>p3a;
    int sumSquares(int n){
        int ans = 0;
        while(n>0){
            ans = ans + (n%10)*(n%10);
            n/=10;
        }
        return ans;
    }
    bool isHappy(int n) {
        if(n<1)return false;
        while(n>1){
            if(true == p3a[n])
            return false;
            p3a[n] = true;
            n = sumSquares(n);
        }
        return true;
    }
};