int Solution::removeDuplicates(vector<int> &a) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    int i,j,k,n;
    n=a.size();
    j=1;int ct=0;
    for(i=1;i<n;i++){
        if(a[i]==a[i-1]){
            ct++;
        }
        else ct=0;
        if(ct >=2)
        continue;
        else{
            a[j]=a[i];
            j++;
        }
        
    }
    
    return j;
}
