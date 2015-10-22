int Solution::findCount(const vector<int> &a, int b) {
    
    int low,high,mid,fo=-1,lo;
    low = 0;
    high = a.size()-1;
    while(low<=high){
        mid = (low+high)/2;
        if(a[mid] == b)
        {
            fo = mid;
            high = mid-1;
        }
        else if(a[mid]<b)low = mid+1;
        else
        high = mid-1;
    }
    if(fo==-1)
    return 0;
    low=0;
    high = a.size()-1;
        while(low<=high){
        mid = (low+high)/2;
        if(a[mid] == b)
        {
            lo = mid;
            low = mid+1;
        }
        else if(a[mid]<b)low = mid+1;
        else
        high = mid-1;
    }
    
    return lo-fo+1;
}

