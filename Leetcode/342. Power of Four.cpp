//checking for nums < 1 is the tricky part.

class Solution {
public:
    bool isPowerOfFour(int num) {
        if(num < 1)
        return false;
        int ct = 0;
        while(num > 1){
            ct ++;
            if(num & 1)
            return false;
            num >>= 1;
        }
        return !(ct %2);
    }
};
