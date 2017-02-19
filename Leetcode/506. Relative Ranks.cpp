class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& nums) {
        
        
        int len = nums.size();
        if(len == 0){
            vector<string> ans;    
            return ans;
        }
        vector<string> ans(len);
        vector<pair<int,int> > scores(len);
        for(int i=0;i<len;i++){
            scores[i].first = nums[i];
            scores[i].second = i;
        }
        sort(scores.begin(),scores.end());
        int temp = 1;
        for(int i = len-1;i>=0;i--){
            if(temp == 1){
                ans[scores[i].second] = "Gold Medal";
            }
            else if(temp == 2){
                ans[scores[i].second] = "Silver Medal";
            }
            else if(temp == 3){
                ans[scores[i].second] = "Bronze Medal";
            }
            else{
                ans[scores[i].second] = to_string(len-i);
            }
            temp ++;
            
        }
        return ans;
    }
};