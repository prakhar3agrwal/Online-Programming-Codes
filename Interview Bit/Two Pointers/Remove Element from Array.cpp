int Solution::removeElement(vector<int> &a, int b) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    
    int i,j,n;
    n = a.size();
    j = 0;
    for(i=0;i<n;i++){
        if(a[i] !=b)
            a[j++] = a[i];
    }
    return j;
    
}
