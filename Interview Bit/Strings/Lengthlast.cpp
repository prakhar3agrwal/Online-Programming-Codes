int Solution::lengthOfLastWord(const string &a) {
    
    int i,j,k,n,ans=0;
    n=a.length();
    for(i=n-1;i>=0;i--){
        if(a[i]!=' ')
        break;
    }
    
    for(j=i;j>=0;j--){
        if(a[j]!=' ')
        ans++;
        else
        break;
    }
    
    return ans;
}

