map<string,int> parse(string x,int m){
    int i,j,k,l;
    l = x.length();
    map<string ,int > temp;
    for(i=0;i<l;i+=m){
        temp [x.substr(i,m)] ++;
    }
    return temp;
}

bool tell(map<string,int>x, map<string,int> y){
    if(x.size()!=y.size())
    return false;
    map<string,int> ::iterator it1,it2;
    it1 = x.begin(), it2 = y.begin();
    while(it1!=x.end() && it2!=y.end()){
        if((it1->first != it2->first) || (it1->second!= it2->second))
        return false;
        it1++,it2++;
    }
    return true;
}
vector<int> Solution::findSubstring(string a, const vector<string> &b) {
    
    int i,j,k,n,l,m;
    n = b.size();
    vector<int>ans;
    if(n==0)
    return ans;
    m = b[0].length();
    map<string,int> p3a, temp;
    for(i=0;i<n;i++)
    p3a[b[i]] ++;
    l = a.length();
    string y = "";
    for(i=0;i<l-(n*m)+1;i++){
        y = a.substr(i, n*m);
        temp = parse(y, m);
        if(tell (p3a,temp))
        ans.push_back(i);
    }
    return ans;
}

