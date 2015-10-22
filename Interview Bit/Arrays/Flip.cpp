vector<int> Solution::flip(string a) {
    int i,j,k,l,curr=0,maxs=0,left,right;
    vector<int>ans;
    l = a.length();
    for(i=0;i<l;i++){
        if(a[i] == '0')
        curr++;
        else
        curr --;
        if(curr<0)
        curr = 0;
        maxs = max(maxs,curr);
    }
    left = right = 0;curr=0;
    for(i=0;i<l;i++){
        if(a[i] == '0')
        curr++;
        else
        curr --;
        if(maxs == curr){
            ans.push_back(left+1);
            ans.push_back(right+1);
            return ans;
        }
        if(curr<0){
            left = right = i+1;
            curr = 0;
            continue;
        }
        if(maxs>curr)
        right++;
    }
}

