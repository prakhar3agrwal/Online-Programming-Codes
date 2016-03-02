class Solution {
public:
    int bs(int a[],int n,int target,int low,int high)
    {
        
        int mid=(low+high)/2;
        if(a[mid]==target)
        return mid;
        else if(mid>0 && target>a[mid-1] && target<a[mid])
        return mid;
        else if(mid<n-1 && target>a[mid] && target<a[mid+1])
        return mid+1; 
        else if(mid==0 && a[mid]>target)
        return 0;
        else if(mid==n-1 && a[mid]<target)
        return n;
        else if(a[mid]>target)
        return bs(a,n,target,low,mid-1);
        else if(a[mid]<target)
        return bs(a,n,target,mid+1,high);
    }
    int searchInsert(int A[], int n, int target) {
        return (bs(A,n,target,0,n-1));
    }
};
