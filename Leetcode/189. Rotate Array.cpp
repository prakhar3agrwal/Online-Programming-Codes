class Solution {
public:
    void rotate(int nums[], int n, int k) {
        k%=n;
        for(int i=0;i<(n-k)/2;i++){
            swap(nums[i],nums[n-k-1-i]);
        }
        for(int i=0;i<k/2;i++){
            swap(nums[i+n-k],nums[n-1-i]);
        }
        for(int i=0;i<n/2;i++)
        swap(nums[i],nums[n-1-i]);
    }
};
