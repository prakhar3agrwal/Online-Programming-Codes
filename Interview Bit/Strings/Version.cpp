string parse(string x){
    if(x.length()==1)
    return x;
    int i,j;
    string y="";
    for( i=0;i<x.length();i++)
    if(x[i]!='0')
    break;
    if(i==x.length())
    return "0";
    for( j=i;j<x.length();j++)
    y+=x[j];
    return y;
}

int tell(string x,string y){
    if(x.length()!=y.length()){
        if(x.length()>y.length())
        return 1;
        else
        return -1;
    }
    if(x==y)
    return 0;
    else
    if(x>y)return 1;
    return -1;
}

int Solution::compareVersion(string a, string b) {
    
    int i,j,k,l1,l2;
    l1=a.length();
    l2=b.length();
    vector<string>x;
    vector<string>x1;
    string y="";
    for(i=0;i<l1;i++){
        if(a[i]=='.')
        {
            
            x.push_back(parse(y));
            y="";
        }
        else
        y+=a[i];
    }
    if(y!="")
    x.push_back(parse(y));
    
     y="";
    for(i=0;i<l2;i++){
        if(b[i]=='.')
        {
            
            x1.push_back(parse(y));
            y="";
        }
        else
        y+=b[i];
    }
    if(y!="")
    x1.push_back(parse(y));
    
    for(i=0;i<min(x.size(),x1.size());i++){
        if(tell(x[i],x1[i])==1)
        return 1;
        else if(tell(x[i],x1[i])==-1)
        return -1;
    }
    
    if(x.size() == x1.size())
    return 0;
    if(x.size()>x1.size()){
        for(i=x1.size();i<x.size();i++)if(x[i]!="0")
        return 1;
        return 0;
    }
    if(x1.size()>x.size()){
        for(i=x.size();i<x1.size();i++)if(x1[i]!="0")
        return -1;
        return 0;
    }
}

