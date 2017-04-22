class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        int i,n;
        vector<int> ans;
        n = nums.size();
        for(int i=0;i<n;i++){
            if(nums[abs(nums[i])-1] > 0)
            nums[abs(nums[i])-1] *= -1;
            else
            ans.push_back(abs(nums[i]));
            
        }
        return ans;
    }
};