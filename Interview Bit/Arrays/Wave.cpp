vector<int> Solution::wave(vector<int> &a) {
    int i,j,k,n;
    n = a.size();
    sort(a.begin(),a.end());
    for(i=1;i<n;i+=2)
    swap(a[i],a[i-1]);
    return a;
}

