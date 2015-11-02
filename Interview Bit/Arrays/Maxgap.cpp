struct node{
    int low = -1;
    int high = -1;
};
int Solution::maximumGap(const vector<int> &a) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    if(a.size()<2)
    return 0;
    int i,j,k,n,maxe,mine;
    n = a.size();
    node buckets[a.size()+1];
    maxe = *max_element(a.begin(),a.end());
    mine = *min_element(a.begin(),a.end());
    if(maxe ==  mine ) return 0;
    double interval = (double)n / (maxe - mine);
    for(int i=0; i<n; i++){
        int index = (int) ((a[i] - mine) * interval);
 
        if(buckets[index].low == -1){
            buckets[index].low = a[i];
            buckets[index].high = a[i];
        }else{
            buckets[index].low = min(buckets[index].low, a[i]);
            buckets[index].high = max(buckets[index].high, a[i]);
        }
    }
 
    //scan buckets to find maximum gap
    int result = 0;
    int prev = buckets[0].high;
    for(int i=1; i<n+1; i++){
        if(buckets[i].low != -1){
            result = max(result, buckets[i].low-prev);
            prev = buckets[i].high;
        }
 
    }
 
    return result;
}

