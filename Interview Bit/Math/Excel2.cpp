string Solution::convertToTitle(int a) {
    
    int i,j,k;
    string ans = "";
    while(a>0){
        j = a%26;
        if(j==0)
        j=26;
        ans += char(64 + j);
        j = a/26;
        if(a%26 ==0 )
        j--;
        
        a=j;
    }
    for(i=0;i<ans.length()/2;i++)
    swap(ans[i],ans[ans.length()-1-i]);
    return ans;
}

