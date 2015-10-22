void Solution::nextPermutation(vector<int> &a) {
    int i,j,k,n,x,in;
    n=a.size();
    k=a[n-1];
    for(i=n-2;i>=0;i--){
        if(a[i]<k)
        break;
        else
        k=max(k,a[i]);
    }//cout<<a[i]<<i<<" "<<"j";
    if(i<0){
        sort(a.begin(),a.end());
        return ;
    }
    
    x=1000000000;in=i+1;
    for(j=i+1;j<n;j++){
        if(a[j]>a[i]){
            if(x>a[j]){
                x=a[j];
                in = j;
            }
             
        }
    }//cout<<in<<" "<<a[in]<<"\n";
    swap(a[i],a[in]);
    
    sort(a.begin()+i+1, a.begin()+n);
}

