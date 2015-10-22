vector<int> Solution::getRow(int n) {
    vector<int> ans;
    int i,j,k;
    ans.push_back(1);
    if(n==0)
    return ans;
    if(n==1){
          ans.push_back(1);
          return ans;
    }
    ans.push_back(2);
    ans.push_back(1);
    
    if(n==2)
    return ans;
    vector<int>temp;
    
    for(i=3;i<=n;i++){
        temp = ans;
        ans.clear();
        ans.push_back(1);
        for(j=1;j<temp.size();j++){
            ans.push_back(temp[j]+temp[j-1]);
        }
        ans.push_back(1);
    }
    
    return ans;
    
    
}

