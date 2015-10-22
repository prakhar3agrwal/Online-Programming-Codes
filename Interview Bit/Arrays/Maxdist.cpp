int Solution::maximumGap(const vector<int> &a) {
    int i,j,k,ans,n;
    n=a.size();
    int mina[n], maxa[n];
    mina[0]=a[0];
    maxa[n-1]=a[n-1];
    for(i=1;i<n;i++)
    mina[i] = min(a[i],mina[i-1]);
    for(i=n-2;i>=0;i--)
    maxa[i] = max(a[i],maxa[i+1]);
    i=0;j=0,ans=-1;;
    while(i<n && j<n){
        if(mina[i]>maxa[j])
        i++;
        else{
            ans = max(ans,j-i);
            j++;
        }
        
    }
    
    return ans;
    
}

