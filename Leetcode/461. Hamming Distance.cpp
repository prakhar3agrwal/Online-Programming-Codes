class Solution {
public:
    int hammingDistance(int x, int y) {
        x ^= y;
        int ans = 0;
        while(x>0){
            ans += (x&1);
            x >>= 1;
        }
        return ans;
    }
};