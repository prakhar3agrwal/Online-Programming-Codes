int Solution::candy(vector<int> &r) {
    int i,j,k,n,ans=0;
    n = r.size();
    vector<int>left = vector<int>(n,1);
    vector<int>right = vector<int>(n,1);
    
    for(i=1;i<n;i++)
    if(r[i]>r[i-1])
    left[i] = left[i-1]+1;

    
 
    for(i=n-2;i>=0;i--)
    if(r[i]>r[i+1])
    right[i] = right[i+1]+1;

    
    for(i=0;i<n;i++)
    ans += max(left[i],right[i]);
    return ans;
    
}

