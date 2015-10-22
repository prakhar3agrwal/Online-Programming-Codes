int Solution::majorityElement(const vector<int> &a) {
    
    int i,j,k,n,ans;
    n = a.size();
    j = 1;
    ans = a[0];
    for(i=1;i<n;i++){
        if(a[i] == ans)
        j++;
        else if(a[i]!=ans){
            j--;
        }
        if(j<0){
            j = 1;
            ans = a[i];
        }
    }
    return ans;
    
    
}

