int Solution::lengthOfLongestSubstring(string a) {
    int i,j,k,n,ans=0;
    n = a.length();
    map<int,int>p3a;j=0;
    for(i=0;i<n;i++){
        if(p3a[a[i]]==0)
        p3a[a[i]]=1;
        else{
            while(j<i){
                if(a[j] == a[i])
                break;
                p3a[a[j]]=0;
                j++;
            }
            j++;
        }
        
        ans = max(ans, i-j+1);
    }
    
    return ans;
}

