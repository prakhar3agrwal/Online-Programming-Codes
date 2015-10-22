vector<int> Solution::twoSum(const vector<int> &a, int b) {
    int i,j,k,n;
    n=a.size();
    vector<int>ans;
    map<int,int>p3a;
    p3a[a[0]]=1;
    for(i=1;i<n;i++){
        if(p3a[b-a[i]]>0){
            ans.push_back(i+1);
            ans.push_back(p3a[b-a[i]]);
            sort(ans.begin(),ans.end());
            return ans;
        }
        else if(p3a[a[i]] == 0)
        p3a[a[i]]=i+1;
    }
}

