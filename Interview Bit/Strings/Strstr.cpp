int Solution::strStr(const string &h, const string &n) {
    
    
    int i,j,k,l1,l2;
    l1 = h.length(),l2=n.length();
    
    if(l1==0 || l2 ==0)
    return -1;
    for(i=0;i<l1-l2+1;i++){
        if(h[i]==n[0]){
            for(j=1;j<l2;j++)
            if(h[i+j]!=n[j])
            break;
            
            if(j==l2)
            return i;
        }
    }
    
    return -1;
}

