https://leetcode.com/problems/leftmost-column-with-at-least-a-one
/**
 * // This is the BinaryMatrix's API interface.
 * // You should not implement it, or speculate about its implementation
 * interface BinaryMatrix {
 *     public int get(int row, int col) {}
 *     public List<Integer> dimensions {}
 * };
 */

class Solution {
    public int leftMostColumnWithOne(BinaryMatrix binaryMatrix) {
       List<Integer> dim = binaryMatrix.dimensions(); 
        int n = dim.get(0);
        int m = dim.get(1);
        int row = 0;
        int col = m-1;
        while(row<n && col >=0){
            if(binaryMatrix.get(row,col) == 0){
                row++;
            }else{
                col--;
            }
        }
        if(col == m-1){
            return -1;
        }
        return col+1;
    }
}
