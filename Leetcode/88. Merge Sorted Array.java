class Solution {
    public void merge(int[] nums1, int m, int[] nums2, int n) {
        
        if(0==n){
            return;
        }
        int i,j,k;
        i = m-1; j=n-1;k=m+n-1;
        while(i>=0 && j>=0){
            if(nums1[i] > nums2[j]){
                nums1[k] = nums1[i];
                i--;
            }else{
                nums1[k] = nums2[j];
                j--;
            }
            k--;
        }
        if(i>=0){
            while(i>=0){
                nums1[k] = nums1[i];
                i--;
                k--;
            }
        }else if(j>=0){
            while(j>=0){
                nums1[k] = nums2[j];
                j--;
                k--;
            }
        }
    }
}
