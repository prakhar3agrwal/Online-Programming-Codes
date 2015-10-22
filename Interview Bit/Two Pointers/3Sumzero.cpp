vector<vector<int> > Solution::threeSum(vector<int> &a) {
    
    int i,j,k,n;
    vector<vector<int> >ans;
    n=a.size();
    if(n<3)
    return ans;
    
    map<vector<int>,bool>p3a;
    vector<int>temp;
    
    sort(a.begin(),a.end());
    for(i=0;i<n-2;i++){
        j=i+1;k=n-1;
        while(j<=k){
            if(i!=j && j!=k && i!=k){
                if(a[i]+a[j]+a[k] > 0)
                k--;
                else if(a[i]+a[j]+a[k]<0)
                j++;
                else{
                    temp.clear();
                    temp.push_back(a[i]);
                    temp.push_back(a[j]);
                    temp.push_back(a[k]);
                    sort(temp.begin(),temp.end());
                    if(p3a[temp]==0)
                    ans.push_back(temp);
                    p3a[temp]=1;
                    j++;
                    k--;
                }
            }
            else
            j++;
        }
    }
    
    return ans;
}

