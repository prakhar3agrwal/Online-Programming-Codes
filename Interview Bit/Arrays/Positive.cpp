int find(vector<int> &a, int size ){
    int i;
        for(i=0;i<size;i++){
        if(abs(a[i])-1 < size  && a[abs(a[i]) - 1] > 0)
         a[abs(a[i]) - 1] = -a[abs(a[i]) - 1];
    }
    
    for(i = 0; i < size; i++)
    if (a[i] > 0)
      return i+1; 
      
    return size+1;
     
}


int Solution::firstMissingPositive(vector<int> &a) {
    int i,j,k,n;
    n=a.size();
    j=0;
    for(i=0;i<n;i++){
        if(a[i]<0){
            swap(a[i],a[j]);
            j++;
        }
    }
    // vector <int>b;
    // for(i=j;i<n;i++)
    //     b.push_back(a[i]);
    a.erase (a.begin(),a.begin()+j);
    
    return(find(a,n-j));

}

