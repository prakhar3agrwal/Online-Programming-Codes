vector<vector<int> > Solution::diagonal(vector<vector<int> > &a) {
    int i,j,k,n,m;
    vector<vector<int> > ans;
    n = a.size();
    if(n==0)
    return ans;
    m = a[0].size();
    for(i=0;i<2*n-1;i++){
        vector<int>temp;
        temp.clear();
        ans.push_back(temp);
    }
    
    
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            ans[i+j].push_back(a[i][j]);
        }
    }
    return ans;
}

