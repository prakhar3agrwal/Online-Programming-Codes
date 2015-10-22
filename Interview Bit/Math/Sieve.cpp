vector<int> Solution::sieve(int a) {
    
    int i,j,k;
    
    vector<int>ans;
    if(a<2)
    return ans;
    
    vector<int> prime(a+10, 0);
    prime[2]=0;
    for(i=2;i<=a;i++){
        if(prime[i]==0){
            ans.push_back(i);
            for(j=2; j*i<=a; j++)
            prime[i*j]=1;
        }
        
    }
    return ans;
}

