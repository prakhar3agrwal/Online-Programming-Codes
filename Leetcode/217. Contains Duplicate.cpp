class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        map<int,int> ans;
        for(int i=0;i<nums.size();i++)
        ans[nums[i]]++;
        return (!(nums.size()==ans.size()));
    }
};
