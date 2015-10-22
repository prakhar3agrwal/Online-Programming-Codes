vector<int> Solution::repeatedNumber(const vector<int> &a) {
    
    
    int i,j,ab=0,n,rb,k=0;
    n=a.size();
    ab=1^a[0];
    for(i=1;i<n;i++){
        ab = ab^(i+1)^a[i];
    }
    rb=ab;
    rb = rb&~(rb-1);j=k=0;
    for(i=0;i<n;i++){
        if((i+1)&rb )
        k = k^(i+1);
        else
        j=j^(i+1);
        if(a[i]&rb )
        k = k^a[i];
        else
        j=j^a[i];
        
    }
    
   
    int f=0;
    for(i=0;i<n;i++){
        if(a[i] == k){
            f=1;
        }
    }
    if(f==0)
    swap(j,k);
    vector<int>ans;
    ans.push_back(k);
    ans.push_back(j);
    return ans;
    
    
}

