int Solution::cntBits(vector<int> &a) {
    long long mod = 1000000007;
    long long  i,j,k, ans=0, two,x,y;
    two = 1;
    for(i=0;i<32;i++){
        x = y = 0;
        for(j=0;j<a.size();j++){
            if(a[j]&two)
            x++;
            else
            y++;
        }
        ans = (ans + ((x*y)))%mod;
        two <<= 1;
    }
    ans = (ans*2)%mod;
    return ans;
}

