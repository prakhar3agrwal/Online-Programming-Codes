string Solution::countAndSay(int a) {
    
    int i,j,k,n,ct;
    if(a==1)
    return "1";
    string ans="1",x="1",temp;
    for(i=2;i<=a;i++){
        x=ans;
        ct=0;
        temp = "";ans = "";
        for(j=0;j<x.length();j++){
            if(j==0){
                temp +=x[j];
                ct=1;
            }
            else if(temp[0]==x[j])
            ct++;
            else{
                ans += to_string(ct);
                ans += temp;
                ct=1;
                temp="";
                temp +=x[j];
            }
        }
        if(ct>0){
            ans += to_string(ct)+temp;
        }
    }
    return ans;
}

