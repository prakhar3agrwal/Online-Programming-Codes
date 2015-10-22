int Solution::removeDuplicates(vector<int> &a) {
    
    int i,j,k,n;
    n=a.size();
    sort(a.begin(),a.end());
    j=1;
    for(i=1;i<n;i++){
        if(a[i]==a[i-1]){
            continue;
        }
        else{
            a[j]=a[i];
            j++;
        }
        
    }
    
    return j;
}

