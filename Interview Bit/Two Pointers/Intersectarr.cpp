vector<int> Solution::intersect(const vector<int> &a, const vector<int> &b) {
    int i,j,k,n1,n2;
    n1=a.size(),n2=b.size();
    vector<int>ans;
    i=j=0;
    while(i<n1 && j<n2){
        if(a[i] == b[j])
        {
            ans.push_back(a[i]);
            i++,j++;
        }
        else if(a[i]<b[j])
        i++;
        else
        j++;
    }
    
    return ans;
}

