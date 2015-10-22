int Solution::repeatedNumber(const vector<int> &a) {
    
    int i,n;
    n=a.size();
    string f="";
    for(i=0;i<n;i++)f+="0";
    for(i=0;i<n;i++){
        if(f[a[i]-1] =='0')
        f[a[i]-1] = '1';
        else
        return a[i];
    }
