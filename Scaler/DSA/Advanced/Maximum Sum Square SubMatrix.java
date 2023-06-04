/*
Problem Description
Given a 2D integer matrix A of size N x N, find a B x B submatrix where B<= N and B>= 1, such that the sum of all the elements in the submatrix is maximum.

Problem Constraints
1 <= N <= 10^3.
1 <= B <= N
-10^2 <= A[i][j] <= 10^2.


Input Format
First arguement is an 2D integer matrix A.
Second argument is an integer B.

Output Format
Return a single integer denoting the maximum sum of submatrix of size B x B.

Example Input
Input 1:
 A = [
        [1, 1, 1, 1, 1]
        [2, 2, 2, 2, 2]
        [3, 8, 6, 7, 3]
        [4, 4, 4, 4, 4]
        [5, 5, 5, 5, 5]
     ]
 B = 3
Input 2:
 A = [
        [2, 2]
        [2, 2]
    ]
 B = 2


Example Output
Output 1:
 48
Output 2:
 8

Example Explanation
Explanation 1:
    Maximum sum 3 x 3 matrix is
    8 6 7
    4 4 4
    5 5 5
    Sum = 48
Explanation 2:

 Maximum sum 2 x 2 matrix is
  2 2
  2 2
  Sum = 8
*/


public class Solution {
    public int solve(int[][] A, int B) {
        int n = A.length;
        int ans = Integer.MIN_VALUE;
        
        int[][] dp = new int[n+1][n+1];
        for(int i = 1;i<=n;i++){
            for(int j=1;j<=n;j++){
                dp[i][j] = A[i-1][j-1] + dp[i-1][j] + dp[i][j-1] - dp[i-1][j-1];  
            }
        }
        for(int i=1;i<=n;i++){
            for(int j=1;j<=n;j++){
                if(i-B>=0 && j-B>=0){
                    int curr = dp[i][j] - dp[i-B][j] - dp[i][j-B] + dp[i-B][j-B]; 
                    ans = Math.max(ans, curr);
                }
            }
        }
        return ans;
    }
}
