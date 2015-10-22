vector<int> Solution::allFactors(int a) {
    
    int i,j,k;
    vector<int > ans;
    for(i=1;i<=sqrt(a);i++){
        if(a%i==0){
            ans.push_back(i);
            if(i==sqrt(a) && sqrt(a)*sqrt(a) ==a)
            continue;
            ans.push_back(a/i);
        }
    }
    sort(ans.begin(),ans.end());
    return ans;
}

