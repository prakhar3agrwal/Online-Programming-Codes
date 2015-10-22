vector<int> Solution::plusOne(vector<int> &a) {
    int i,j,k,r,n;
    k=1;
    n=a.size();
    for(i=0;i<n/2;i++)
    swap(a[i],a[n-1-i]);
    
    r=1;
    for(i=0;i<n;i++){
        k=(a[i]+r);
        r=k/10;
        a[i] = k%10;
    }
    vector<int>ans;
    for(i=0;i<n;i++)
    ans.push_back(a[i]);
    if(r>0)
    ans.push_back(r);
    n=ans.size();
    for(i=0;i<n/2;i++)
    swap(ans[i],ans[n-1-i]);
    for(i=0;i<n;i++)
    if(ans[i]>0)break;
    vector<int>x;
    for(j=i;j<n;j++)
    x.push_back(ans[j]);
    return x;
}
