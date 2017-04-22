class Solution {
public:
    int parseTime(string time){
        int ans = 0,i,j,temp=0;
        for(i=0;i<time.length();i++){
            if(time[i] >= '0' && time[i]<='9')
            break;
        }
        for(j=i;j<time.length();j++){
            if(time[j] < '0' || time[j]>'9')
            break;
            temp = temp*10 + (time[j]-'0');
        }
        ans = temp*60;
        for(i=j;i<time.length();i++){
            if(time[i] >= '0' && time[i]<='9')
            break;
        }
        temp = 0;
        for(j=i;j<time.length();j++){
            if(time[j] < '0' || time[j]>'9')
            break;
            temp = temp*10 + (time[j]-'0');
        }
        ans += temp;
        return ans;
    }
    int findMinDifference(vector<string>& timePoints) {
        int i,j,k,ans,len = timePoints.size();
        if(len < 2)
        return 0;
        vector<int>times;
        for(i=0;i<len;i++){
            times.push_back(parseTime(timePoints[i]));
        }
        sort(times.begin(),times.end());
        ans = min(times[1]-times[0], (times[0]+1440-times[1]));
        for(i=2;i<len;i++){
            ans = min(ans, times[i]-times[i-1]);
            ans = min(ans, times[i-1]+1440-times[i]);
        }
        ans = min(ans, times[0]+1440 - times[len-1]);
        return ans;
    }
};