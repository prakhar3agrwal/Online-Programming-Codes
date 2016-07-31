class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& a, int k) {
        int i,n;
        map<int,int> p3a;
        n = a.size();
        for(i=0;i<n;i++){
            if(p3a[a[i]] == 0)
            p3a[a[i]] = i+1;
            else{
                if(i+1 - p3a[a[i]] <=k)
                return true;
                p3a[a[i]] = i+1;
            }
        }
        return false;
    }
};