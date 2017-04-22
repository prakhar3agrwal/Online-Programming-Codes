class Solution {
public:
    int mySqrt(int x) {
        int low = 0, high = x, mid = 0, ans=0;
        while(low <= high){
            mid = (low+high)/2;
            if((long long int)mid * (long long int)mid == x)
            return mid;
            else if ((long long int)mid * (long long int)mid < x){
             low = mid +1;
             ans = mid;
            }
            else high = mid-1;
        }
        return ans;
    }
};