class Solution {
public:
    int getSum(int a, int b) {
        int ans = 0,x,y,two = 1,carry = 0,i=0;
        while(i<32){
            x = a&1;
            y = b&1;
            if((carry + x+ y)%2)
            ans += two;
            carry = (x+y+carry)>1;
            a >>= 1;
            b >>= 1;
            two <<= 1;
            i++;
        }
        if(carry)
        ans += two;
        return ans;
    }
};