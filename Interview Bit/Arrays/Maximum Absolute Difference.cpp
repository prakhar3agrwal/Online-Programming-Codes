
int Solution::maxArr(vector<int> &a) {
    
    int i,j,k,n,ans,ind;
    n = a.size();
    vector<int>sum,diff;
    for(i=0;i<n;i++){
        sum.push_back(a[i]+i);
        diff.push_back(a[i]-i);
    }
    sort(sum.begin(),sum.end());
    sort(diff.begin(),diff.end());
    ans = abs(sum[n-1]-sum[0]);
    ans = max(ans,  abs(diff[n-1]-diff[0]));
    return ans;
}
