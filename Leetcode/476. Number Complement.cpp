class Solution {
public:
    int findComplement(int num) {
        if(0==num)
        return 1;
        int ans = 0;
        long int two = 1;
        while(num >0){
            if(!(num&1))
                ans += two;
            two <<= 1;
            num >>= 1; 
        }
        return ans;
    }
};