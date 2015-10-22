int Solution::titleToNumber(string x) {
    int i,j=0,n;
    n = x.length();
    for(i=0;i<n;i++){
        j += 26*j + (x[i]-64);
    }
    
    return j;
}

