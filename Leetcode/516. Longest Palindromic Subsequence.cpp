class Solution {
public:
     int dp[1005][1005] ;
    string rev(string a){
        int i = 0, len;
        len  = a.length();
        for(i=0;i<len/2;i++)
        swap(a[i],a[len-i-1]);
        return a;
    }

    
    int longestPalindromeSubseq(string a) {
    	string b= rev(a);
    	int n = a.length();
        for(int i = 0;i<n;i++){
        	for(int j = 0;j<n;j++){
        		if(a[i] == b[j])
        			dp[i+1][j+1] = 1+dp[i][j];
        		else
        			dp[i+1][j+1] = max(dp[i][j+1],dp[i+1][j]);
        	}
        }
        return dp[n][n];
    }
};