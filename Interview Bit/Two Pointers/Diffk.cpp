int Solution::diffPossible(vector<int> &a, int b) {
    int i,j,k,n;
    n=a.size();
    if(n<2)
    return 0;
    if(b<0){
        b=-b;
    }
        i=n-1;
        j=n-2;
        while(1){
            if(a[i]-a[j]>b)
            i--;
            else if(a[i]-a[j]<b)
            j--;
            else return 1;
            if(j<0 || i<0)
            return 0;
            if(i==j)
            j--;
        }
    
    
}

