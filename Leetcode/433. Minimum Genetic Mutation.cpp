class Solution {
public:
    bool isPresent(vector<string>& bank, string value){
        if (std::find(bank.begin(), bank.end(),value)!=bank.end())
            return true;
        return false;
    }
    
    char chars[4] = {'A', 'G', 'C', 'T'};
    void dfs(vector<string>& bank, vector<string>blocked, string value, int level, int &ans, string end){
        string temp = value;
        for(int i =0;i<4;i++){
            for(int j=0;j<temp.length();j++){
                temp = value;
                temp[j] = chars[i];
                if(isPresent(bank, temp) && !isPresent(blocked, temp)){
                    if(end == temp){
                        ans = min(ans,level);
                    }
                    vector<string>newBlocked(blocked.begin(), blocked.end());
                    newBlocked.push_back(temp);
                    dfs(bank,newBlocked, temp, level+1, ans, end);
                }
            }
        }
    }
    
    int minMutation(string start, string end, vector<string>& bank) {
        int i,j,k,ans;
        if(!isPresent(bank,end))
            return -1;
        ans = INT_MAX;
        vector<string> blocked;
        blocked.push_back(start);
        dfs(bank, blocked, start, 1, ans, end);
        if(INT_MAX == ans)
        ans = -1;
        return ans;
        
    }
};