vector<int> Solution::maxset(vector<int> &a) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    
    long int i,j,k,n,sum,maxs,len,currlen;
    n = a.size();
    maxs=0;
    len=currlen=0;
    sum=0;
    for(i=0;i<n;i++){
        if(a[i]>=0){
            sum += a[i];
            currlen++;
        }
        else {
            currlen = 0;
            sum = 0;
        }
        if(sum>=maxs){
            if(sum == maxs)
                len = max(len,currlen);
            else
                len = currlen;
            maxs=sum;
            
        }
    }
    sum = currlen = 0;
    for(i=0;i<n;i++){
        if(a[i]>=0){
            currlen++;
            sum += a[i];
        }
        else{
            currlen = 0;
            sum = 0;
        }
        if(sum == maxs && currlen== len)
        break;
    }
    vector<int> ans;
    for(j=i-len+1;j<=i;j++)
    ans.push_back(a[j]);
    return ans;
    
}

