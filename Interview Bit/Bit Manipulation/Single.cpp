int Solution::singleNumber(const vector<int> &a) {
    
    int i,ans = 0;
    for(i=0;i<a.size();i++)
    ans ^= a[i];
    return ans;
}

