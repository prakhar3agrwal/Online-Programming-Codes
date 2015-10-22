string Solution::findDigitsInBinary(int a) {
    
    int i;
    if(a==0)
    return "0";
    string ans ="";
    while(a>0){
        if(a&1)
        ans+="1";
        else
        ans+="0";
        a/=2;
    }
    for(i=0;i<ans.size()/2;i++)
    swap(ans[i],ans[ans.size()-i-1]);
    
    return ans;
}

