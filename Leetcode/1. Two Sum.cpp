class Solution {
public:
    vector<int> twoSum(vector<int> &numbers, int target) {
      
        int i,j,k,n;
        n=numbers.size();
        vector<pair<int,int> >p3a(n);
        for(i=0;i<n;i++)
        {
            p3a[i].first=numbers[i];
            p3a[i].second=i;
        }
        sort(p3a.begin(),p3a.end());
        i=0;j=n-1;
        vector<int>ans;
        while(i<j)
        {
            if(p3a[i].first+p3a[j].first==target)
            {
                ans.push_back(p3a[i].second+1);
                ans.push_back(p3a[j].second+1);
                sort(ans.begin(),ans.end());
                return ans;
            }
            else if(p3a[i].first+p3a[j].first>target)
            j--;
            else
            i++;
            
        }
        
    }
};
