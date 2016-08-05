class Solution {
public:
    int singleNumber(vector<int>& nums) {
        long long int ans = 0, two = 1,temp = 0, n;
        n = nums.size();
        for(int i = 1;i <= 32; i++){
            temp = 0;
            for(int j = 0 ; j<n; j++)
            temp += ((nums[j] & two)>0);
            ans += (two * (temp%3));
            two <<= 1;
        }
        
        return (int)ans;
        
    }
};