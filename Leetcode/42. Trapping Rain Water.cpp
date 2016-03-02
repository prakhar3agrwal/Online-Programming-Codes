class Solution {
public:
    int trap(vector<int>& h) {
        int left,right,ans=0,n;
        n = h.size();
        for(left = 1; left<n; left++){
            if(h[left] < h[left-1]){
                left--;
                break;
            }
        }
        for(right = n-2; right >=0 ;right --){
            if(h[right] < h[right+1]){
                right++;
                break;
            }
        }
        while(left<=right){
            //move left to right
            if(h[left] <= h[right]){
                int ht = h[left];
                while(left<=right){
                    if(h[left] > ht)
                    break;
                    ans += (ht - h[left]);
                    left++;
                }
            }
            //move right to left
            else{
                int ht = h[right];
                while(left<=right){
                    if(h[right] > ht)
                    break;
                    ans += (ht - h[right]);
                    right--;
                }
            }
        }
        return ans;
        
    }
};
