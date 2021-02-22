/**
 * Definition for a binary tree node.
 * public class TreeNode {
 *     int val;
 *     TreeNode left;
 *     TreeNode right;
 *     TreeNode() {}
 *     TreeNode(int val) { this.val = val; }
 *     TreeNode(int val, TreeNode left, TreeNode right) {
 *         this.val = val;
 *         this.left = left;
 *         this.right = right;
 *     }
 * }
 */
class Solution {
    private void calculateSum(TreeNode root, int low, int high){
        if(root == null){
            return;
        }
        if(root.val >= low && root.val <=high){
            ans += root.val;
        }
        if(root.val>low){
            calculateSum(root.left, low, high);
        }
        if(root.val<high){
            calculateSum(root.right, low, high);
        }
    }
    int ans;
    public int rangeSumBST(TreeNode root, int low, int high) {
        ans = 0;
        calculateSum(root, low,high);
        return ans;
    }
}