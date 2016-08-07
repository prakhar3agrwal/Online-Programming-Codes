class Solution {
public:
    int jump(vector<int>& a) {
        int i,j,k,n,jumps,ladder,stairs;
        n = a.size();
        if(n==0 || n==1)return 0;
        jumps = 1, ladder = stairs = a[0];
        for(i = 1; i<n; i++){
            if(i + a[i] > ladder)
            ladder = i+a[i];
            stairs --;
            if(stairs + i >= n-1)
            return jumps;
            if(stairs == 0){
                jumps++;
                stairs = ladder - i;
            }
        }
        return jumps;
    }
};