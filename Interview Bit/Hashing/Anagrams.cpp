vector<vector<int> > Solution::anagrams(const vector<string> &a) {
    int i,j,k,n;
    n=a.size();
    string x="";
    map<string,bool>m1;
    map<string , vector<int> > m2;
    map<string , vector<int> > ::iterator it;
    vector<vector<int> > ans;
    for(i=0;i<n;i++){
        x=a[i];
        sort(x.begin(),x.end());
        if(m1[x] == 0){
            m1[x]=1;
            m2[x].clear();
            m2[x].push_back(i+1);
        }
        else
        {
            m2[x].push_back(i+1);
        }
    }
    for(it=m2.begin();it!=m2.end();it++){
        ans.push_back(it->second);
    }
    return ans;
    
}

