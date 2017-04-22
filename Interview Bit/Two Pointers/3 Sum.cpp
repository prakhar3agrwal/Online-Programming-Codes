int Solution::threeSumClosest(vector<int> &a, int b) {
    
    sort(a.begin(),a.end());
    int i,j,k,n,ans,diff=1000000000;
    n=a.size();
    for(i=0;i<n-2;i++){
        j = i+1;k = n-1;
        while(j<k){
            int temp = a[i]+a[j]+a[k]-b;
            if(abs(temp)<diff){
                ans=a[i]+a[j]+a[k];
                diff = abs(temp);
            }
            if(temp>0)
            k--;
            else j++;
        }
    }
    
    return ans;
}
