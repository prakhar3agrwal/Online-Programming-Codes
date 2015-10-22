int Solution::sqrt(int a) {
    
    long long int i,j,k,low,high,mid,ans;
    low=0,high=a;
    while(low<=high){
        mid = low + (high-low)/2;
        if(mid*mid == a)
        return mid;
        else if(mid*mid < a){
            low = mid+1;
            ans = mid;
        }
        else
        high = mid-1;
    }
    
    return ans;
}

