int Solution::findRank(string a) {
    int i,j,k,l;
    long long int ans = 0;
    l = a.length();
    vector<long long int> fact;
    fact.push_back(1);
    fact.push_back(1);
    for(i=2; i<l;i++)
    fact.push_back((fact[i-1]*i)%1000003);
    int dp[270] = {0};
    for(i=0;i<l;i++)
    dp[(int)a[i]]++;
    for(i=1;i<=269;i++)
    dp[i] += dp[i-1];
    for(i=0;i<l;i++){
        ans = (ans + (dp[(long long int)a[i]-1] * fact[l-i-1])%1000003)%1000003;
        k = a[i];
        for(j=k; j<=269; j++)
        dp[j]--;
    }
    
    return ans+1;
}

