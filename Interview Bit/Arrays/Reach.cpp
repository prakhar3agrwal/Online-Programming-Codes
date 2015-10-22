// Input : X and Y co-ordinates of the points in order. 
// Each point is represented by (X[i], Y[i])
int Solution::coverPoints(vector<int> &x, vector<int> &y) {
    int i,j,k,n,ans=0,a,b;
    n = x.size();
    for(i=1;i<n;i++){

        j = x[i] - x[i-1];
        k = y[i] - y[i-1];
        if(j<0)
        j = -j;
        if(k<0)
        k = -k;
        a = min(j,k);
        ans += a;
        j -= a;
        k -= a;
        ans += (j+k);
    }
    return ans;
}

