/*
Given a binary sorted matrix A of size N x N. Find the row with the maximum number of 1.

NOTE:

If two rows have the maximum number of 1 then return the row which has a lower index.
Rows are numbered from top to bottom and columns are numbered from left to right.
Assume 0-based indexing.
Assume each row to be sorted by values.
Expected time complexity is O(rows + columns).

Problem Constraints
1 <= N <= 1000
0 <= A[i] <= 1

Input Format
The only argument given is the integer matrix A.

Output Format
Return the row with the maximum number of 1.

Example Input
Input 1:

 A = [   [0, 1, 1]
         [0, 0, 1]
         [0, 1, 1]   ]
Input 2:

 A = [   [0, 0, 0, 0]
         [0, 0, 0, 1]
         [0, 0, 1, 1]
         [0, 1, 1, 1]    ]
         
Example Output
Output 1:
 0
 
Output 2:
 3
*/


public class Solution {
    public int solve(int[][] A) {
        int n  = A.length;
        int r = 0;
        int c = n-1;
        int maxOne = 0;
        int ans = 0;
        while(r<n && c>=0){
            if(A[r][c] == 1){
                maxOne++;
                ans = r; 
                c--;
            }else{
                r++;
            }
        }
        return ans;
    }
}
