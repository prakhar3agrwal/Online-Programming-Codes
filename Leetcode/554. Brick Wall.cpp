class Solution {
public:
    int leastBricks(vector<vector<int>>& wall) {
        int n,m,i,j;
        long long int sum;
        map<long long int, long long int> pm;
        n = wall.size();
        if(0==n)
        return 0;
        long long int key=0, value=0;
        for(i = 0; i<n;i++){
            sum = 0;
            for(j=0;j<wall[i].size();j++){
                sum += wall[i][j];
                pm[sum]++;
                if(pm[sum]>value && j < wall[i].size()-1){
                    value = pm[sum];
                    key = sum;
                }
            }
        }
        return n - value;
    }
};