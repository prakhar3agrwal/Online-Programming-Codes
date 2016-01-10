/*
Take care of repetition. If no is repeated then we need not insert it because it will not increase the length of our subsequence
*/

#include <set>
class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        set<int>ans;
        set<int> ::iterator it;
        for(int i=0;i<nums.size();i++){
            it = ans.find(nums[i]);
            if(it!=ans.end())
            continue;
            ans.insert(nums[i]);
            it = ans.find(nums[i]);
            it++;
            if(it != ans.end())
            ans.erase(it);
        }
        return ans.size();
    }
};