class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int ans = 0,i;
        for(i=0;i<nums.size();i++)
        ans = ans ^ nums[i] ^ i;
        ans ^= nums.size();
        return ans;
    }
};
