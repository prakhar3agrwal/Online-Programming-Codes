int Solution::canJump(vector<int> &a) {
    int i,j,k,n;
    n = a.size();
    j = a[0];
    for(i=1;i<n;i++){
        if(i<=j)
        j = max(j,i+a[i]);
    }
    
    return (j>=n-1 ? 1:0);
}
