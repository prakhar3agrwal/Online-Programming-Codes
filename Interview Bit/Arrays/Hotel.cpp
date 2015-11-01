bool Solution::hotel(vector<int> &a, vector<int> &d, int k) {
    int i,j,n,ans=0;;
    n = a.size();
    sort(a.begin(),a.end());
    sort(d.begin(),d.end());
    vector<int>::iterator low,up;
    for(i=0;i<n;i++){
        up= upper_bound (d.begin(), d.end(), a[i]);
        j = (up - d.begin());
        ans = max(ans, i+1 - j );
    }
    if(ans > k)
    return 0;
    return 1;
}

