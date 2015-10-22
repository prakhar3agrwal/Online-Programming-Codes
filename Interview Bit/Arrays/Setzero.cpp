void Solution::setZeroes(vector<vector<int> > &a) {
    int i,j,k,n,m,fc=0,fr=0;
    n = a.size();
    m = a[0].size();
    
    for(i=0;i<n;i++)
    if(a[i][0] ==0)
    fc=1;
    
    for(i=0;i<m;i++)
    if(a[0][i] ==0)
    fr=1;
    
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            if(a[i][j] == 0){
                a[i][0]=2;
                a[0][j]=2;
            }
        }
    }
    
    for(i=1;i<n;i++){
        if(a[i][0]==2){
            for(j=1;j<m;j++)
            a[i][j]=0;
        }
    }
    
    for(j=1;j<m;j++){
        if(a[0][j]==2){
            for(i=1;i<n;i++)
            a[i][j]=0;
        }
    }
    
    if(fr ==1)
    for(i=0;i<m;i++)
    a[0][i]=0;
    
    if(fc ==1)
    for(i=0;i<n;i++)
    a[i][0]=0;
    
    for(i=0;i<n;i++)
    if(a[i][0]==2)
    a[i][0]=0;
    
    for(i=0;i<m;i++)
    if(a[0][i]==2)
    a[0][i]=0;
    
}

